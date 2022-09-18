from audioop import reverse
import random


# Task 1
'''
1.1 Create a list using loop (or generator) of integer values: 1, 53, -35, 94, 2, 0, -6, 24, -4 

1.2 Write a code to get the smallest number from this list

1.3 Create a function called sortAsIWant() that pass as argument list and bool variable: if bool variable is true -- 
    list must be sorted from low to high element, otherwire -- from high to high. This function must return sorted list.
'''
listRandom = []
for i in range(0, 9, 1):
    q = random.randint(-100, 100)
    listRandom.append(q)
print(listRandom)

smallest = min(listRandom)
print(smallest)

def sortAsIWant(listName, x):
    if x == True:
        sortedList = sorted(listName)
        print(sortedList)
    else:
        sortedList = sorted(listName, reverse = True)
        print(sortedList)

sortAsIWant(listRandom, True)
sortAsIWant(listRandom, False)


# Task 2
'''
Print all keys and all values of the following dictionary:
{"C++": 8000 , "Python": 9000, "Java": 7000 }



Print all keys and all values of the following dictionary:
{"C++": {"salary" : 8000} , "Python": {"salary" : 9000}, "Java" : {"salary" : 7000} }
'''
langSallary = {
  "C++": 800,
  "Python": 9000,
  "Java": 7000
}
for data in langSallary:
    print(data, langSallary[data])

'''
ЦЕ ЗАВДАННЯ Я НЕ ЗРОЗУМІВ. НАПИШИ, БУДЬ-ЛАСКА, В КОМЕНТАХ, ЩО ТРЕБА ЗРОБИТИ

anotherLangSallary = {
    "C++": {"salary" : 8000} , 
    "Python": {"salary" : 9000}, 
    "Java" : {"salary" : 7000} 
    }
'''
# Task 3

'''
Merge two following dictionaries into one USING built-in dictionarie methods:
{'Monday': 10, 'Tuesday': 20, 'Wednesday': 30}
{'Thursday': 30, 'Friday': 40, 'Saturday': 50, "Sunday" : 40}
'''

firstDict = {
    'Monday': 10, 
    'Tuesday': 20, 
    'Wednesday': 30
    }
secondDict = {
    'Thursday': 30, 
    'Friday': 40, 
    'Saturday': 50, 
    'Sunday' : 40
    }
firstDict.update(secondDict)
for data in firstDict:
    print(data, firstDict[data])

