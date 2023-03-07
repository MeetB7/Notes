# IF STATEMENT = a block of code that will execute if it's condition is true

age = int(input("How old are you?: "))

if age >= 18:  # ':' is imp as it denotes end of an if statement
    print("You are an adult!")  # indentation matters
elif age == 17:  # '==' denotes you are comparing and not assigning value to a variable
    print("You are soon going to be an adult!")
elif age == 100:  # collin is important
    print("You are a century year old")  # this will not work because 100 > 18, and it will print the first statement
else:                                    # it only moves down if the statement was false
    print("You are a child")

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# LOGICAL OPERATORS (and,or,not) = used to check if two or more conditional statements are true

temp = int(input("What's the temperature outside?: "))

if temp >= 0 and temp <= 30:  # i keep forgetting to put ':' at the end of the if statement
    print("The temperature is good today!")
    print("You can go outside")
elif temp<0 or temp>30:
    print("The temperature today is bad")
    print("Prefer staying inside")
# NOT OPERATOR switches the value of a conditional statement
# if not(temp >= 0 and temp <= 30):
#     print("The temperature today is bad")
#     print("Prefer staying inside")
# elif temp<0 or temp>30:
#     print("The temperature is good today!")
#     print("You can go outside")
# THIS WILL BE THE SAME CODE AS ABOVE