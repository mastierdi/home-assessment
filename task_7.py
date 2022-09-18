import arracrobatics


'''
    Ex. 1:
        1. Create array (list) and append to it elements from -9 to 9; 
        2. Replace all elements to string "Python";
        3. Write a piece of code that ask user to give value and assign each element of array by this given value;

    Note: fill free to use built-in methods of lists or arrays: 
    https://docs.python.org/3/tutorial/datastructures.html#more-on-lists
'''


def my_function():
    print("Hello from a function")


numbers = [-9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
print(numbers)

for i in range(0, 19, 1):
    numbers[i] = "Python"
print(numbers)

N = int(input("Entar value "))

new_array = []

for n in range(0, N, 1):
    new_array.append(N)

print(new_array)


'''
    Ex. 2:
        1. Create getAboveZero() function with integer list as an argument. 
        It must return the first element that above 0. If there is no such elements it must return -1;
        2. Create getAboveNum()  function with integer list as an argument and integer number. 
        It must return the first element that above integer number (that was passed as argument). 
        If there is no such elements it must return -1.
        3. Create delAboveZero() function with integer list as an argument. 
        It must DELETE and return the first element that above zero. If there is no such elements it must return None.

    Note: fill free to use built-in methods of lists or arrays: 
    https://docs.python.org/3/tutorial/datastructures.html#more-on-lists
'''
number = [-9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
numbe = [-9, -8, -7, -6, -5, -4, -3, -2, -1, 0]




arracrobatics.getAboveZero(number)
arracrobatics.getAboveZero(numbe)


def getAboveNum(intList, intNumber):
    for w in intList:
        print(intList[intNumber+1])
        break


getAboveNum(number, 5)
print('\n')

arracrobatics.delAboveZero(number)
arracrobatics.getAboveZero(numbe)

'''
    Ex. 3:
        1. Locate functions that you have implemented above in separate module called "arracrobatics.py". 
        Then include it and call this function;
'''


'''
    Ex. 4*:
        WWrite a program that will read the entered four-digit number. 
        After that, each digit of this number should go into a new series.
'''

fourDigitNumber = input("Enter four digit number: ")
series = fourDigitNumber
print(series[0], '\n')
print(series[1], '\n')
print(series[2], '\n')
print(series[3], '\n')