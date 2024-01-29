import math
from turtle import *

def heartra(k):
    return 15 * math.sin(k) ** 3

def heartrb(k):
    return 12 * math.cos(k) - 5 * math.cos(2 * k) - 2 * math.cos(3 * k) - math.cos(4 * k)

speed(2)  # Adjusted speed value for better visualization
bgcolor("black")

for i in range(1000):  # Reduced the number of iterations for quicker display
    pencolor("#f73487")  # Set the pen color
    width(2)  # Set the pen width
    goto(heartra(i) * 20, heartrb(i) * 20)
    # The following loop is not necessary and was corrected
    for _ in range(5):
        forward(1)  # Move the turtle forward a small distance
    goto(0, 0)

done()
