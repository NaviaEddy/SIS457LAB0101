#include<iostream>
using namespace std;
int op;
int main()
{
	op = 1;
	while( op == 1)
	{
		cout << "                     BIOGRAFIA                         " << endl;
		cout << "Mi nombre es Eddy Navía Condori." << endl;
		cout << "Tengo 19 años, naci el 25 de mayo del 2003." << endl;
		cout << "Soy de la Carrera Ing. de Sistemas." << endl;
		cout << "Egrese del Colegio Nacional Junín." << endl;
		cout << "¿Desea volver a correr el programa? " << endl;
		cout << "Presione 1. SI" << endl << "Presione 2. NO" << endl << endl;
		cin >> op;
		while (op <= 0 || op >= 3)
		{
			cout << "INGRESAR NUMEROS COMPRENDIDOS ENTRE 1 Y 2" << endl << endl << endl;
			cout << "¿Desea volver a correr el programa? " << endl;
			cout << "Presione 1. SI" << endl << "Presione 2. NO" << endl << endl;
			cin >> op;  
		}
	}
	system("cls");
	return 0;
}