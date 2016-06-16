/*
 * Element.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Element.h"

Lista::Lista(Libros Numero)
{
	PNodo q = new Nodo();
	q->Elemento = Numero;
	q->Proximo = this->Primero;
	this->Primero = q;
}

int Lista::Agregar(Libros NuevoElemento)
{
	PNodo p = Primero;
	PNodo q = new Nodo;

	q->Elemento = NuevoElemento;
	q->Proximo = Primero;
	Primero = q;

	return 1;
}

void Lista::getUltimo()
{
	PNodo p = Primero;
	int Posicion = 0;
	int i = 0;

	while (i != Posicion && p != NULL)
	{
		p = p->Proximo;
		i++;
	}

	cout << p->Elemento;
}

int Lista::Vacio()
{
	PNodo p = Primero;

	if (Primero == NULL)
	{
		return 1;
	}

	else
	{
		return 0;
	}
}

int Lista::getLongitud()
{
	int i = 0;

	for (PNodo p = Primero; p != NULL; p = p->Proximo)
	{
		i++;
	}

	return i;
}

Libros Lista::BuscarElemento(int Position)
{
	PNodo p = Primero;

	int i = 0;

	while (i != Position && p != NULL)
	{
		p = p->Proximo;
		i++;
	}

	return p->Elemento;
}

void Lista::Imprimir()
{
	for (PNodo p = Primero; p != NULL; p = p->Proximo)
	{
		cout << p->Elemento;
	}
}

ostream & operator << (ostream & _Imprimir, Libros _Libros)
{
	_Imprimir << "\n * Titulo: " << _Libros.getTitulo() << endl;

	_Imprimir << "\n * Autor: " << _Libros.getAutor() << endl;

	_Imprimir << "\n * Editora: " << _Libros.getEditora() << endl;

	_Imprimir << "\n * Fecha de publicacion: " << _Libros.getDia() << "/" << _Libros.getMes() << "/" << _Libros.getAno() << endl;

	_Imprimir << "\n * Categoria: " << _Libros.getCategoria() << endl;

	cout << endl;

	return  _Imprimir;
}

void Lista::Buscar(string _Buscar)
{
	for (PNodo p = Primero; p != NULL; p = p->Proximo)
	{
		if (_Buscar == p->Elemento.getCategoria())
		{
			cout << "\n * Titulo: " << p->Elemento.getTitulo() << endl;

			cout << "\n * Autor: " << p->Elemento.getAutor() << endl;

			cout << "\n * Editora: " << p->Elemento.getEditora() << endl;

			cout << "\n * Fecha de publicacion: " << p->Elemento.getDia() << "/" << p->Elemento.getMes() << "/" << p->Elemento.getAno() << endl;

			cout << "\n * Categoria: " << p->Elemento.getCategoria() << endl;
		}
	}
}