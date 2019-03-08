# <C>Sharkbyteprojects
# http://services.sharkbyte.bplaced.net
information = "<C>Sharkbyteprojects" + "   " + "http://services.sharkbyte.bplaced.net"
###########
ecken = 8 #
###########
print(information)
import turtle
import time
turtle.title("SHARKBYTE WINKLER")
turtle.pen()
winkel = (180+180)/8
for x in range (0, ecken):
    turtle.forward(100);
    turtle.left(winkel)
time.sleep(8)