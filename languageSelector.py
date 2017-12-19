from random import *

myLanguage = ["C++", "Java", "Python", "Python3", "C"]

print("Let's use %s" % (myLanguage[randint(0, len(myLanguage)-1)]))
