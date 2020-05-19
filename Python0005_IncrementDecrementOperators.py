x = 2
y = 3
z = -4

x = y + 2
z = x - 3
# x = 5 , y = 3 , z = 2
print("x ---> ",x,"\ty ---> ",y,"\tz--> ",z)

z -= x - 5
y += z - 7
# x = 5 , y = -2 , z = 2
print("x ---> ",x,"\ty ---> ",y,"\tz--> ",z)

'''
If you are familiar with other programming languages like C, Java, PHP 
then you know there exists two operators namely Increment and Decrement
operators denoted by ++ and -- respectively.

There is no Increment and Decrement operators in Python.
'''

# x = 6 , y = -2 , z = 2
x += 1 # Increment, ++x
print("x ---> ",x,"\ty ---> ",y,"\tz--> ",z)
y -= 1 # Decrement, y--
z += 1 # Decrement, z++


# x = 6 , y = -3 , z = 3
y -= 1 # Increment, --y
z += 1 # Increment, ++z
print("x ---> ",x,"\ty ---> ",--y,"\tz--> ",++z)
x += 1 # Decrement, x++


print("\n\nEnter extra integer number => ")
a = int(input())
b = int(input())
c = int(input())

print("\nCalculate the a x b + c x 2 + 1 : ", a * b + c * 2 + 1,
    "\nAfter add one to 'a' number.\n")
a += 1 # Decrement, a++


a += 1 # Increment, ++a
print("Before add one to 'a' number.",
    "\nCalculate the a x (b+c) x 2 + 1 : ", a * (b + c) * 2 + 1, "\n")


print("Calculate the a x b - c x 2 - z : ", a * b - c * 2 - 1,
    "\nAfter minus one to 'a' number.\n")
a -= 1 # Decrement, a--


a -= 1 # Increment, --a
print("Before minus one to 'a' number.",
    "\nCalculate the (a x b) - c x (2 - 1) : ", (--a * b) - c * (2 - 1))
