// Test_Spehere.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SPHERE.h";

int main()
{
    std::cout << "Hello World!\n";

    SPHERE MySphere;

    MySphere.writer();
    MySphere.Set_Radius(MySphere.Getanswer());
    double Volume = MySphere.calcVolume();
    double Area = MySphere.calcArea();
    
    std::cout << "The Area of the Sphere is: " << Area << R"( and the volume of the Sphere is: )" << Volume <<"\n";
}

