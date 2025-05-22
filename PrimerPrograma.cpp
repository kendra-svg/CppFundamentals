#include <iostream>
using namespace std;

int main() {

	/*double numero1, numero2;
	//cout << "Introduzca el primer numero: "; //para tildar y que no muestre errores, se debe usar printf en vez
											//de cin
	printf("Introduzca el primer n%cmero: ", 163);
	//al poner '%c' antes de la u,
	//se indica que debe esperar un caracter especial,  y luego se pone 163 que es el ascii de la ú tildada
	cin>>numero1;

	//cout << "Introduzca el segundo numero: ";
	printf("Introduzca el segundo n%cmero: ", 163);
	cin>>numero2;

	double suma = numero1 + numero2;
	cout << "La suma de " << numero1 << " mas " << numero2 << " es igual a: " <<numero1 + numero2 << '\n';
	cout << "La suma de " << numero1 << " mas " << numero2 << " es igual a: " <<suma << '\n';

	double resta = numero1 - numero2;
	cout << "La resta de " << numero1 << " menos " << numero2 << " es igual a: " <<numero1 - numero2 << '\n';
	cout << "La resta de " << numero1 << " menos " << numero2 << " es igual a: " << resta << '\n';

	double multiplica = numero1 * numero2;
	cout << "El resultado de " << numero1 << " por " << numero2 << " es igual a: " << numero1*numero2 << '\n';
	cout << "El resultado de " << numero1 << " por " << numero2 << " es igual a: " << multiplica << '\n';

	//optimizado
	numero2 != 0 ? cout << "El resultado de la division es: "<<numero1/numero2 << '\n': cout <<"Error.. No se puede divir entre 0"<< '\n';

	//sin optimizar
	if(numero2 != 0)
	{
		double division = numero1/numero2;
		cout << "El resultado de " << numero1 << " entre " << numero2 << " es igual a: " << numero1/numero2 << '\n';
		cout << "El resultado de " << numero1 << " entre " << numero2 << " es igual a: " << division<< '\n';
	}
	else
	{
		cout << "Error... No se puede divir entre 0";
	}

	int edad = 22;
	double estatura = 1.64;
	printf("\nMi edad es: %d y mi estatura es: %.2f", edad, estatura); //si se utiliza solo '%f',
																	//muestra muchos decimales
																	// al usar '%.2f' se limita a 2 decimales

	*/


	int opcion;

	do {

		cout << "\n *** MENU DE OPCIONES *** \n";
		cout << "     	    1. Sumar \n";
		cout << "            2. Restar \n";
		cout << "            3. Multiplicar\n";
		cout << "            4. Dividir \n";
		cout << "            5. Salir \n";
		cout << "   Digite una opcion: ";
		cin >> opcion;

		switch (opcion) {
		case 1: {
			double numero1, numero2;
			printf("Introduzca el primer n%cmero: ", 163);
			cin >> numero1;

			printf("Introduzca el segundo n%cmero: ", 163);
			cin >> numero2;
			double suma = numero1 + numero2;
			cout << "La suma de " << numero1 << " mas " << numero2 << " es igual a: " << numero1 + numero2 << '\n';
			cout << "La suma de " << numero1 << " mas " << numero2 << " es igual a: " << suma << '\n';
			system("pause");
			break;
		}



		case 2: {
			double numero1, numero2;
			printf("Introduzca el primer n%cmero: ", 163);
			cin >> numero1;

			printf("Introduzca el segundo n%cmero: ", 163);
			cin >> numero2;
			double resta = numero1 - numero2;
			cout << "La resta de " << numero1 << " menos " << numero2 << " es igual a: " << numero1 - numero2 << '\n';
			cout << "La resta de " << numero1 << " menos " << numero2 << " es igual a: " << resta << '\n';
			system("pause");
			break;
		}


		case 3: {
			double numero1, numero2;
			printf("Introduzca el primer n%cmero: ", 163);
			cin >> numero1;

			printf("Introduzca el segundo n%cmero: ", 163);
			cin >> numero2;

			double multiplica = numero1 * numero2;
			cout << "El resultado de " << numero1 << " por " << numero2 << " es igual a: " << numero1 * numero2 << '\n';
			cout << "El resultado de " << numero1 << " por " << numero2 << " es igual a: " << multiplica << '\n';
			system("pause");
			break;
		}


		case 4: {
			double numero1, numero2;
			printf("Introduzca el primer n%cmero: ", 163);
			cin >> numero1;

			printf("Introduzca el segundo n%cmero: ", 163);
			cin >> numero2;

			double division = numero1 / numero2;
			cout << "El resultado de " << numero1 << " entre " << numero2 << " es igual a: " << numero1 / numero2 << '\n';
			cout << "El resultado de " << numero1 << " entre " << numero2 << " es igual a: " << division << '\n';
			system("pause");
			break;
		}


		case 5:
			exit(EXIT_SUCCESS);


		default:
			cout << "\n La opcion digitada es invalida, intente de nuevo \n";
			system("pause");
			opcion = 1;

		}
		system("cls");

	} while (opcion != 5);












}
