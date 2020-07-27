n = input("Enter a positive integer: ")
n = int(n)
answer = n

for i in range (n-1, 0, -1) :
     answer = i*answer

n = str(n)
answer = str(answer)

print(n + "! is: " + answer)
