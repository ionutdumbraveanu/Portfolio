enunt = '''
Organizati un concurs, la care pot participa un numar variabil de concurenti.
- daca sunt mai putin de 3 participanti se anuleaza;
- intre 3-10 participanti - vor fi trei premianti 50, 35, 15 % din valoarea premiului;
- intre 11-30 participanti - 5 premianti cu 40, 30, 10, 10, 10 %
- peste 31 de participanti - 10 premianti cu 30, 20, 15, 5, 5, 5, 5, 5, 5, 5 %

Creati o functie care sa primeasca ca argument total premii si numarul de participanti
si sa returneze valoarea premiilor pentru fiecare castigator (locul 1, 2, etc.).

Creati o alta functie, care sa tina cont si de impozit, astfel incat premiile mai mari de
10000 de lei sa fie impozitate cu 10%.
'''  #

def concurs(total_premii:int, nr_participanti :int):
    lista_castigatori=[]
    if nr_participanti < 3:
        print("Concursul s-a anulat!")
        return lista_castigatori
    elif nr_participanti >= 3 and nr_participanti <=10:
        lista_castigatori = [0.5 * total_premii, 0.35 * total_premii , 0.15*total_premii]
        return lista_castigatori
    elif nr_participanti >=11 and nr_participanti <=31:
        lista_castigatori = [0.4 * total_premii, 0.3 * total_premii, 0.1 * total_premii,0.1 * total_premii,
                             0.1 * total_premii]
        return lista_castigatori
    elif nr_participanti >= 31:
        lista_castigatori = [0.3 * total_premii, 0.2 * total_premii, 0.15 * total_premii, 0.05 * total_premii,
                             0.05 * total_premii,0.05 * total_premii,0.05 * total_premii,0.05 * total_premii,
                             0.05 * total_premii,0.05 * total_premii,]
        return lista_castigatori

def impozit(l:list):
    for i in range(len(l)):
        if l[i] > 10000:
            l[i] = l[i] - 0.1*l[i]
            l[i] = int(l[i])
    return l

total_prem = int(input("Introduceti suma totala alocata pentru concurs: "))
nr_concurenti = int(input("Introduceti numar concurenti: "))

print(concurs(total_prem, nr_concurenti))
print(impozit(concurs(total_prem,nr_concurenti)))
