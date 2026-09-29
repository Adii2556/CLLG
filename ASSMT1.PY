# ASSIGNMENT - 1

# Q1
a = 4
b = 11
print(a | b)
print(a >> 2)

# Q2
a = [10,20]
b = a
b += [30,40]
print(a)
print(b)

# Q3
print(36/4) # 9.0

# Q4
x = 10
y = 50
if x**2 > 100 and y < 100:
    print(x,y)

# Q5
print(2*3**3*4) # 216

# Q6
print(-18//4) # -5

# Q7
print(2**3**2) # 512

# Q8
print(bool (0), bool(3.14519), bool(-3), bool(1.0 + 1j)) # False True True True

# Q9
a = 11
b = 22
print(a , b)    # 11 22

a = b
b = a+b
print(a , b)    # 22 44

# Q10
a = 11
b = 22
print(a , b)    # 11 22

a , b = b , a+b
print(a , b)    # 22 33

# Q11
w = 20
x = 10
y = 15
z = 2

result_1 = (w+x)*y/z
result_2 = ((w+x)*x)/z
result_3 = ((w+x)*(y/z))**z
result_4 = w+(x*y)/z

print(result_1) # 225.0
print(result_2) # 150.0
print(result_3) # 50625.0
print(result_4) # 95.0

# Q13
print(2**4+(5+5)**(1+1)) # 116

# Q18
a = 3
b = 5
c = 10

print(a&b<<2//5**2+c^3)         # 3
print(b>>a**2<<2>>b**2^c**3)    # 1000
