a, b, m = map(int, input().split())

a = a % m
a = a ** b
a = a % m

print(a)