
"""
    Creati un program cu o lista de CD/DVD-uri utilizand dictionare si liste.
    Functionalitati:
        -> afisare 
        -> adaugare
        -> stergere element
        -> stergere dictionar
        -> cautare, modificare
        -> iesire din program
    Afisarea dictionarului se va face de forma: key => Value.
    Folositi chei numerice incepand de la 1, iar valoarea intrarii trebuie sa fie
introdusa de utilizator de la tastatura din meniul adaugare.
    Value va fi o lista care sa contina urmatoarele elemente introduse de utilizator:
        Titlu   	sir de caractere
        Continut  	sir de caractere
    La adaugarea unei intrari noi in dictionar sa se caute urmatoarea cheie libera (incrementare).
    Dupa fiecare intrare in dictionar afisati fiecare element al listei stocate pe cate un rand.
    Pe langa facilitatile indicate mai sus (adaugare, stergere, afisare, iesire din program)
adaugati posibilitatea de a cauta o intrare dupa un sir de caractere, dupa Titlu
sau Continut (in acelasi timp implementat prin  or  ). Listare titlu si continut sau inexistent.
"""  #

dictionar = {}
dictionar1 = {}

while True:
    print(""""Introduceti:
             0 - afisare
             1 - adaugare
             2 - stergere element
             3 - stergere dictionar
             4 - cautare
             5 - modificare
             9 - iesire din program""")
    print('-' * 50)
    alegere = input("Introudceti optiunea:")
    if alegere == '0':  # afisare
        dictionar1 = dictionar.copy()
        if dictionar1:
            for k in dictionar1:
                print(k, '=>', dictionar1[k])
        else:
            print('Lista este goala!')
            print('-' * 50)
    elif alegere == '1':            # adaugare
        while True:
            while True:
                key = input("Introduceti numarul filmului introdus: ")
                if key.isdigit():
                    key = int(key)
                    break
                else:
                    print('Nu ati introdus un numar! Incercati din nou')
            el_nou = input("Introduceti  titlul si continutul separate prin caracterul '-' (Apasati enter pentru a iesi)").lower()
            if el_nou == '':
                break
            else:
                lista = ['Titlu', 'Continut']
                lista1 = []
                lista1 = el_nou.split('-')
                print(f"Titlu   : {lista1[0]}")
                print(f"Continut: {lista1[1]}")
                lista.insert(1, lista1[0])
                lista.insert(3, lista1[1])
                while True:
                    if key in dictionar:
                        key = key + 1
                    else:
                        break
                dictionar[key] = lista
    elif alegere == '2':            # stergere element
        dictionar1 = dictionar.copy()
        if dictionar1:
            alegere_stergere = input("Alegeti criteriul de stergere: Titlu, Continut, Numar Element (Apasa enter pentru a iesi)").lower().replace(' ', '')
            if alegere_stergere == '':
                break
            else:
                if alegere_stergere == 'titlu':
                    sterge = input('Introduceti titlul filmului pe care doriti sa l stergeti: (Apasati enter pentru a iesi)')
                    if sterge == '':
                        break
                    else:
                        for k in dictionar:
                            if sterge == dictionar[k][1]:
                                del dictionar1[k]
                                sterge_identificator = 1
                        if sterge_identificator == 1:
                            print(f'Elementul cu titlul {sterge} a fost sters!')
                            print('-' * 50)
                    dictionar=dictionar1.copy()
                elif alegere_stergere == 'continut':
                    sterge = input('Introduceti continutul filmului pe care doriti sa l stergeti: (Apasati enter pentru a iesi)')
                    if sterge == '':
                        break
                    else:
                        for k in dictionar:
                            if sterge == dictionar[k][3]:
                                del dictionar1[k]
                                sterge_identificator = 1
                        if sterge_identificator == 1:
                            print(f'Elementul cu titlul {sterge} a fost sters!')
                            print('-' * 50)
                    dictionar = dictionar1.copy()
                elif alegere_stergere == 'numarelement':
                    sterge = input('introduceti numarul filmului pe care doriti sa l stergeti: (Apasati enter pentru a iesi)')
                    if sterge == '':
                        break;
                    else:
                        sterge = int(sterge)
                        for k in dictionar:
                            if sterge == k:
                                del dictionar1[k]
                                sterge_identificator = 1
                        if sterge_identificator == 1:
                            print(f'Elementul cu titlul {sterge} a fost sters!')
                            print('-' * 50)
                    dictionar = dictionar1.copy()
                else:
                    print("Alegerea facuta nu este valida! Incearca din nou!")
                    print('-' * 50)

        else:
            print('Lista este goala! Adaugati elemente!')
            print('-' * 50)
    elif alegere == '3':            # stergere dictionar
        if dictionar:
            dictionar.clear()
            print("Colectia a fost stearsa!")
            print('-' * 50)
        else:
            print('Lista este goala! Adaugati elemente!')
            print('-' * 50)
    elif alegere == '4':            # cautare
        if dictionar:
            film_gasit = 0
            intrare = input('Introduceti titlul sau continutul pe care-l cautati! (Apasati enter sa iesiti)')
            if intrare == '':
                break
            else:
                for k in dictionar:
                    if intrare == dictionar[k][1] or intrare == dictionar[k][3]:
                        print('Filmul se afla in colectie!')
                        print('-' * 50)
                        film_gasit = 1
                if film_gasit == 0:
                    print('Filmul nu a fost gasit!')
                    print('-' * 50)
        else:
            print('Lista este goala! Adaugati elemente!')
            print('-' * 50)
    elif alegere == '5':            # modificare
        if dictionar:
            dictionar1= dictionar.copy()
            intrare = input('Ce doriti sa modificati? (Titlu/Continut)').lower()
            if intrare == '':
                break
            else:
                if intrare == 'titlu':
                    i = input('Introduceti titlul pe care doriti sa-l modificati:')
                    titlu_gasit = 0
                    for k in dictionar:
                        if i == dictionar[k][1]:
                            titlu_gasit = 1
                            titlu_nou = input('Cum se va numi noul titlu?')
                            dictionar1[k].remove(i)
                            dictionar1[k].insert(1,titlu_nou)
                    if titlu_gasit ==1:
                        print('Titlul s-a schimbat!')
                        print('-' * 50)
                    dictionar = dictionar1.copy()
                elif intrare == 'continut':
                    i = input('Introduceti continutul pe care doriti sa-l modificati:')
                    titlu_gasit = 0
                    for k in dictionar:
                        if i == dictionar[k][3]:
                            titlu_gasit = 1
                            titlu_nou = input('Cum se va numi noul continut?')
                            dictionar1[k].remove(i)
                            dictionar1[k].insert(3, titlu_nou)
                    if titlu_gasit == 1:
                        print('Continutul s-a schimbat!')
                        print('-' * 50)
                    dictionar = dictionar1.copy()
                else:
                    break

        else:
            print('Lista este goala! Adaugati elemente!')
            print('-' * 50)
    elif alegere == '9':            # iesire din program
        print('Va multumim pentru folosirea programului!')
        break
