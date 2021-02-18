n = int(input())
fibo = 0
a = 1
b = 0

for i in range(n):
  fibo = a + b;
  a = b;
  b = fibo;

print(fibo)