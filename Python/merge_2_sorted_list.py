
list1 = input("Enter list 1:").split()
list2 = input("Enter list 2:").split()

res = sorted(list1 + list2)

print("Sombined list: ")
for x in res:
    print(x, end=" ")
