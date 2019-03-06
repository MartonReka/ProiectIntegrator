#include<iostream>
#include"CoduriLGR.h"
#include"DesenCod.h"
using namespace std;

bool isValid(char codDat[]) {
	
	int lungime = strlen(codDat);
	cout << lungime << endl;
	if (lungime > 9) {
		cout << "Codul trebuie sa aiba max 9 caractere!!!" << endl;
		return false;
	}
	int i = 0;
	while (codDat[i] >= '0' && codDat[i] <= '9') {
		i++;
	}
	if (i != lungime) {
		cout << "Cod eronat: " << codDat << endl;
		return false;
	}
	return true;
}

char* bla(char codDat[]) {
	char sirSapte[9] = "";
	int lungime = strlen(codDat);
	if (lungime < 9) {
		int j;
		for (j = 0; j < 9 - lungime; j++)
			sirSapte[j] = '7';
		sirSapte[j] = '\0';
	}
	return sirSapte;
}

int main()
{	
	char codDat[10], denumire[21];
	cout << "Introduceti denumirea produsului(max 20 caractere): " << endl;
	cin >> denumire;
	cout << "Introduceti codul produsului (max 9 cifre, fara spatii): " << endl;
	cin >> codDat;
	
	if (!isValid(codDat)) {
		system("pause");
		return 0;
		
	}

	char* sirSapte = bla(codDat);
	
	char codRo[] = "594";
	char ean13[13];
	strcpy_s(ean13, codRo);
	strcat_s(ean13, sirSapte);
	strcat_s(ean13, codDat);

	cout << "Primele 12 car. sunt: " << ean13 << endl;

	int nean13[13];
	for (int i = 0; i < 12; i++) {
		nean13[i] = ean13[i] - '0';
	}
	for (int i = 0; i < 12; i++) {
		cout << nean13[i];
		if (i < 12 - 1) {
			cout << ", ";
		}
	}

	int s1;
	int s2;
	s1 = s2 = 0;
	for (int i = 0; i < 12; i = i + 2) {
		s1 = s1 + nean13[i];
		s2 = s2 + nean13[i + 1];
	}
	cout << endl;

	int S = s1 + 3 * s2;
	nean13[12] = 10 - S % 10;
	cout << S << endl;

	int b[95];
	b[0] = b[2] = 1;
	b[1] = 0;
	L(nean13[1], b, 3);
	G(nean13[2], b, 10);
	G(nean13[3], b, 17);
	L(nean13[4], b, 24);
	L(nean13[5], b, 31);
	G(nean13[6], b, 38);

	b[45] = b[47] = b[49] = 0;
	b[46] = b[48] = 1;

	for (int i = 0; i < 6; i++) {
		R(nean13[7 + i], b, 50 + i * 7);
	}
	b[92] = b[94] = 1;
	b[93] = 0;

	desen(b);

	


	system("pause");
}