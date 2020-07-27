import turtle
wn = turtle.Screen()
cleo = turtle.Turtle()

n = int(input("Enter the number of sides: "))
for i in range(n):
    cleo.forward(400/n)
    cleo.left(360/n)

wn.mainloop()
