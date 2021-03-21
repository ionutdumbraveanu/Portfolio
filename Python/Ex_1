
"""
 Creati un program cu o lista de cumparaturi utilizand dictionarionare in loc de liste.
 Programul va avea cele 4 functionalitati:
    - adaugare
    - stergere
    - afisare
    - iesire din program
 Folositi chei numerice incepand de la 1
 Valoarea intrarii trebuie sa fie introdusa de utilizator de la tastatura din meniul adaugare.
 Afisarea dictionarionarului se va face de forma: key => Value
 """

dictionar = {}
dictionar1 = {}
key = 1

print("Bine ati Venit!".center(40))

while True:
    print(""""Introduceti:
        0 - Pentru afisare lista actuala
        1 - Pentru introducerea unui element nou
        2 - Pentru stergerea unui element existent
        3 - Pentru stergerea intregii liste
        9 - Pentru iesire
        """)
    print('*' * 60)
    alegere = input("Introduceti optiunea:")
    print('*' * 60)
    if alegere == '0':
        if dictionar:
            for k in dictionar:
                print('=>', dictionar[k])
        else:
            print('Lista e goala')
            print('*' * 60)
    elif alegere == '1':
        while True:
            el_nou = input('Introduceti un element nou:(Apasati enter daca vreti sa iesiti)').lower()
            if el_nou == '':
                break
            else:
                dictionar.update({key: el_nou})
                print('*' * 60)
                key = key + 1
    elif alegere == '2':
        dictionar1 = dictionar.copy()
        if dictionar1:
            sterge = input("Introduceti elementul pe care doriti sa l stergeti:").lower()
            sterge_indicator = 0
            for k in dictionar:
                if dictionar[k] == sterge:
                    del dictionar1[k]
                    sterge_indicator = 1
            if sterge_indicator == 1:
                print(f'Elementul {sterge} a fost sters!')
                print('*' * 60)
            dictionar = dictionar1.copy()
        else:
            print("Lista este goala!")
            print('*' * 60)
    elif alegere == '3':
        if dictionar:
            dictionar.clear()
            print('Lista a fost stearsa')
        else:
            print('Lista este deja goala')
            print('*' * 60)
    elif alegere == '9':
        print('Va multumim pentru folosirea aplicatei!')
        break

input('Apasa <enter> pt a iesi.')
