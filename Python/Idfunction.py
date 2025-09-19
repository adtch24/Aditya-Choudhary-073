a=10
b=a
print("Id of a:",id(a))
print("Id of b:",id(b))
b=a+1
print("Id of a:",id(a))
print("Id of b:",id(b))