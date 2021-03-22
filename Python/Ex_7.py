enunt = """Codificati un text cu echivalentul numeric din ASCII
(numere despartite de spatii) - functia code()
Decodificati numerele in text - functia decode()
"""

def code(element:str):
    l=[]
    for i in element:
        l.append(ord(i))
    print(l)
def decode(list):
    l=[]
    for i in list:
        l.append(chr(i))
    print(l)

code('ABC')
decode([69,70,71])
