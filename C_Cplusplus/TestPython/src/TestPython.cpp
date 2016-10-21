//============================================================================
// Name        : TestPython.cpp
// Author      : Nandi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <python2.7/Python.h>
#include <python2.7/import.h>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Testeles" << endl; // prints Testeles
	Py_SetProgramName(argv[0]);
	Py_Initialize();
	FILE *f=fopen("PyCods/Hello.py","r");
	PyObject *m,*globalDict;
	PyObject *list1,*list2,*h;
	m=PyImport_AddModule("__main__");
	if(m==NULL) return-1;
	list1=PyList_New(2);PyList_SetItem(list1,0,Py_BuildValue("i",1));PyList_SetItem(list1,1,Py_BuildValue("i",2));
	list2=PyList_New(2);PyList_SetItem(list2,0,Py_BuildValue("i",3));PyList_SetItem(list2,1,Py_BuildValue("i",4));
	h=PyList_New(2);
	PyList_SetItem(h,0,list1);PyList_SetItem(h,1,list2);
	PyList_Fini();

	//h=Py_BuildValue("[OO]",list1,list2);
	PyModule_AddObject(m,"h",h);
	globalDict=PyModule_GetDict(m);



	PyRun_File(f,"PyCods/Hello.py",Py_file_input,globalDict,globalDict);
	PyErr_Print();
	Py_Finalize();
	fclose(f);
	return 0;
}
