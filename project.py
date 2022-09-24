import argparse, colorama
import os
from colorama import Fore, Back, Style


colorama.init()

print(Fore.BLUE + 'Enter path to directory, where we need to rename files')
dirPathInput = input()
dirPath = "/Users/dmytromastierov/ITEA-test/home-assessment/"
fileList = []

for path in os.listdir(dirPath):
    if os.path.isfile(os.path.join(dirPath, path)):
        fileList.append(path)

print(Fore.BLUE + 'Enter filename to rename')
fileName = input()

if fileName in fileList:
    print(Fore.BLUE + 'Enter new filename')
    newFileName = input()
    os.rename(fileName, newFileName)
    print(Fore.GREEN + 'File renamed')

else:
    print(Fore.RED + 'No such file')