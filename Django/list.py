# List
#### It's a collection of hetrogeneous type of data.

l1 = [1, 2, 3, 4, 5, "A", "B", [6, 7, 8]]
# print(l1)

# Itteration in list

"""
## Method 1
for i in l1:
    print(i)

## Method 2
for i in range(len(l1)):
    print(l1[i])


# Insertion in List

l = [1, 2, 3, 4, 5]

l.append(6)      # Used to add element at the end of list
l.insert(2, 10)   # Used to add element at specific index
l.extend([7, 8, 9])  # Used to add multiple elements at the end of list

print(l)

# Deletion in List

l = [1,2,3,4,5]

l.remove(4)     # Used to delete specific element from list         #  [1, 2, 3, 5]
l.pop(2)        # Used to delete element from specific index        # [1, 2, 5]
l.clear()       # Used to delete all elements from list, list will be empty # []
del l[2:3]      # Used to delete multiple elements from list, using slicing. Also used to delete list completely.  # [1, 2, 5]
print(l)

# List Functions
l = [1, 2, 3, 4, 5]
print(max(l))  # Output: 5
print(min(l))  # Output: 1
print(sum(l))  # Output: 15

print(l*3)                 # Output: [1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5]
print(sorted(l))           # Output: [1, 2, 3, 4, 5]
print(list(reversed(l)))   # Output: [5, 4, 3, 2, 1]
print(l.count(3))          # Output: 1

"""
# Q19 WAp to remove duplicates from list.

l1 = [1, 2, 2, 3, 3, 4, 4, 5, 5]
l2 = []

for i in l1:
    if i not in l2:
        l2.append(i)
print(l2)  # Output: [1, 2, 3, 4, 5]


# Q20 WAP to find no. of string whose start and end with same character from list.

s = ["bob", "level", "hello", "world", "radar"]
count = 0

for string in s:
    if string[0] == string[-1]:
        count += 1

print(count)  # Output: 3
