
enunt = """Creati un program cu o functie care returneaza numarul de cifre dintr-un sir
de caractere dat ca parametru de intrare. Aplicati functia pentru trei siruri
diferite introduse de la tastatura.
Creati o functie care numara literele, cifrele, spatiile si total caractere
"""

def nr_cifre(sir:str):
    count = 0
    for i in sir:
        if i.isdecimal():
            count +=1
    return count

def verif(sir):
    try:
        nr_cifre(sir)
    except:
        print("Nu ai introdus un sir de caractere")
    else:
        print(f"Numarul de cifre din sir este: {nr_cifre(sir)}" )

a = input("Introudceti un sir de caractere:")
verif(a)
