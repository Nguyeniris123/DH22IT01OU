n = int(input('n = '))
print (('*'*n +'\n')*n)

for i in range (1,n+1):
    print ('*'*i)

for i in range (1,n+1):
      print (' '*(n-1)+'*'*i)

for i in range (1,n+1, 2):
    print(('*' * i).center(n, '-'))
