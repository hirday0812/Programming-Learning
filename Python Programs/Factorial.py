# This is a single line comment in python
# This program is to find the factorial of a number

'''This
is 
a 
multi 
line
comment
in 
python''' 



n = int(input("Enter the number :  "))
m=1
for i in range(1,n+1):
    m=m*i
    i+=1

print(f"The factorial of {n}! is equal to :  {m}")

print("\n\n\t\t\t\t\t=====Code Executed SUccessfully=====")