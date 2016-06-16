//============================================================================
// Name        : Library.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Menu.h"
#include <cstdlib>
using namespace std;

int main()
{
	Lista L;

	string titulo;
	string autor;
	string editora;
	int dia;
	int mes;
	int ano;
	string categoria;
	string buscar;
	int Menu;

	Libros L1, L2, L3;

	L1.setLibro("a", "a", "a", 1, 1, 1, "a");
	L2.setLibro("b", "b", "b", 2, 2, 2, "b");
	L3.setLibro("c", "c", "c", 3, 3, 3, "c");

	L.Agregar(L1);
	L.Agregar(L2);
	L.Agregar(L3);

	do
	{
		cout << "+ Menu" << endl;
		cout << "\n #1 Listar libros" << endl;
		cout << "\n #2 Insertar libro" << endl;
		cout << "\n #3 Solicitar ultimo libro de la pila" << endl;
		cout << "\n #4 Buscar libro por categoria" << endl;
		cout << "\n #5 Salir" << endl;
		cout << "\n - Elija una opcion: #";
		cin >> Menu;

		switch (Menu)
		{
		default:
		{
			cout << "\n* Opcion incorrecta" << endl;

			cout << endl;
			system("Pause");
			system("cls");

			break;
		}

		case 1:
		{
			cout << "\n #1 Listar libros" << endl;

			L.Vacio();

			L.Imprimir();

			cout << endl;
			system("Pause");
			system("cls");

			break;
		}

		case 2:
		{
			cout << "\n #2 Insertar libro" << endl;

			cout << "\n - Digite el titulo: ";
			cin >> titulo;

			cout << "\n - Digite el autor: ";
			cin >> autor;

			cout << "\n - Digite la editora: ";
			cin >> editora;

			cout << "\n - Digite la fecha de publicacion" << endl;

			cout << "\n - Digite el Dia: ";
			cin >> dia;

			cout << "\n - Digite el mes: ";
			cin >> mes;

			cout << "\n - Digite el ano: ";
			cin >> ano;

			cout << "\n - Digite la categoria: ";
			cin >> categoria;

			Libros A(titulo, autor, editora, dia, mes, ano, categoria);

			L.Agregar(A);

			cout << endl;

			cout << "\n * Agregada" << endl;

			cout << endl;

			cout << endl;
			system("Pause");
			system("cls");

			break;
		}

		case 3:
		{
			cout << "\n #3 Solicitar ultimo libro de la pila" << endl;

			cout << endl;

			cout << "\nUltimo elemento:" << endl;

			L.getUltimo();

			cout << endl;

			cout << endl;
			system("Pause");
			system("cls");

			break;
		}

		case 4:
		{
			cout << "\n #4 Buscar libro por categoria" << endl;

			cout << "\n - Digite la categoria: ";
			cin >> buscar;

			L.Buscar(buscar);

			cout << endl;
			system("Pause");
			system("cls");

			break;
		}

		case 5:
		{
			cout << "\n #5 Salir" << endl;

			cout << endl;
			system("Pause");
			system("cls");

			return 0;
		}
		}
	} while (Menu != 5);

	cout << endl;
	system("Pause");

	return 0;
}