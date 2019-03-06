#include <iostream>
#include <fstream>
#include"DesenCod.h"

using namespace std;



void desen(int b[])
{
	fstream cod;
	cod.open("cod.html", ios::out);
	cod << "<!DOCTYPE html>" << endl;
	cod << "<html>" << endl;
	cod << "<body>" << endl;
	cod << "<svg height=\"50\" width=\"200\">" << endl;

	int pozx = 10;
	for (int i = 0; i < 95; i++)
	{
		if (b[i] == 1)
			cod << "<line x1=\"" << pozx << "\" y1=\"20\" x2=\"" << pozx << "\" y2=\"50\" style=\"stroke:rgb(0,0,0); stroke-width:2\" />" << endl;
		pozx = pozx + 2;
	}
	cod << "</svg>" << endl;
	cod << "</body>" << endl;
	cod << "</html>" << endl;
	cod.close();

}


