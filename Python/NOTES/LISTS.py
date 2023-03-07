# LISTS = used to store multiple items in a single variable []

food = ["pizza", "burger", "fries", "brownie"]
print(food)
# print(food[3])  # remember computers always start with 0

# you can also replace an element of the list
# food[1] = "sushi"
# print(food[1])

# you can print every element of a list by using a for loop
# for x in food:
#    print(x)

# FUNCTIONS
food.append("ice cream")  # this will add an element to the list
food.remove("fries")  # this will remove an element
food.pop()  # this will remove the last element
food.insert(3, "ice cream")  # this will add an element at a certain index
food.sort()  # this will sort the list alphabetically
# food.clear()  # this will clear the list
for x in food:
    print(x, end=" ")
print("\n2D LISTS:~")


# 2D LISTS = list of lists
drinks = ["coffee","tea",'water']
dinner = ['pizza','burger','fries']
dessert = ['brownie','donut','ice cream']

menu = [drinks,dinner,dessert]
print(menu)

print(menu[1][0])  # for pizza,
