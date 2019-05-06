#include "point3D.h"
#include <iostream>
using namespace std;
int point3D::getX()
{ 
	cout << "getX()" << endl;
	return x;
}
int point3D::getY()
{
	cout << "getY()" << endl;
	return y;
}
int point3D::getZ()
{
	cout << "getZ()" << endl;
	return z;
}
void point3D::setX(int x)
{
	cout << "setX(x)" << endl;
}
void point3D::setY(int y)
{
	cout << "setY(y)" << endl;
}
void point3D::setZ(int z)
{
	cout << "setZ(z)" << endl;
}
void point3D::getPoint3d(point3D p)
{
	cout << "getPoint3d(point3D p)" << endl;
}
void point3D::getPoint3d(point3D *p)
{
	cout << "getPoint3d(point3D p)" << endl;
}
point3D::point3D(): x(0), y(0), z(0)
{
	cout << "point3D()" << endl;
}
point3D::point3D(int x,int y,int z): x(x), y(y), z(z)
{
	cout << "point3D(x,y,z)" << endl;
}
point3D::point3D(const point3D &p3d)
{
	cout << "copy point3D" << endl;
}
point3D::~point3D()
{
	cout << "~point3D()" << endl;
}