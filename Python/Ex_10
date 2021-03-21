'''
 Creati o clasa ce va reprezenta un catalog:
    La initializare trebuie sa oferim doi parametrii de intrare:  nume si prenume
 Creati o metoda care afiseaza absente implementat cu __str__
 Creati o metoda care incrementeaza cu 1 nr. de absente
 Creati o metoda care sterge un numar de absente dat(exclusiv un numar - verifica)
  (pentru cazurile in care avem o scutire medicala) fara a deveni numar negativ

 Creati 1 student numit (alege nume)
 Aplicati de 3 ori prin metoda pentru incrementare absente
 Stergeti doua absente prin metoda specificata

 Creati al doilea student numit (alege alt nume)
 Aplicati de 4 ori metoda pentru incrementare absente
 Stergeti doua absente prin metoda specificata

 Afisati absentele fiecarui student
''' #


class Catalog:
    def __init__(self, nume, prenume):
        self.nume= nume
        self.prenume= prenume
        self.numar_absente = 0

    def adauga_absenta(self):
        self.numar_absente +=1

    def sterge_absente(self, nr_de_sters):
        if type(nr_de_sters) == int:
            if self.numar_absente > 0:
                if nr_de_sters < self.numar_absente:
                    self.numar_absente = self.numar_absente - nr_de_sters
                else:
                    print("Numarul de absente pe care doriti sa-l stergeti este prea mare")
            else:
                self.numar_absente=0
    def __str__(self):
        return "Numarul de absente: {0} Nume: {1}, Prenume: {2}".format(self.numar_absente,self.nume, self.prenume)


elev1 = Catalog('Dumbraveanu', 'Ionut')
elev1.adauga_absenta()
elev1.adauga_absenta()
elev1.adauga_absenta()
elev1.sterge_absente(2)

elev2 = Catalog('Popescu', 'Maria')
elev2.adauga_absenta()
elev2.adauga_absenta()
elev2.adauga_absenta()
elev2.adauga_absenta()
elev2.sterge_absente(2)

print(elev1)
print(elev2)

