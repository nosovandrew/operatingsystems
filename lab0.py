arr = [1,4,6,6,3,7,3,8,14,7]
fullArr = []

print("Введенный массив:")
print(arr)

arr.sort()
arr = list(set(arr))

biggestEl = arr[-1]

for i in range(1, biggestEl+1):
    fullArr.append(i)

print("Полный массив:")
print(fullArr)

for i in arr:
    fullArr.remove(i)

print("Пропуски:")
print(fullArr)
