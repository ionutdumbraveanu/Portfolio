
from math import sqrt, pi, sin, cos     

enunt = '''
1.-----------------------------------------------------------------------------------
Teorema lui Pitagora. Calculeaza lungimea ipotenuzei intr-un triunghi dreptunghic
 - primeste dimensiunile catetelor
 - reeturneaza radacina patrata a sumei patratelor catetelor

2.-----------------------------------------------------------------------------------
Scrieti o functie ce primeste ca argument raza sferei. Va returna:
 - diametrul: D = 2r
 - circumferinta: C = 2πr
 - aria: A = 4πr²
 - volumul sferei: V = 4/3πr³ .
Fiecare din cele 4 informatii va fi printata pe cate un rand, cu 2 zecimale.
Apelati functia.

3.-----------------------------------------------------------------------------------
Cumparaturi online, costul de transport total are doua componente:
 - cost fix 5 lei
 - cost variabil 0.02 lei la fiecare 10 lei cost produs
Apelati functia

4.-----------------------------------------------------------------------------------
Pe un plan avem doua puncte a(x1, y1) si b(x2, y2). Scrieti un program care sa calculeze panta
intre a si b. Panta este (y2-y1) / (x2-x1)

5.-----------------------------------------------------------------------------------
Calculati distanta intre doua puncte in plan (radical din (x2-x1)² + (y2-y1)²)

6.-----------------------------------------------------------------------------------
Calculeaza suma a n numere, n introdus de utilizator

7.-----------------------------------------------------------------------------------
Calculeaza suma cuburilor a n numere, n introdus de utilizator

8.-----------------------------------------------------------------------------------
Creati un program care sa listeze puterile lui doi de la 1 la n

9.-----------------------------------------------------------------------------------
Leibniz a calculat valoarea lui π astfel:
π = 4( 1 – 1/3 + 1/5 – 1/7 + … )
Cu cat numarul de iteratii este mai mare, cu atat precizia este mai mare.
Scrieti un program, cu o functie, care sa primeasca numarul de iteratii si sa
returneze valoarea lui π.
''' #

def pitagora(cateta1, cateta2):
    """ 1.returneaza lungimea ipotenuzei intr-un triunghi dreptunhic"""
    return sqrt(pow(cateta1,2) + pow(cateta2,2))

print(pitagora(4,5))



def cerc(raza):
    """ 2. Afiseaza diametrul, circumferinta, aria, volumul sferei"""
    print(f"Diametrul: {2 * raza : .2f}")
    print(f"Circumferinta: {2 * raza * pi: .2f}")
    print(f"Aria: {4 * pow(raza,2) * pi: .2f}")

cerc(1)


def cumparaturi(cost_podus):
    """ 3. Cost de transport = cost fix + 0.02 per 10 lei"""
    transport= 5
    while cost_podus:
        cost_podus = cost_podus - 10
        transport = transport + 0.02
    return transport

cost=100
print(f'Cost transport pentru suma de {cost} este: {cumparaturi(cost): .2f}')


def panta(a=(),b=()):
    """4. Panta dintre 2 pucnte"""
    return (b[1]-a[1])/(b[0]-a[0])

el1=(1,1)
el2=(2,3)
print(panta(el1,el2))


def distanta(a=(),b=()):
    """5. Calculeaza distana dintre 2 puncte in plan"""
    return sqrt(pow((b[0]-a[0]),2) +pow((b[1]-a[1]),2) )

el1=(1,1)
el2=(2,3)
print(f"{distanta(el1,el2):.2f}")


def suma_n(n:int):
    """6. Suma a n numere """
    s=0
    for i in range(0,n):
        s=s+i
    return s

print(suma_n(5))



def suma_cub(n:int):
    """7. Suma cuburilor a n numere """
    s=0
    for i in range(0,n):
        s=s+pow(i,3)
    return s

print(suma_cub(3))


def puteri_2(n:int):
    """8. Puterile lui 2 de la 1 la 100"""
    for i in range(0,n):
        print(f'{i} -> {pow(i,2)}')

puteri_2(100)


def leibnitz(n:int):
    """9. In fucntie de numarul de iteratii returneaza pi mai precis"""
    s=1
    for i in range(1,n):
        if i % 2 == 1:
            k = 1/(i+2)
            s = s - k

        else:
            k = 1/(i+2)
            s = s + k
    return 4*s

print(leibnitz(10000))
