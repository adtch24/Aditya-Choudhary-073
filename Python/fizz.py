num=range(1,51)
for i in range(51):
    if 1%3==0 and i%5==0:
        print(i,"=fizzbuzz")
    elif i%3==0:
        print(i,"=fizz")
    else:
        print(i,"=buzz")
