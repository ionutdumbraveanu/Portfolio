"""
    Avem aplicatia care tine stocul unui depozit (Cap 5-6). Efectuati urmatoarele imbunatatiri:
	
	Este necesar rezolvati minim 5 din punctele de mai jos:

1. Implementati o solutie care sa returneze o proiectie grafica a intrarilor si iesirilor intr-o
anumita perioada, pentru un anumit produs;	--pygal--

2. Implementati o solutie care sa va avertizeze automat cand stocul unui produs este mai mic decat o 
limita minima, predefinita per produs. Limita sa poata fi variabila (per produs). Preferabil sa 
transmita automat un email de avertizare;

3. Creati o metoda cu ajutorul careia sa puteti transmite prin email diferite informatii(
de exemplu fisa produsului) ; 	--SMTP--

4. Utilizati Regex pentru a cauta :
    - un produs introdus de utilizator;
    - o tranzactie cu o anumita valoare introdusa de utilizator;	--re--

5. Creati o baza de date care sa cuprinda urmatoarele tabele:	--pymysql--  sau --sqlite3--
    Categoria
        - idc INT NOT NULL AUTO_INCREMENT PRIMARY KEY (integer in loc de int in sqlite3)
        - denc VARCHAR(255) (text in loc de varchar in sqlite3)
    Produs
        - idp INT NOT NULL AUTO_INCREMENT PRIMARY KEY
        - idc INT NOT NULL
        - denp VARCHAR(255)
        - pret DECIMAL(8,2) DEFAULT 0 (real in loc de decimal)
        # FOREIGN KEY (idc) REFERENCES Categoria.idc ON UPDATE CASCADE ON DELETE RESTRICT
    Operatiuni
        - ido INT NOT NULL AUTO_INCREMENT PRIMARY KEY
        - idp INT NOT NULL
        - cant DECIMAL(10,3) DEFAULT 0
        - data DATE

6. Imlementati o solutie cu ajutorul careia sa populati baza de date cu informatiile adecvate.

7. Creati cateva view-uri cuprinzand rapoarte standard pe baza informatiilor din baza de date. --pentru avansati--

8. Completati aplicatia astfel incat sa permita introducerea pretului la fiecare intrare si iesire.
Pretul de iesire va fi pretul mediu ponderat (la fiecare tranzactie de intrare se va face o medie intre
pretul produselor din stoc si al celor intrate ceea ce va deveni noul pret al produselor stocate).
Pretul de iesire va fi pretul din acel moment;  

9. Creati doua metode noi, diferite de cele facute la clasa, testatile si asigurativa ca functioneaza cu succes;


""" #


from datetime import datetime
from prettytable import PrettyTable


