 """
# Creati un program care sa returneze ziua sarbatoarii Pastelui Ortodox intre 1900 -2099            #
# Aplicand algoritmul lui Gauss pentru calculul datei Pastelui pentru anul N, avem urmatorii pasi:  #
# 1. a = N mod 19       2. b = N mod 4      3. c = N mod 7        4. d = (19 a + 15) mod 30         #                          #
# 5. e = (2 b + 4 c + 6 d + 6) mod 7        6. ziua = d + e + 4   (Aprilie)  . 						#"""  #

def data_paste():
    for i in range(1900,2099):
        a = i % 19
        b = i % 4
        c = i % 7
        d = ((19 * a) +15) % 30
        e = ((2 * b) + (4 * c) + (6 * d) + 6) % 7
        ziua = d + e + 4
        if(ziua > 31):
            ziua = ziua - 31
            print(f'Ziua in care va pica Pastle in anul {i} este : {ziua} Mai')
        else:
            print(f'Ziua din luna aprilie in care va pica Pastle in anul {i} este : {ziua} Aprilie')

data_paste()
