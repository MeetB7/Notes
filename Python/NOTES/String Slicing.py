#STRING SLICING = creating a substring by extracting elements from another string
#         indexing[] or slice()
#          [start:stop:step]

name = "Meet Brijwani"
print(len(name))
first_letter = name[0]  # starts with 0
print(first_letter)
first_name = name[0:4]  # start is inclusive but stop is exclusive
print(first_name)
# firstname = name[:4] here it will assume start is at 0
last_name = name[5:]
print(last_name)
funky_name = name[0:13:3]  # step will only take 3rd letter. by default step=1
print(funky_name)
# lastname = name[::3] shortcut way to write this here it assumes start and end
reversed_name = name[::-1]  # -1 means we are counting backwards
print(reversed_name)

website1 = "http://google.com"
website2 = "http://youtube.com"

slice1 = slice(7,-4)  # '-' represents indexing from the end so -4 = '.' but it is exclusive

print(website2[slice1])
print(website1[slice1])