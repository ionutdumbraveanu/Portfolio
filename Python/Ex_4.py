enunt = """
# ------------------------------------------------------------------------------------------#
# Creati o aplicatie bancara, pentru incasari in contul clientilor						    #
# clientii n-ar fi incantati sa primeasca/plateasca o suma aproximativa generata de float,  #
# asa ca banca tine evidenta conturilor in subunitati monetare (bani -> 1 leu = 100 bani)   #
# asta inseamna ca putem utiliza numere intregi in tranzactii, iar cand dorim sa afisam     #
# impartim rezultatul suma / 100 					                                        #
# ------------------------------------------------------------------------------------------#"""


def aplicatie_bancara():
    sold = 0
    while True:
        print('-' * 40)
        print("""
            Bine ati venit in aplcatie! 
            Alegeti una dintre optiunile de mai jos:
            1 . Interogare sold
            2 . Adaugare fonduri
            3 . Efectuare plata
            4 . Iesire din aplicatie        
                    """)
        print('-' * 40)
        alegere = input()
        if alegere == '1':
            if sold >= 0:
                print('-' * 40)
                print(f'Soldul dumneavoastra este: {float(sold/100)} lei')
                print('-' * 40)
            else:
                print('-' * 40)
                print("Nu aveti fonduri! Introduceti bani!")
                print('-' * 40)
        elif alegere == '2':
            new_money = float(input('Introducet suma pe care doriti sa o depozitati: (in lei)'))
            sold = sold + int((new_money * 100))
        elif alegere == '3':
            plata = float(input('Introduceti suma pe care doriti sa o platiti: (in lei)'))
            plata = plata * 100
            if int(plata) < sold:
                sold = sold - int(plata)
                print('-' * 40)
                print('Plata dumneavoastra a fost procesata!')
                print(f'Sold dupa tranzactie: {float(sold/100)} lei')
                print('-' * 40)
            else:
                print('-' * 40)
                print('Fonduri insuficiente pentru efectuarea acestei plati!')
                print('-' * 40)
        elif alegere == '4':
            print('-' * 40)
            print('Multumim pentru folodsirea aplicatiei!')
            print('-' * 40)
            break
        else:
            print('-' * 40)
            print('Nu ati introdus o optiune valabila!')
            print('-' * 40)


aplicatie_bancara()
