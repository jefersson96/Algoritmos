#include <iostream>
#include<conio.h>
using namespace std;
int main() {
	int prueba;
	int valorbuscar, i = 0;
	int arreglo2[100];
	int opciones = 0;
	int inferior, superior, mitad;
	inferior = 0;
	superior = 99;
	char band = 'F'; 
	do {

		cout << "**Menu**\n1-Busqueda Secuencial\n2-Busqueda Binaria" << endl;
		cout << "Ingrese una opcion :";
		cin >> opciones;
		switch (opciones)
		{
		case 1:
			int valor;
			int arreglo[100];
			for (int x = 0; x <= 100; x++)
			{

				arreglo[x] = x;

			}
			cout << "Ingrese un valor a buscar :" << endl;
			cin >> valor;
			for (int i = 0; i <= 100; i++) {
				if (arreglo[i] == valor) {
					cout << "Se a encontrado su valor " << valor << " esta en la posicion [" << arreglo[i] << "] del arreglo" << endl;
				}

			}




			break;


		case 2:
			for (int x = 0; x < 100; x++)
			{

				arreglo2[x] = x;

			}
			cout << "Ingresa un valor a buscar :";
			cin >> valorbuscar;



			while (inferior <= superior && i < 100) {
				mitad = (inferior + superior) / 2;
				if (arreglo2[mitad] == valorbuscar) {

					band = 'V';
					break;
				}
				if (arreglo2[mitad] > valorbuscar) {

					superior = mitad;
					mitad = (inferior + superior) / 2;
				}if (arreglo2[mitad] < valorbuscar) {
					inferior = mitad;
					mitad = (inferior + superior) / 2;
				}

				i++;

			}
			if (band == 'V') {

				cout << "El numero se ah encontrado en la posicion " << mitad << endl;
				cin >> prueba;
			}
			else {

				cout << "El numero no se ah encontrado" << endl;

			}
			
		
			
			
			
				break;
		case 3:



			break;


		default:
			cout << "Bad choice! Please try again later.\n";
		}




	
	} while (opciones != 3);


}