#Carrega ou não Carrega

def string_number(tam, n):
  zero =''
  for x in range(32-tam):
    zero = zero + '0'

  return zero +  n

def mofiz(n1, n2):
  bi = ''
  for x in range(32):
    if n1[x] == n2[x] :
      bi = bi + '0'
    else:
      bi = bi + '1'
  
  return bi

def string_to_bin(n1):
  bi = 0
  aux = 31
  power = 0
  while aux >= 0:
    if n1[aux] == '1':
      bi = bi + pow(2, power)
      
    power = power + 1
    aux =aux - 1
  print(bi)
  

while True:
  try:
    number = input().split()
    b1 = format(int(number[0]), 'b')
    b2 = format(int(number[1]), 'b')

    n1 = string_number(str(b1).__len__(), b1)
    n2 = string_number(str(b2).__len__(), b2)


    bi = mofiz(n1, n2)

    string_to_bin(bi)

  except EOFError:
    break


