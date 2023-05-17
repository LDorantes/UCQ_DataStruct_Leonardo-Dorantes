// Practica 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
	//Declaración
	int mydeclaration;

	
	//Inicialización
	mydeclaration = 5;
	int myInt = 5;
	int j=6;
	
	//c de console y out de salida= salida a consola
	std::cout << myInt << '\n';
	std::cout << j << '\n';
	// c de consola + in de entrada: Entrada a consola (cin)
	int myArray[5] = { 0,1,2,3,4 };
	for (int i = 0; i < 5; i++)
	{
		std::cout << myArray[i] << '\n';
	}
	
	std::cout << &myInt << '\n';

	int* myAddress = &myInt;
	std::cout <<"Dirección de memoria a que apunta MyAddress: "<< & myAddress << '\n';
	std::cout <<"Valor de la variable a la que apunta MyAddress: "<< * myAddress << '\n';

	std::cout << &myAddress << '\n';
	int** myAddressAddress = &myAddress;

	//myArray[] ~ *
	//myTable[][]~[]*~**
	int* myArrayPtr = &myArray[0];
	for (int i = 0; i < 5; i++)
	{
		std::cout <<"Dirección de memoria de myArray["<<i<<"] :"<< myArrayPtr << '\n';
		std::cout << "Valor del objeto de myArray[" << i << "] :" << *myArrayPtr << '\n';

		++myArrayPtr;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
