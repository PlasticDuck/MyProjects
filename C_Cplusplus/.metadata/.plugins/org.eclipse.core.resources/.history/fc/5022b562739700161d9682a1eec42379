/*
 * PyRunner.h
 *
 *  Created on: Oct 21, 2016
 *      Author: nandi
 */

#ifndef PYRUNNER_H_
#define PYRUNNER_H_

#include <python2.7/Python.h>

class PyRunner {
private:
	bool needShow;
	char**argv;
	PyObject *main;
public:
	PyRunner(char **argv);
	virtual ~PyRunner();
	void star();
	void end();
	PyObject* getMainPyObject();

	void setNeedShow(bool needShow) {
		this->needShow = needShow;
	}
};

#endif /* PYRUNNER_H_ */
