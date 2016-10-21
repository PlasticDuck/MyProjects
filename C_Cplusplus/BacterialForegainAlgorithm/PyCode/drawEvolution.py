import matplotlib.pyplot
import thread


def drawEvolution(meanPopulation):
    indexes=range(1,len(meanPopulation)+1)
    matplotlib.pyplot.plot(indexes,meanPopulation)

print "Plottin the evolution:"
drawEvolution(meanPopulation)

