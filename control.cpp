#include <iostream>
#include <fstream>
#include <string>
#include "funciones.h"
#include "colors.h"
#include <locale.h>
using namespace std;

int main() {

	setlocale(LC_ALL, "");
	
	int opc = 0;

	while (opc != 11) {
		cout << LGREEN << "\n----- BIENVENIDO AL BARRIO SANTAMONICA -----" << endl;
		cout << "\n1. Aņadir ingreso al barrio." << endl;
		cout << "\n2. Aņadir egreso del barrio." << endl;
		cout << "\n3. Buscar registro de personas. " << endl;
		cout << "\n4. Salir del programa." << endl;
		cout << "\nIngrese opcion: ";
		cin >> opc;

		switch (opc) {
		case 1:
			int opcion;

			cout << "\n1. Con auto." << endl;
			cout << "\n2. A pie." << endl;
			cout << "\nIngrese opcion: ";
			cin >> opcion;

			if (opcion == 1) {
				aņadirIngresoAuto();
			}

			if (opcion == 2) {
				aņadirIngresoPie();
			}
			break;
		
		case 2:
			int opcion2;

			cout << "\n1. Con auto." << endl;
			cout << "\n2. A pie." << endl;
			cout << "\nIngrese opcion: ";
			cin >> opcion2;

			if (opcion2 == 1) {
				aņadirEgresoAuto();
			}

			if (opcion2 == 2) {
				aņadirEgresoPie();
			}
			break;
	
		case 3:
			int opcion3;

			cout << "\n1. Buscar por DNI." << endl;
			cout << "\n2. Buscar por nombre." << endl;
			cout << "\nIngrese opcion: ";
			cin >> opcion3;

			if (opcion3 == 1) {
				buscarHistorialDNI();
			}

			if (opcion3 == 2) {
				buscarHistorialNombre();
			}
			break;
		
		case 4:
			return 0;
			break;
		}
	}
	return 0;
}