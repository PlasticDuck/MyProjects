/*
 * Population.cpp
 *
 *  Created on: Oct 12, 2016
 *      Author: nandi
 */

#include "Population.h"

#include <stdio.h>

Population::Population(unsigned int nrBac,unsigned int dimension,double *intervals,double initStep) {
	this->nrBac=nrBac;
	this->intervals=intervals;
	this->dimension=dimension;
	this->initStep=initStep;
}

Population::~Population() {
	// TODO Auto-generated destructor stub
}

Bacteria Population::getRandomBacteria(){
	std::vector<double> newX;
	for(unsigned int i=0;i<this->dimension;i++){
		double tt=rand()/(double)(RAND_MAX);
		double temp=(tt)*(this->intervals[2*i+1]-this->intervals[i*2])+this->intervals[2*i];
		newX.push_back(temp);
	}
	Bacteria bac(newX,this->initStep);
	return bac;
}

void Population::printIntervals(){
	for(unsigned int i=0;i<this->dimension;i++){
		printf("[");
		for(unsigned int j=0;j<2;j++){
			printf("%f ",this->intervals[i*2+j]);
		}
		printf("] ");
	}
	printf("\n");

}
void Population::printBacteries(){
	if(this->bacteries.size()==0){
		printf("Population is empty!");
		return;
	}
	for(unsigned int i=0;i<this->bacteries.size();i++){
		Bacteria bac=this->bacteries[i];
		bac.printBacteria();
	}
}

void Population::InitailizeRandom(){
 for(unsigned int i=0;i<this->nrBac;i++){
	 Bacteria bac=this->getRandomBacteria();
	 this->bacteries.push_back(bac);
 }
}
