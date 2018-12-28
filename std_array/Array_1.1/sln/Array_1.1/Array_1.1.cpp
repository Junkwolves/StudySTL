#include "pch.h"

#include <iostream>

#include <array>

using namespace std;

int main()
{

	// array = Static Array

	array<int, 4> myArray = { 1, 2, 3 }; // array<data type, capacity> name;

	//---------------------------------------------------------------------------

	myArray.front(); // .front = myArray[0]

	myArray.back(); // .front = myArray[last]

	//---------------------------------------------------------------------------

	for (int i = 0; i < myArray.size(); i++)
	{
		cout << endl << "    |     myArray[" << i << "] = " << myArray[i] << endl; // myArray.at(i);
	}

	cout << endl << " --------------------------------------- fill(1); " << endl; 

	myArray.fill(1); // Fills an array with the number entered

	for (int i = 0; i < myArray.size(); i++)
	{
		cout << endl << "    |     myArray[" << i << "] = " << myArray[i] << endl; // myArray.at(i);
	}

	cout << endl << " --------------------------------------- fill(56); " << endl;

	myArray.fill(56); // Fills an array with the number entered

	for (int i = 0; i < myArray.size(); i++)
	{
		cout << endl << "    |     myArray[" << i << "] = " << myArray[i] << endl; // myArray.at(i);
	}

}