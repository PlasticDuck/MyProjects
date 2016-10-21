/*
 * BacterialOptimizator.h
 *
 *  Created on: Oct 13, 2016
 *      Author: nandi
 */

#ifndef BACTERIALOPTIMIZATOR_H_
#define BACTERIALOPTIMIZATOR_H_

#include "Population.h"
#include <vector>
#include <string>
class BacterialOptimizator {
protected:
	Population *population;
	double (*function)(std::vector<double>);
	unsigned int maxStep,maxChem,maxRep,maxED;
	double eliminationFactor;
public:
	BacterialOptimizator(Population *population,double (*function)(std::vector<double>),unsigned int maxStep,unsigned int maxChem,unsigned int maxRep,unsigned int maxED,double eliminationFactor);
	virtual ~BacterialOptimizator();
	virtual void chemotaxisPhase();
	void reproductionPhase();
	void eliminationDispersalPhase();
	void initPopulationWithValue();
	void optimizate();
	Population* getPopulation();
	void print();
	virtual std::string getClassName();


};

#endif /* BACTERIALOPTIMIZATOR_H_ */
