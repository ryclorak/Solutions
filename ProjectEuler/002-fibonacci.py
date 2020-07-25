sum=0

def Fib(i):
  if i<0:
    print("Try a positive number")
  elif i==1:
    return 0
  elif n==2:
    return 1
  else:
    return Fib(i-1) + Fib(i-2)
  
    
print(Fib(10))