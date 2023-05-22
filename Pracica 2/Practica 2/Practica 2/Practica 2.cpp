// Practica 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Triangle
{
public:
    Triangle()
    {
        Base = 0.0f;
        Heigh = 0.0f;
    }
    float Base;
    float Heigh;

    float GetArea()
    {
        return (Base * Heigh) / 2.0f;
    }
};
int main()
{
    //Es buena practica siempre inicializar la variable
    Triangle example = Triangle();
    example.Base = 2.0f;
    example.Heigh = 5.0f;
    std::cout << example.GetArea() << '\n';


    char nullCharPtr = NULL;
    char* nullptrCharPtr = nullptr;

    int BigArry[2][2] = { 0 };


    //int newInt = new int; // esto no es posible
    int* newInt = new int;
    *newInt = 5;
    std::cout << *newInt << '\n';
    int* Copion1 = newInt, * Copion2 = newInt;
    *newInt = 6;
    delete newInt;
    int*BigArrayPtr = new int[10]; 
    delete[] BigArrayPtr;
    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
