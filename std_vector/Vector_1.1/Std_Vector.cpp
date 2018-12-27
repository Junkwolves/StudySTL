#include <iostream>

#include <vector>

#include <conio.h> // _getch();

#include <windows.h> // system("CLS");


using namespace std;

void vector_size_capacity(vector<int> &myVector)
{
	//---------------------------------------------------- vector print

	cout << endl << "    |     Vector size: " << myVector.size() << endl;

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << endl << "    |     " << i << " = " << myVector[i] << endl;  // myVector.at(1);
	}

	cout << endl << "    |     Vector capacity: " << myVector.capacity() << endl;

}

void empty_Check( vector<int> &myVector)
{
	if (myVector.empty())
	{
		cout << endl << "    |     Vector is empty. " << endl;
	}
	else
	{
		cout << endl << "    |     Vector is not empty. " << endl;
	}
}

int main()
{
	vector<int> myVector;

	//---------------------------------------------------- push_back

	cout << endl << " push_back(3, 4, 2, 8) " << endl;

	myVector.push_back(3);
	myVector.push_back(4);
	myVector.push_back(2);
	myVector.push_back(8);

	vector_size_capacity(myVector);
	empty_Check(myVector);

	cout << endl << " clear -> " << endl;
	cout << endl << " Press Any Button " << endl;

	_getch();
	system("CLS");

	//---------------------------------------------------- clear

	cout << endl << " clear " << endl;

	myVector.clear();

	vector_size_capacity(myVector);
	empty_Check(myVector);

	cout << endl << " push_back(1, 2, 3, 4) -> " << endl;
	cout << endl << " Press Any Button " << endl;

	_getch();
	system("CLS");

	//---------------------------------------------------- push_back

	cout << endl << " push_back(1, 2, 3, 4)" << endl;

	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(4);

	vector_size_capacity(myVector);
	empty_Check(myVector);

	cout << endl << " pop_back -> " << endl;
	cout << endl << " Press Any Button " << endl;

	_getch();
	system("CLS");

	//---------------------------------------------------- pop_back

	cout << endl << " pop_back " << endl;

	myVector.pop_back();

	vector_size_capacity(myVector);
	empty_Check(myVector);

	cout << endl << " reserve(20) -> " << endl;
	cout << endl << " Press Any Button " << endl;

	_getch();
	system("CLS");

	//---------------------------------------------------- reserve

	cout << endl << " reserve(20) " << endl;

	myVector.reserve(20);

	vector_size_capacity(myVector);
	empty_Check(myVector);

	cout << endl << " shrink_to_fit -> " << endl;
	cout << endl << " Press Any Button " << endl;

	_getch();
	system("CLS");

	//---------------------------------------------------- shrink_to_fit

	cout << endl << " shrink_to_fit " << endl;

	myVector.shrink_to_fit();

	vector_size_capacity(myVector);
	empty_Check(myVector);

	cout << endl << " resize(10, 0) -> " << endl;
	cout << endl << " Press Any Button " << endl;

	_getch();
	system("CLS");

	//---------------------------------------------------- resize

	cout << endl << " resize(10, 0) " << endl;

	myVector.resize(10, 0);

	vector_size_capacity(myVector);
	empty_Check(myVector);

	cout << endl << " Press Any Button " << endl;

	_getch();
	return 0;
}