# SET = collection which is unordered, unindexed. No duplicate values.

utensils = {"fork","spoon","knife"}
dishes = {"bowl","plate","cup","knife"}

# utensils.add("pan")
# utensils.remove("fork")
# utensils.clear()
# dishes.update(utensils)  This will add utensils to dishes
# dinner_table = utensils.union(dishes)

# print(dishes.difference(utensils))     what do dishes have that utensils don't
# print(utensils.intersection(dishes))  what is common

for x in utensils:  # set is faster than list if you want to check if something is in a set
    print(x)