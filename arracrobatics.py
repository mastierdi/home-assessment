def getAboveZero(arrayName):
    q = 0
    for q in arrayName:
        if arrayName[q] > 0:
            print(arrayName[q])
            break
        else:
            print(-1)
            break

def delAboveZero(argumentList):
    q = 0
    for q in argumentList:
        if argumentList[q] > 0:
            argumentList.pop(q)
            print(argumentList)
            break
        else:
            print(-1)
            break