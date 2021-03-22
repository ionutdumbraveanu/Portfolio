# --------------------------------------------------------------------------------------------------#
# Creati o functie care sa calculeze si sa returneze [a(a+3)/b]*c exclusiv pentru 3 numere a, b, c. #
# Daca nu sunt numere returnati sirul de caractere "Parametrii trebuie sa fie numere: ":            #
# --------------------------------------------------------------------------------------------------#
def f(a,b,c):
    if (type(a) == float or type(a) == int) and (type(b) == float or type(b) == int) and \
            (type(c) == float or type(c) == int):
        return a * (a+3) / b * c
    else:
        x=''
        if(type(a)!= int and type(a)!= float):
            x= str(a)
        if (type(b) != int and type(b) != float):
            x= x+' '+ str(b)
        if (type(c) != int and type(c) != float):
            x= x+' '+ str(c)
        print("Parametrii trebuie sa fie numere: ")
        return x

print(f(1,2,3))
print(f('da',2,'gasdds'))
