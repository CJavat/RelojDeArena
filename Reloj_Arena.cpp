#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main() 
{
	int Fila, Columna, Numero_Fila, Asteriscos;
	
	cout<<"Escribe el numero de filas que aparecera.\n";
	cin>>Numero_Fila;
	Asteriscos=Numero_Fila;
	Asteriscos+=2;
	for(Fila=Numero_Fila;Fila>0;Fila--)
	{
		for(Columna=Numero_Fila;Columna>Fila-1;Columna--)
		{
			cout<<" ";
		}
		for(Columna=1;Columna<=2*Fila-1;Columna++)
		{
			cout<<"*";
		}
		Asteriscos-=2;
		cout<<"\n";
	}
	
	for(Fila=1;Fila<=Numero_Fila;Fila++)
	{
		for(Columna=1;Columna<=Numero_Fila-Fila+1;Columna++)
		{
			cout<<" ";
		}
		for(Columna=0;Columna<2*Fila-1;Columna++)
		{
			cout<<"*";
		}
		Asteriscos+=2;
		cout<<"\n";
	}
}
