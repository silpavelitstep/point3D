#include "point3D.h"
#include <iostream>
using namespace std;
int main()
{
	{
		cout << "\tmake 2 Object point3D in stack" << endl;
		point3D p3d;
		point3D p3d3(1,2,3);
		cout << "\tdelete them from stack" << endl;
	}
	cout << "-------------------------" << endl;
	{
		cout << "\tmake 2 Object point3D in heap" << endl;
		point3D *p3d=new point3D;
		point3D *p3d3=new point3D(1, 2, 3);
		cout << "\tdelete them from heap" << endl;
		delete p3d;
		delete p3d3;
	}
	cout << "-------------------------" << endl;
	{
		cout << "\tmake static array of point3D(object) in stack from 3 elems" << endl;
		point3D arrPoint3D[3];
		cout << "\tdelete the array of point3D(object) in stack" << endl;
	}
	cout << "-------------------------" << endl;
	{
		cout << "\tmake dinamic array of point3D(object) in heap from 3 elems" << endl;
		point3D *arrPoint3D = new point3D[3];
		cout << "\tdelete the array of point3D(object) in heap" << endl;
		delete[] arrPoint3D;
	}
	cout << "-------------------------" << endl;
	{
		cout << "\tmake dinamic array of pointer to point3D in heap from 3 elems" << endl;
		point3D **arrPoint3D;//pointer ot pointer
		arrPoint3D = new point3D*[3];
		for (int i = 0; i < 3; i++)
			arrPoint3D[i] = new point3D;
		cout << "\tdelete the array" << endl;
		for (int i = 0; i < 3; i++)
			delete arrPoint3D[i];
		delete[] arrPoint3D;


	}
	cout << "-------------------------" << endl;
	{
		cout << "\tmake point3D in stack, then use 'set's, then 'get's" << endl;
		point3D p3d;
		p3d.setX(1);
		p3d.setY(2);
		p3d.setZ(3);
		p3d.getX();
		p3d.getX();
		p3d.getX();
		cout << "\tdelete point3D" << endl;
	}
	cout << "-------------------------" << endl;
	{
		cout << "\tmake 2 point3D in heap and in stack" << endl;
		point3D p3d;
		point3D *pp3d = new point3D;
		cout << "\tsent point3D to metod 'by value'" << endl;
		pp3d->getPoint3d(p3d);
		cout << "\tsent point3D to metod 'by pointer'" << endl;
		p3d.getPoint3d(pp3d);
		cout << "\tdelete 2 point3D from heap then from stack" << endl;
		delete pp3d;
	}
	cout << "-------------------------" << endl;


	system("pause");
	return 0;
}