class Stoc:

    lista_produse = [] # lista cu produse instantiate
    dict_prod = {}   # {categoria:[produs1,produs2]}

    def __init__(self, produs, categoria, unitate_de_masura='kg', sold=0):
        self.produs = produs
        self.categoria = categoria
        self.unitate_de_masura = unitate_de_masura
        self.sold = sold
        self.dict_op = {}
        Stoc.lista_produse.append(self.produs)
        if categoria in self.dict_prod:
            self.dict_prod[categoria] += [produs]
        else:
            self.dict_prod[categoria] = [produs]

    def gen_cheie(self):
        if self.dict_op:
            cheia = max(self.dict_op)  + 1
        else:
            cheia = 1
        return cheia

    def intrari(self, cant, pret_intrare, data =str ( datetime.now ( ).strftime ( '%Y%m%d' ) )):
        cheie = self.gen_cheie()
        self.dict_op[cheie] = [data, cant, pret_intrare]
        self.sold += cant
        self.pret_intrare = pret_intrare
        self.pondere1 = pret_intrare*cant

    def iesiri(self, cant,pret_iesire, data=str(datetime.now().strftime('%Y%m%d'))):
        cheie = self.gen_cheie()
        self.dict_op[cheie] = [data, pret_iesire, cant]
        if self.sold >= cant:
            self.sold -= min(cant, self.sold)
        else:
            print(f"Stoc insuficient, putem vinde doar {self.sold}")
            #self.cerinta2()
            self.sold = 0
        self.pret_iesire = pret_iesire
        self.pret_iesire = (self.pondere1 + (cant* self.pret_iesire))/(((self.pondere1/self.pret_intrare))+cant)

    def fisaprodusului(self):
        print('-'*45)
        print("Fisa produsului denumire si um")
        printeaza = PrettyTable()
        printeaza.field_names=["Nrc", "Data","Intrare", "Iesire"]
        for k,v in self.dict_op.items():
            printeaza.add_row([k, v[0], v[1],v[2]])
        print('-' * 45)
        print("Stoc final", self.sold)
        print('-' * 45)
        print(printeaza)

    def cerinta1(self):
        import pygal
        grafic = pygal.Line(title='Intrari/Iesiri',
                                  x_title='Timp',
                                  y_title='Intrari/Iesiri',
                                  title_font_size=25)
        intrari = []
        iesiri = []
        data = []
        for k in self.dict_op:
            intrari.append(self.dict_op[k][1])
            iesiri.append(self.dict_op[k][2])
            data.append(self.dict_op[k][0])
        # Mai jos avem testare pentru a vedea daca datele sunt extrase corect
        #print(intrari)
        #print(iesiri)
        #print(data)
        grafic.add('Intrari', intrari)
        grafic.add('Iesiri', iesiri)
        grafic.x_labels = data
        grafic.render_to_file("grafic1.svg")

    def cerinta2(self, limita):
        self.limita = limita
        if self.sold <= self.limita:
            expeditor = input("Introduceti adresa de mail a expediotrului")
            destinatar = input("Introduceti adresa de mail a destinatarului")
            username = input("Introduceti username-ul")
            parola = input("Introduceti parola")
            subiect = "Atingere limita!"
            mesaj = """From: {0}
                    To: {1}
                    Subject: {2}

                    Salut!

                    Limita produsului {3} de  {4} a fost atinsa!

                    Ionut Dumbeaveanu
                    """.format(expeditor, destinatar, subiect, self.produs, self.limita )
            import smtplib
            smtp_ob = smtplib.SMTP('smtp.mail.yahoo.com:587')
            try:

                smtp_ob.login(username, parola)
                smtp_ob.sendmail(expeditor, destinatar, mesaj)
                print('Mesaj expediat cu succes!')
            except:
                print('Mesajul nu a putut fi expediat!')
            finally:
                smtp_ob.close()
        else:
            print("Limita nu a fost atinsa, stocul este suficient!")


    def cerinta3(self):

        expeditor = input("Introduceti adresa de mail a expediotrului")
        destinatar = input("Introduceti adresa de mail a destinatarului")
        username = input("Introduceti username-ul")
        parola = input("Introduceti parola")
        subiect = "Fisa Produsului"
        mesaj = """From: {0}
                To: {1}
                Subject: {2}

                Fisa Produsului

                {3}

                Paul
                """.format(expeditor, destinatar, subiect, Stoc.fisaprodusului)

        import smtplib
        smtp_ob = smtplib.SMTP('smtp.mail.yahoo.com:587')
        try:
            #
            # smtp_ob.starttls()  	# protocol criptare. e posibil sa nu mearga daca e activat
            smtp_ob.login(username, parola)
            smtp_ob.sendmail(expeditor, destinatar, mesaj)
            print('Mesaj expediat cu succes!')
        except:
            print('Mesajul nu a putut fi expediat!')
        finally:
            smtp_ob.close()


    def cerinta4(self):

        import re
        x= input("Introduceti produsul pe care doriti sa l cautati:")
        rezultat = re.findall(r"(?=("+'|'.join(Stoc.lista_produse)+r"))", x)
        print(rezultat)

    def cerinta5(self):
        import mysql.connector
        # Credentiale conectare
        host = "localhost"
        passwd = 'qwer'
        port = 3306  # normal portul e 3306. Daca e diferit trebuie mentionat acela
        user = "root"
        dbname = "data1"

        db = mysql.connector.connect(host=host, port=port, user=user, passwd=passwd, db=dbname,auth_plugin='mysql_native_password')

        cursor = db.cursor()
        cursor.execute("CREATE TABLE Categoria(idc INT NOT NULL AUTO_INCREMENT PRIMARY KEY,\
                        denc VARCHAR(255))")
        cursor.execute("CREATE TABLE Produs(idp INT NOT NULL AUTO_INCREMENT PRIMARY KEY,\
                        idc INT NOT NULL,denp VARCHAR(255),\
                        pret DECIMAL(8,2) DEFAULT 0 (real in loc de decimal),\
                        FOREIGN KEY (idc) REFERENCES Categoria.idc ON UPDATE CASCADE ON DELETE RESTRICT)")
        cursor.execute("CREATE TABLE Operatiuni(ido INT NOT NULL AUTO_INCREMENT PRIMARY KEY,\
                        idp INT NOT NULL,\
                        cant DECIMAL(10,3) DEFAULT 0,data DATE)")
        db.commit()

    def cerinta6(self):

        import mysql.connector as mydb
        connect = mydb.connect(passwd='qwer', user='root', host='localhost', port=3306)
        cursor = connect.cursor()
        cursor.execute('Use ' + 'data1')
        cursor.execute(self.dict_op)
        connect.commit()
        cursor.close()


paine = Stoc('paine', 'panificatie', 'buc')
paine.intrari(100,20,'20211020')
paine.intrari(100,100,'20211021')
paine.intrari(100,30,'20211022')
paine.intrari(100,40,'20211023')
paine.intrari(100,40,'20211024')
paine.iesiri(50,20, '20211025')
paine.iesiri(23,30, '20211026')
paine.iesiri(67,15, '20211027')
paine.iesiri(12,8, '20211028')
paine.fisaprodusului()
paine.cerinta1()
paine.cerinta2(1000)
paine.cerinta3()
paine.cerinta4()
paine.cerinta5()
paine.cerinta6()

