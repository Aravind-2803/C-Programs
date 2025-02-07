import turtle

def draw_attractive_design1():
    colors = ["white"]
    pen = turtle.Turtle()
    pen.speed(100)
    turtle.bgcolor("black")  
    pen.pensize(2)

    for i in range(17):
        pen.color(colors)
        for _ in range(20):  
            pen.dot(1)  
            pen.forward(10)  
        pen.right(61)
        for _ in range(10):  
            pen.dot(1)  
            pen.forward(10)  
        pen.right(120)
        for _ in range(10):  
            pen.dot(1)  
            pen.forward(10)
        pen.right(61)
        for _ in range(20):  
            pen.dot(1) 
            pen.forward(10)  
        pen.right(181)
    pen.hideturtle()
draw_attractive_design1()
turtle.done()