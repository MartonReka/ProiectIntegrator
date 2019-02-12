#include<iostream>
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
	char sirSapte[9] = "";
	int lungime = strlen(codDat);
	if (lungime < 9) {
		int j;
		for (j = 0; j < 9 - lungime; j++)
			sirSapte[j] = '7';
		sirSapte[j] = '\0';
	}
	char codRo[] = "594";
	char ean13[13];
	strcpy_s(ean13, codRo);
	strcat_s(ean13, sirSapte);
	strcat_s(ean13, codDat);

	cout << "Primele 12 car. sunt: " << ean13 << endl;
	system("pause");
}