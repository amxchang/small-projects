n = input("Enter a positive integer n: ")
n = int(n)

a = 1
b = 1
olda = a

for i in range (1, n-1):
    fibonacci = a+b
    olda = a
    a=b
    b=olda+b

fibonacci=str(fibonacci)
n=str(n)
print("Fibonacci number "+n+" is: "+fibonacci)
