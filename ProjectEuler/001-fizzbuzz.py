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