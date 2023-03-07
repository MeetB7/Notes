import time
# DICTIONARIES =  A changeable, unordered collection of unique key:value pairs
#                      Fast because they use hashing, allow us to access a value quickly

capitals = {'USA':'Washington DC',
            'INDIA':'New Delhi',
            'CHINA':'Beijing',
            'RUSSIA':'Moscow'}

INPUT = input("Enter Country: ")
# print(capitals['Germany'])  This will show an error as there is no key called Germany
print(capitals.get(INPUT.upper()))  # Instead of showing an error this will print 'None'
# print(capitals.keys())  # print all keys
# print(capitals.values())  # print all values
# print(capitals.items())  # print all items

time.sleep(1)

capitals.update({'Germany':'Berlin'})  # This will add
capitals.update({'USA':'Las Vegas'})  # This will replace the key of 'USA'
capitals.pop('CHINA')  # this will remove 'CHINA' and it's key
#capitals.clear() remove everything

#for key,value in capitals.items():
#    print(key, value)