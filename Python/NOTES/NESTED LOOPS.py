# NESTED LOOPS = The "inner loop" will finish all fo it's iterations before finishing one iteration of outer loop

rows = int(input("Enter no of rows: "))
columns = int(input("Enter no of columns: "))
symbol = input("Enter symbol: ")

for i in range(rows):
    for j in range(columns):
        print(symbol, end="")
    print()

# Alternate code to make the same thing ( not a nested loop )
# rows = int(input("Enter no of rows: "))
# columns = int(input("Enter no of columns: "))
# symbol = input("Enter symbol: ")
#
# A = symbol * columns
#
#for i in range(rows):
#    print(A)