for f in range(100):
  if f%3 == 0 and f%5 == 0:
    print("fizzbuzz")
    continue
  elif f%3 == 0:
    print("fizz")
    continue
  elif f%5 == 0:
    print("buzz")
    continue
  print(f)
  
int s=0

for e in range(100):
  if e%3 == 0 or e%5 == 0:
    s+=e