#!/usr/bin/env python
import sys
import os
import time


worst = './worstresults.txt'
best = './bestresults.txt'

def doRun():
    testcount = 10 

    if os.path.exists(worst):
        os.remove(worst)
    if os.path.exists(best):
        os.remove(best)

    print 'BEGINING TESTING'
    while testcount > 0:
        os.system("./testing.sh")
        testcount -= 1

    print 'TESTING COMPLETED'
    return

def calcAverageFitness(filename):
    filehandle = open(filename,'r')
    values = []
    for line in filehandle:
        values.append((float)(line.split(' ')[1]))
    return sum(values)/len(values)

start = time.time()
doRun()
end = time.time()

print 'AVERAGE BEST FITNESS: '+str(calcAverageFitness(best))
timediff = (end - start)
print 'TOTAL TIME ELAPSED: '+str(timediff)
fitdiff = calcAverageFitness(worst) - calcAverageFitness(best)
print 'AVERAGE FITNESS GAIN PER EXECUTION: '+str(fitdiff)
print 'AVERAGE EFFECTIVE FITNESS PER MINUTE ACROSS ALL RUNS: '+str( fitdiff/ (timediff/60) )
