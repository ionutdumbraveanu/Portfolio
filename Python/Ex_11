    
'''
Creati o clasa dictionar, cu urmatoarele metode:
    - init, care atribuie fiecarei instante un dictionar
        (cheia va fi cuvantul, valoarea va fi descrierea)
    - adauga, care va permite adaugarea succesiva de cuvinte. Va avea:
        - input cuvant
        - o conditie de iesire daca am terminat de introdus cuvinte
        - testeaza daca cuvantul introdus exista. Daca exista apeleaza aceeasi metoda: self.adauga()
        - daca nu exista introduce si descrierea
        - il introduce in dictionar
    - modifica, care va permite modificarea succesiva de cuvinte. Va avea:
        - testeaza daca dictionarul e gol
        - input cuvant
        - o conditie de iesire daca am terminat de modificat cuvinte
        - testeaza daca cuvantul de modificat exista. Daca exista il modifica.
    - cauta, care va permite cautare succesiva de cuvinte. Va avea:
        - testeaza daca dictionarul e gol
        - input cuvant
        - o conditie de iesire daca am terminat de cautat cuvinte
        - testeaza daca cuvantul exista. Daca exista printeaza cheie si valoare.
    - sterge, care va permite stergerea succesiva de cuvinte. Va avea:
        - testeaza daca dictionarul e gol
        - input cuvant
        - o conditie de iesire daca am terminat de sters cuvinte
        - testeaza daca cuvantul exista. Daca exista il sterge.
    - afiseaza, care va permite listarea dictionarului:
    
''' #

class Dictionar:

    def __init__(self):
        self.dic = {}

    def adauga(self):
        while True:
            cuvant = input("Introudceti cuvantul dorit: (Apasati enter pentru a iesi)")
            if cuvant:
                if cuvant in self.dic:
                    print("Cuvantul este deja in dictionar, adaugati altul!")
                    continue
                else:
                    descriere = input(f"Introduceti descrierea pentru cuvantul {cuvant}")
                    if descriere in self.dic.values():
                        pass
                    else:
                        self.dic[cuvant] = descriere
            else:
                break


    def modifica(self):
        if self.dic:
            schimb = input("Ce cuvant doriti sa modificati?")
            if schimb in self.dic:
                inlocuire = input(f"Cu ce doriti sa inlocuiti cuvantul {schimb} ?")
                descriere_noua = input(f"Care este noua descriere a cuvantului {inlocuire}?")
                self.dic.update({inlocuire: descriere_noua})
                self.dic.pop(schimb)
            else:
                print("Cuvantul pe care doriti sa-l modificati nu exista")
        else:
            print('Ditionarul este gol!')


    def cauta(self):
        if self.dic:
            while True:
                cuv = input("Ce cuvant doriti sa cautati?(Apasati enter pentru a iesi)")
                if cuv:
                    count=0
                    for i in self.dic:
                        if i == cuv:
                            count=1
                    if count==1:
                        print("Cuvantul a fost gasit")
                    else:
                        print("Cuvantul nu a fost gasit")

                else:
                    break
        else:
            print("Dictionarul este gol!")


    def sterge(self):
        if self.dic:
            schimb = input("Ce cuvant doriti sa stergeti?")
            if schimb in self.dic:
                print(f"Cuvantul {schimb} a fost sters")
                self.dic.pop(schimb)
            else:
                print("Cuvantul pe care doriti sa-l stergeti nu exista")
        else:
            print('Ditionarul este gol!')


    def afiseaza(self):
        print(self.dic)

a = Dictionar()

while True:
    print(""""Introduceti:
        0 - Pentru afisare 
        1 - Pentru introducerea unui element nou
        2 - Pentru stergerea unui element existent
        3 - Pentru a cauta un element
        4 - Pentru a modifica un element
        9 - Pentru iesire
        """)
    print('*' * 60)
    alegere = input("Introduceti optiunea:")
    print('*' * 60)
    if alegere == '0':
        a.afiseaza()
    elif alegere =='1':
        a.adauga()
    elif alegere == '2':
        a.sterge()
    elif alegere == '3':
        a.cauta()
    elif alegere == '4':
        a.modifica()
    elif alegere == '9':
        del(a)
        print("O zi buna!")
        break
