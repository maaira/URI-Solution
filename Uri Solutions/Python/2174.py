#Coleção De Pokemon
cases = int(input())
i = 0
list_input = []
list_poke = []
cont = 0
while i < cases:
    poke = input()
    list_input.append(poke)
    if poke not in list_poke:
        cont = cont +1
        list_poke.append(poke) 
    i= i+1  

print("Falta(m)", 151-cont ,"pomekon(s).") 
