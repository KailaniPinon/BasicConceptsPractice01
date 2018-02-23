#include <iostream>
#include "VirtualPractice.h"

VirtualPractice::VirtualPractice()
{
}


VirtualPractice::~VirtualPractice()
{
}

struct VirtTest {
	virtual void funcOne() {
		printf("funcOne called\n");
	}
};

struct VirtDir : VirtTest {
	void funcOne() {
		printf("derived function called\n");
	}
};

int main() {
	VirtTest obj01;
	VirtDir obj02;

	VirtTest& obj01r = obj01;
	VirtTest& obj02r = obj02;
	obj01r.funcOne();
	obj02r.funcOne();

	system("PAUSE");
}

//virtual test
//next : malloc! --> implement and make comments