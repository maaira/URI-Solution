def fat(n1):
    fat = 1
    i = 2
    while i <= n1:
        fat = fat*i
        i = i + 1

    return fat

while True:
    try:
      i = input().split()
      print(fat(int(i[0]))+fat(int(i[1])))
    except EOFError:
      break

    
    
        
        
    