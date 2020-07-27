import turtle


wn = turtle.Screen() #creates the screen 
cleo = turtle.Turtle() #creates the turtle
cleo.speed(0.5) #makes the speed of the turtle faster

hourInput = input("Enter the hour: ") #asks for the input of the hour
minInput = input("Enter the minute: ") #asks for the input of the minute

hourInput = int(hourInput) #converts the hour input into an integer
minInput = int(minInput) #converts the minute input into an integer

hourAngle = (60*hourInput + minInput)*0.5 #sets the angle for the hour
minAngle = minInput*6 #sets the angle for the minute

cleo.penup()

for i in range(1, 13): #creates the tick marks
   cleo.forward(90)
   cleo.stamp() #stamps a tick mark

   cleo.right(180)
   cleo.forward(90)
   cleo.left(180)
   
   cleo.right(30)

   
cleo.left(90) #turns the turtle to face 12 o clock
cleo.pendown()
cleo.right(hourAngle) #turns the turtle to face the hour hand's time
cleo.forward(40) #draws the hour hand
cleo.penup()
cleo.left(180) #turns the turtle back
cleo.forward(40) #moves the turtle back
cleo.right(180)
cleo.left(hourAngle) #turns turtle to face 12 o clock again


cleo.pendown()
cleo.right(minAngle) #turns the turtle to face the minute hand's time
cleo.forward(60) #draws the minute hand
cleo.penup()
cleo.forward(200) #moves the turtle offscreen

    
wn.mainloop()
