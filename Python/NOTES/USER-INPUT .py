# INPUTS
name = input("What is your name?: ")
name = name.strip()  # this will strip any blank spaces
name = name.title()  # this will capitalize each word's first letter

name = name.strip().title()  # you can chain these commands in a single line of code

print("Hey,", name)  # this is another way to write instead of using +

age = input("How old are you?: ")
# print(type(age))  # input is always in str
# age = int(input("How old are you?: ")) #This will only accept integer value and variable will also be int
age = int(age)  # this can convert str to int
age += 1
print(name + ", on your next birthday you will be " + str(age) + " years old.")  # Here we have to convert it back to
# str to print
print(f"{name}, you will be {age} years old next year")  # another way to format str by putting f before "" and using {}

height = float(input("How tall are you?: "))
print("You are " + str(height) + "cm tall.")
