print "Drawing"

import json
import matplotlib.pyplot as plt
import numpy as np

print "Here1"

def Sphere(vec):
	result=0
	for i in vec:
		result+=i*i
	return result

def drawPoints(collection):
	for i in range(len(collection)):
		population=collection[i]
		for j in range(len(population)):
			bac=population[j]
			plt.plot(bac[0],bac[1],'g^');


def drawLines(collection):
	nrPop=len(collection)
	nrBac=len(collection[0])
	print nrBac
	for j in range(nrBac):
		bacX=[];bacY=[];
		for i in range(len(collection)):
			population=collection[i]
			bac=population[j]
			bacX=np.append(bacX,bac[0])
			bacY=np.append(bacY,bac[1])
		plt.plot(bacX,bacY,'r--');	

def drawContour(planeNet):
	planeNetJson=json.loads(planeNet)
	X=planeNetJson["xMatrix"]
	Y=planeNetJson["yMatrix"]
	Z=planeNetJson["zMatrix"]
	plt.contour(X,Y,Z)
	

print "Start to draw in python"
destination='/home/nandi/workspace/MyProjects/C_Cplusplus/BacterialForegainAlgorithm/'
fileName='data.out'
f=open(destination+fileName,"r")
data=json.load(f)
collectionPop=data['collection']
planeNet=data['planeNet']
plt.hold(True);
drawPoints(collectionPop)
drawLines(collectionPop)
drawContour(planeNet)
plt.hold(False);
plt.show();
print "End to draw in python"