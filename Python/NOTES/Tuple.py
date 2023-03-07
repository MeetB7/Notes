# TUPLE =   collection which is ordered and unchangeable
#                used to group together related data

student = ("Meet",17,"male")

print(student.count("Meet"))
print(student.index("male"))

for x in student:
    print(x)

if "Meet" in student:
    print("Meet is here!")