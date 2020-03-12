import random
import time
import sys

class Timer(object):
    def __init__(self, verbose=False):
        self.verbose = verbose

    def __enter__(self):
        self.start = time.time()
        return self

    def __exit__(self, *args):
        self.end = time.time()
        self.secs = self.end - self.start
        self.msecs = self.secs * 1000

def insertionSort(nlist): 
   
    for i in range(1, len(nlist)): 
  
        key = nlist[i] 
        j = i-1

        while j >=0 and key < nlist[j] : 

                nlist[j+1] = nlist[j] 
                j -= 1

        nlist[j+1] = key 

def selectionSort(nlist):
    for i in range(len(nlist)):

        min_idx = i

        for j in range(i + 1, len(nlist)):

            if nlist[min_idx] > nlist[j]:

                min_idx = j

        nlist[i], nlist[min_idx] = nlist[min_idx], nlist[i]

def bubbleSort(nlist):
    for passnum in range(len(nlist)-1,0,-1):

        for i in range(passnum):

            if nlist[i]>nlist[i+1]:

                temp = nlist[i]
                nlist[i] = nlist[i+1]
                nlist[i+1] = temp

def partition(arr,low,high): 

    i = ( low-1 )
    pivot = arr[high]
  
    for j in range(low , high): 
  
        if   arr[j] <= pivot: 
          
            i = i+1 
            arr[i],arr[j] = arr[j],arr[i] 
  
    arr[i+1],arr[high] = arr[high],arr[i+1] 

    return ( i+1 ) 
  
def quickSort(arr,low,high): 

    if low < high: 
  
        pi = partition(arr,low,high) 
        quickSort(arr, low, pi-1) 
        quickSort(arr, pi+1, high) 

def mergeSort(arr): 
    if len(arr) >1: 
        mid = len(arr)//2
        L = arr[:mid]
        R = arr[mid:] 
        mergeSort(L) 
        mergeSort(R) 
        i = j = k = 0
          
        while i < len(L) and j < len(R): 
            if L[i] < R[j]: 
                arr[k] = L[i] 
                i+=1
            else: 
                arr[k] = R[j] 
                j+=1
            k+=1
          
        while i < len(L): 
            arr[k] = L[i] 
            i+=1
            k+=1
          
        while j < len(R): 
            arr[k] = R[j] 
            j+=1
            k+=1

file = open("result.txt","w")
            
file.write("\n************ A ************")

for x in range(10000,30001,10000):

    file.write("\n------" + " " + str(x) + " " + " Number ------\n")

    list_1 = list(range(x))

    random.shuffle(list_1)

    temp = list_1.copy()

    with Timer() as t:
        insertionSort(temp)

    file.write("insertionSort: " + " " + str(t.secs) + "\n")

    temp = list_1.copy()

    with Timer() as t:
        selectionSort(temp)

    file.write("selectionSort: " + " " + str(t.secs) + "\n")

    temp = list_1.copy()

    with Timer() as t:
        bubbleSort(temp)

    file.write("bubbleSort: " + " " + str(t.secs) + "\n")

    temp = list_1.copy()

    with Timer() as t:
        mergeSort(temp)

    file.write("mergeSort: " + " " + str(t.secs) + "\n")

    temp = list_1.copy()

    with Timer() as t:
        quickSort(temp, 0, len(temp)-1)

    file.write("quickSort: " + " " + str(t.secs) + "\n")

file.write("\n***************************")

file.write("\n************ B ************")

for x in range(10000,30001,10000):

    file.write("\n------" + " " + str(x) + " " + " Number ------\n")

    list_1 = list(range(x))

    temp = list_1.copy()

    with Timer() as t:
        insertionSort(temp)

    file.write("insertionSort: " + " " + str(t.secs) + "\n")

    temp = list_1.copy()

    with Timer() as t:
        selectionSort(temp)

    file.write("selectionSort: " + " " + str(t.secs) + "\n")

    temp = list_1.copy()

    with Timer() as t:
        bubbleSort(temp)

    file.write("bubbleSort: " + " " + str(t.secs) + "\n")

    temp = list_1.copy()

    with Timer() as t:
        mergeSort(temp)

    file.write("mergeSort: " + " " + str(t.secs) + "\n")

    """temp = list_1.copy()
    
        with Timer() as t:
            quickSort(temp, 0, len(temp)-1)
    
        file.write("quickSort: " + " " + str(t.secs))"""

file.write("\n***************************\n")

file.write("\n************ C ************")

for x in range(10000,30001,10000):

    file.write("\n------" + " " + str(x) + " " + " Number ------\n")

    list_1 = list(range(x))

    list.reverse(list_1)

    temp = list_1.copy()

    with Timer() as t:
        insertionSort(temp)

    file.write("insertionSort: " + " " + str(t.secs) + "\n")

    temp = list_1.copy()

    with Timer() as t:
        selectionSort(temp)

    file.write("selectionSort: " + " " + str(t.secs) + "\n")

    temp = list_1.copy()

    with Timer() as t:
        bubbleSort(temp)

    file.write("bubbleSort: " + " " + str(t.secs) + "\n")

    temp = list_1.copy()

    with Timer() as t:
        mergeSort(temp)

    file.write("mergeSort: " + " " + str(t.secs) + "\n")

    """temp = list_1.copy()
    
        with Timer() as t:
            quickSort(temp, 0, len(temp)-1)
    
        file.write("quickSort: " + " " + str(t.secs))"""


file.write("\n***************************\n")

file.close()