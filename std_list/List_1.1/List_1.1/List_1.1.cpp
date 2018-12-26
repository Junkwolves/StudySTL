#include "pch.h"

#include <iostream>

#include<list>

#include <conio.h> // _getch();

#include <windows.h> // system("CLS");

using namespace std;

int List_Count = 0;

void list_size(list<int> &myList)
{
	//---------------------------------------------------- vector print

	cout << endl << "    |     List size: " << myList.size() << endl;

	for (auto it = myList.begin(); it != myList.end(); it++)
	{
		cout << endl << "    |     myList[" << List_Count << "] = " << *it << endl;  // myVector.at(1);

		List_Count++;
	}

	List_Count = 0;

}

void empty_Check(list<int> &myList)
{
	if (myList.empty())
	{
		cout << endl << "    |     List is empty. " << endl;
	}
	else
	{
		cout << endl << "    |     List is not empty. " << endl;
	}
}

int main()
{

	/*

	//---------------------------------------------------------------- unique

	list<int> myList = {1, 2, 5, 3, 4, 5, 5, 5};

	myList.unique(); // = myList = {1, 2, 5, 3, 4};

	//---------------------------------------------------------------- insert

	list<int>::iterator it = myList.begin(); // it = myList[0]

	myList.insert(it, 12); // myList.insert(it, number); (myList[0] = 12)

	it++; // it = myList[0 + 1]

	myList.insert(it, 4); // myList.insert(it, number); (myList[1] = 4)

	advance(it, 2); // advance(it, number); it = myList[it + number]

	//---------------------------------------------------------------- erase
	
	list<int>::iterator it = myList.begin(); // it = myList[0]

	myList.erase(it); // ( remove myList[0])

	it++; // it = myList[0 + 1]

	myList.remove(it); // ( remove myList[1])

	*/

	list<int> myList;

	myList.push_back(1); // -- Adds an item to the end of the list.
	myList.push_front(2); // --- Adds an item to the top of the list.
	myList.push_back(3); // -- Adds an item to the end of the list.
	myList.push_front(4); // --- Adds an item to the top of the list.

	list<int>::iterator it = myList.begin(); // it = myList[0]

	cout << endl << "    it = " << *it << endl;

	cout << endl << " ------------------------------------------------ " << endl;

	list_size(myList);
	empty_Check(myList);

	cout << endl << " .sort -> " << endl;
	cout << endl << " Press Any Button " << endl;

	_getch();
	system("CLS");

	//---------------------------------------------------------------- sort

	cout << endl << " sort " << endl;

	myList.sort();

	list_size(myList);
	empty_Check(myList);

	cout << endl << " .reverse -> " << endl;
	cout << endl << " Press Any Button " << endl;

	_getch();
	system("CLS");

	//---------------------------------------------------------------- .reverse

	cout << endl << " reverse " << endl;

	myList.reverse();

	list_size(myList);
	empty_Check(myList);

	cout << endl << " .pop_front / pop_back -> " << endl;
	cout << endl << " Press Any Button " << endl;

	_getch();
	system("CLS");

	//---------------------------------------------------------------- .pop

	cout << endl << " pop_front " << endl;

	myList.pop_front();

	list_size(myList);
	empty_Check(myList);

	cout << endl << " ------------------------------------------------ " << endl;

	cout << endl << " pop_back " << endl;

	myList.pop_back();

	list_size(myList);
	empty_Check(myList);

	cout << endl << "  clear -> " << endl;
	cout << endl << " Press Any Button " << endl;

	_getch();
	system("CLS");

	//----------------------------------------------------------------  clear

	cout << endl << " clear " << endl;

	myList.clear();

	list_size(myList);
	empty_Check(myList);

	cout << endl << " .asign -> " << endl;
	cout << endl << " Press Any Button " << endl;

	_getch();
	system("CLS");

	//----------------------------------------------------------------  asign

	cout << endl << " asign " << endl;

	myList.assign(4, 2); // !!!Removes previous items

	/*
	
		list<int> myList = {1, 2, 5, 3, 4, 5, 5, 5};

		list<int> myList_2 = {0, 0, 0, 0, 0, 0, 0, 0};

		myList.assign(myList_2.begin(), myList_2.end()); //  myList - myList_2;

	*/

	list_size(myList);
	empty_Check(myList);

	cout << endl << "  -> " << endl;
	cout << endl << " Press Any Button " << endl;

	_getch();
	system("CLS");

	return 0;

}