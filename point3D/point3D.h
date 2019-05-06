#pragma once
#ifndef POINT3D_H
#define POINT3D_H
class point3D
{
	int x, y, z;
public:
	void setX(int);
	void setY(int);
	void setZ(int);
	int getX();
	int getY();
	int getZ();
	void getPoint3d(point3D);
	void getPoint3d(point3D*);
	point3D();//constructor
	point3D(int, int, int);//constructor with parameter
	point3D(const point3D &p3d);//copy constructor
	~point3D();
};
#endif POINT3D_H
