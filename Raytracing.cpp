#include <iostream>
#include <fstream>
#include <string>
#include "Vec.h"

const std::string outputFilename = "output.ppm";

void printImage()
{
	std::ofstream outputFile{ outputFilename };
	int nx = 200;
	int ny = 100;
	outputFile << "P3\n" << nx << " " << ny << "\n255\n";
	for (int j = ny - 1; j >= 0; j--)
	{
		for (int i = 0; i < nx; i++)
		{
      nostd::vec3 color{ (float)i / (float)nx, (float)j / (float)ny, 0.2f };
			int ir = (int)(255.99*color._x);
			int ig = (int)(255.99*color._y);
			int ib = (int)(255.99*color._z);
			outputFile << ir << " " << ig  << " " << ib << "\n";
		}
	}
}

int main()
{
  printImage();
}

