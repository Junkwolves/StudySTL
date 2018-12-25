#include "pch.h"

#include <iostream>

#include <vector>

using namespace std;

int Element_count = 0;

int main()
{
	vector<int> myVector = {1, 2 , 3};

	vector<int>::iterator it;

	/*
		vector<int>::const_iterator it;

		.cbegin();
		.cend();

		vector<int>::reverse_iterator it;

		.rbegin();
		.rend();
	*/

	it = myVector.begin(); // it -> The first element of the vector (myVector[0] = 1)

	cout << endl << "  Iterator = " << *it << endl;

	*it = 100; // myVector[0] = 100;

	cout << endl << "  Iterator = " << *it << endl;

	it++; // it -> myVector[0 + 1]

	cout << endl << "  Iterator = " << *it << endl;

	advance(it, 1); // .advance(it, number) | myVector[it + number]

	cout << endl << "  Iterator = " << *it << endl;

	myVector.erase(it); // .erase(it) | Removes myVector[it]

	/*

	//--------------------------------------------------------------------- insert

	it = myVector.begin();

	myVector.insert(it, 2); // .insert(it, number) | myVector[it] = number

	cout << endl << "  Iterator = " << *it << endl;

	//--------------------------------------------------------------------- erase

	it = myVector.begin();

	myVector.erase(it, it + 2); // Removes items in range

	*/

	cout << endl << " ------------------------------------------------------------------ " << endl;

	for (it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << endl << "  |   myVector[" << Element_count << "] = " << *it << endl;
		Element_count++;
	}

	Element_count = 0;

	cout << endl << " ------------------------------------------------------------------ " << endl;

	vector<int>::reverse_iterator it_R;

	for (it_R = myVector.rbegin(); it_R != myVector.rend(); it_R++)
	{
		cout << endl << "  |   myVector[" << Element_count << "] = " << *it_R << endl;
		Element_count++;
	}

	Element_count = 0;

	return 0;
}