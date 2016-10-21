/*
 * TestContour.h
 *
 *  Created on: Oct 17, 2016
 *      Author: nandi
 */

#ifndef TESTCONTOUR_H_
#define TESTCONTOUR_H_

#include <plplot/plplot.h>
#include <plplot/plstream.h>

#include <math.h>

class TestContour {
public:
	TestContour(int, const char**);
	virtual ~TestContour();
	void polar();
private:
	plstream *pls;



	//Polar plot data
	static const int PERIMETERPTS=100;
	static const int RPTS=40;
	static const int THETAPTS=40;


public:
	static const int XPTS=35;
	static const int YPTS=46;
	//static PLFLT clevel[];
	static const PLFLT XSPA=2. / ( XPTS - 1 );
	static const PLFLT YSPA=2. / ( YPTS - 1 );


	//static const  PLFLT tr[] ;



};
static const PLFLT  clevel[]={ -1., -.8, -.6, -.4, -.2, 0, .2, .4, .6, .8, 1. };
static const PLFLT  tr[]= {TestContour::XSPA, 0.0, -1.0, 0.0,TestContour:: YSPA, -1.0 };
static void mypltr( PLFLT x, PLFLT y, PLFLT *tx, PLFLT *ty, void * /* pltr_data */ )
	{
	    *tx = tr[0] * x + tr[1] * y + tr[2];
	    *ty = tr[3] * x + tr[4] * y + tr[5];
	}

#endif /* TESTCONTOUR_H_ */
