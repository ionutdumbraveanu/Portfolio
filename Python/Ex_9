'''
 Creati o clasa pentru prelucrare de texte, la initializare trebuie data calea catre fisier
    Creati o metoda pentru scriere
    Creati o metoda pentru citire fisiere
    Creati o metoda care sa faca split in cuvinte
    Creati o metoda care sa numere cate aparitii are un cuvant dat.
    Utilizati metodele create
''' #

class Prelucrare :

    def __init__(self):
        self.cale = "//home//ionut//pyhton//C5//T53_fisier"

    def scriere(self):
        text = open(self.cale, "w")
        raspuns= input("Ce doriti sa scrieti in fisier?")
        text.write(raspuns)
        text.close()

    def citire(self):
        text = open(self.cale, "r")
        x = text.read()
        print(x)
        text.close()

    def splitincuv(self):
        l = []
        text = open(self.cale, "r")
        x = text.read()
        l = x.split(" ")
        text.close()
        return l

    def nr_aparitii(self, cuv):
        text = open(self.cale, "r")
        x = text.read()
        l = x.split(" ")
        text.close()
        nr_ap = l.count(str(cuv))
        return nr_ap

j = Prelucrare()
j.scriere()
print(j.nr_aparitii('ana'))
