#include<iostream>
using namespace std;
int op;
int main()
{
	op = 1;
	while( op == 1)
	{
		cout << "                               BIOGRAFIA                         " << endl;
		cout << "Mi nombre es Eddy Navía Condori." << endl;
		cout << "Tengo 19 años, naci el 25 de mayo del 2003." << endl;
		cout << "Soy de la Carrera Ing. de Sistemas." << endl;
		cout << "Egrese del Colegio Nacional Junín." << endl;
		cout << "Se tocar instrumentos musicales como la guitarra y el teclado." << endl;
		cout << "Tambien se cantar." << endl;
		cout << "Dirigo un ministerio de música en la Capilla de la Virgen de la Medalla Milagrosa, de igual manera tambien soy catequista." << endl;
		cout << "Tengo conocientos basicos sobre lo que es la soldadura de metales." << endl;
		cout << "Doy clases de matematica escolar." << endl << endl;
		cout << "Desea volver a correr el programa?" << endl;
		cout << "Presione 1. SI" << endl << "Presione 2. NO" << endl << endl;
		cin >> op;
	}
	system("cls");
	return 0;
}