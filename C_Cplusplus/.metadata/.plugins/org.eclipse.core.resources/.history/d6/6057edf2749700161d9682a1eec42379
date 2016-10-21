/*
 * PyDrawer.h
 *
 *  Created on: Oct 20, 2016
 *      Author: nandi
 */

#ifndef PYDRAWER_H_
#define PYDRAWER_H_

#include <python2.7/Python.h>
#include <iostream>

#include "MeshGridGenerator.h"
#include "../PyRunner.h"

class PyDrawer {
private:
	MeshGridGenerator *meshgridGenerator;
	std::vector<double**> populations;
	unsigned int nrBac;
	PyRunner *runnerPy;

	PyObject **  converterMeshGrid(MeshGrid meshGrid);
	PyObject* convertPopulation(unsigned int index);
	void drawPoints(PyObject* mainModule);
public:
	PyDrawer(MeshGridGenerator*,std::vector<double**>,unsigned int,PyRunner *runnerPy);
	virtual ~PyDrawer();
	void draw();
};

#endif /* PYDRAWER_H_ */
