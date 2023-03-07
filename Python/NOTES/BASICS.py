print('I love pizza')
print("It's really good!")
# ' or " is used to print something in the terminal box
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# VARIABLES
# variable = a container for value. Behaves as the value it contains
# _____________________________________________________________________
# 1. STRING ( series of characters ) { ' or " }
name = "Meet"
print(name)
# don't use variables in quotes as it will print the name itself eg:
print('name')
print(type(name))  # this can print the data type of variable
print("Hello " + name)  # can combine

first_name = 'meet'
last_name = "Brijwani"
full_name: str = (first_name + " " + last_name)  # combining variables
print("Hello, " + full_name)
print("-------------------------")
# ____________________________________________________________________________________
# 2. INT (integer)
age = 17  # not in quotations because it becomes string, and it can't be use in math
age = age + 1  # or age += 1
print(age)
print(type(age))
# To print a string with int
print("Your age is " + str(age))  # this is typecasting
print("-------------------------")
# ______________________________________________________________________________________
# 3. FLOAT (number that includes decimal)
height = 177.8
print(height)
print(type(height))
print("Your height is " + str(height) + "cms")  # Float with str
print("-------------------------")
# _________________________________________________________________________________________
# 4. BOOLEAN (True or False)
Male: bool = True
print(Male)
print(type(Male))
print("Are you male: " + str(Male))

# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

# MULTIPLE ASSIGNMENTS = allows us to assign multiple variables in single line of code

# name2 = "bro"
# age2 = 21
# attractive = True

name2, age2, attractive = "bro", 21, True

print(name)
print(age)
print(attractive)

# Spongebob = 30
# Patrick = 30
# Sandy = 30
# Squidward = 30

Spongebob = Patrick = Sandy = Squidward = 30

print(Spongebob)
print(Patrick)
print(Sandy)
print(Squidward)

# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
# STRING METHODS
print(full_name)
# here was an error because I left a space before print, it is called indentation error
print(len(full_name))  # to find length of the word (technically a function)
print(full_name.find("m"))  # to find the position of a letter, starts with 0
print(full_name.find("b"))  # quotations, capitalization matter, if letter is not there it will show -1
print(full_name.capitalize())  # here notice B became b because it only capitalizes first letter and rest are lowercase
print(full_name.upper())  # all caps
print(full_name.lower())  # all lower
print(full_name.isdigit())  # if it was numbers it would say true and vice a versa
# eg
no = "124"  # " are imp because these are only for string
print(no.isdigit())
print(full_name.isalpha())  # if characters are alphabets or not? SPACES DON'T COUNT
print(name.isalpha())  # no spaces here
print(full_name.count("e"))  # to count a specific character
print(full_name.replace("e", "o"))  # replace any character
print(full_name * 3)  # print 3 times

# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
# TYPE CASTING = convert the data type of a value into another data type
x = 1  # int
y = 2.0  # float
z = "3"  # str

x = int(x)
y = int(y)
z = int(z)
print(x)
print(y)
print(z*3)
print("-------------------------")

x = float(x)
y = float(y)
z = float(z)
print(x)
print(y)
print(z*3)

print("-------------------------")
x = str(x)
y = str(y)
z = str(z)
print(x)
print(y)
print(z*3)

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")