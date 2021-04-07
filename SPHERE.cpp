#include <iostream>
#include "SPHERE.h";


const double pi = 3.142;

SPHERE::SPHERE() 
{
	radius = 0;
}


void SPHERE::writer() 
{
	std::cout << "Welcome to Sphere Area and Volume Calculator \n";
}

void SPHERE::Set_Radius(double r)
{
	std::cout << "Enter the radius of the Sphere \n";
	std::cin >> SPHERE::radius;
}

double SPHERE::Getanswer()
{
	return radius;
}

double SPHERE::calcArea()
{
	return 4.0 * pi * radius*radius;
}

double SPHERE::calcVolume()
{
	return (4 / 3) * pi * radius * radius * radius;
}

SPHERE::~SPHERE()
{
}
