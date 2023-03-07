# WHILE LOOP = a statement that will execute a block of code,
#              as long as it's conditional statement remains true.

#while 1==1:  # ':' is imp. This is an infinite loop as the if statement can't stop being true
#   print("Help I'm stuck in a loop!")

name = ""
while len(name) == 0:
   name = input("Enter name: ")

print("Hello "+name)

# name = None                         # None means null or absence, and it makes the value of variable false in boolean
#while not name :                       # not name(None)= True
#      name = input("Enter name: ")    # when name is not none anymore, then name becomes true in boolean
# print("Hello "+name)