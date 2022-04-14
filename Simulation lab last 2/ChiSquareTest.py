import random
f = open("Random_Number.txt",mode = "r" ,newline = None)
randomNumber = ''
number = f.readlines()
for line in number:
    randomNumber.append(line.split(" ") )
flat_list = []
for sublist in randomNumber:
    for item in sublist:
        flat_list.append(item)

for i in range(0,len(flat_list)):
    flat_list[i] = int(flat_list[i])

print(type(flat_list[5]))
f.close()

