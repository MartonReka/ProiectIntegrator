#include<iostream>
#include"CoduriLGR.h"
using namespace std;

void L(int valoarea, int bin[], int poz) {
	switch (valoarea) 
	{
	case 0:
		bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 5] = 0;
		bin[poz + 3] = bin[poz + 4] = bin[poz + 6] = 1;
		break;
	case 1:
		bin[poz] = bin[poz + 1] = bin[poz + 4] = bin[poz + 5] = 0;
		bin[poz + 2] = bin[poz + 3] = bin[poz + 6] = 1;
		break;
	case 2:
		bin[poz] = bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = 0;
		bin[poz + 2] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	case 3:
		bin[poz] = bin[poz + 5]= 0;
		bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = bin[poz+6] = 1;
		break;
	case 4:
		bin[poz] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = 0;
		bin[poz + 1] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	case 5:
		bin[poz] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = 0;
		bin[poz + 1] = bin[poz + 2] = bin[poz + 6] = 1;
		break;
	case 6:
		bin[poz] = bin[poz + 2] = 0;
		bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	case 7:
		bin[poz] = bin[poz + 4] = 0;
		bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	case 8:
		bin[poz] = bin[poz + 3] = 0;
		bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	case 9:
		bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = 0;
		bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 1;
		break;


	}
}

void G(int valoarea, int bin[], int poz) {
	switch (valoarea)
	{
	case 0:
		bin[poz] = bin[poz + 2] = bin[poz + 3] = 0;
		bin[poz + 1] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	case 1:
		bin[poz] = bin[poz + 3] = bin[poz + 4] = 0 ;
		bin[poz + 1] = bin[poz + 2] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	case 2:
		bin[poz] = bin[poz + 1] = bin[poz + 4] = 0;
		bin[poz + 2] = bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	case 3:
		bin[poz] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = 0;
		bin[poz + 1] = bin[poz + 6] = 1;
		break;
	case 4:
		bin[poz] = bin[poz + 1] = bin[poz + 5] = 0;
		bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = bin[poz + 6] = 1;
		break;
	case 5:
		bin[poz] = bin[poz + 4] = bin[poz + 5] = 0;
		bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 6] = 1;
		break;
	case 6:
		bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 5] = 0;
		bin[poz + 4] =  bin[poz + 6] = 1;
		break;
	case 7:
		bin[poz] = bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = 0;
		bin[poz + 2] = bin[poz + 6] = 1;
		break;
	case 8:
		bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = bin[poz + 5] = 0;
		bin[poz + 3] = bin[poz + 6] = 1;
		break;
	case 9:
		bin[poz] = bin[poz + 1] = bin[poz + 3] = 0;
		bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = bin[poz + 6] = bin[poz + 6] = 1;
		break;

	}
}

void R(int valoarea, int bin[], int poz) {
	switch (valoarea)
	{
	case 0:
		bin[poz + 3] = bin[poz + 4] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 5] = 1;
		break;
	case 1:
		bin[poz + 2] = bin[poz + 3] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 1] = bin[poz + 4] = bin[poz + 5] = 1;
		break;
	case 2:
		bin[poz + 2] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 1] = bin[poz + 3] = bin[poz + 4] =1;
		break;
	case 3:
		bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 6] = 1;
		break;
	case 4:
		bin[poz + 1] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = 1;
		break;
	case 5:
		bin[poz + 1] = bin[poz + 2] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = 1;
		break;
	case 6:
		bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 2] = 1;
		break;
	case 7:
		bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 4] = 1;
		break;
	case 8:
		bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 3] = 1;
		break;
	case 9:
		bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = 1;
		break;

	}
}