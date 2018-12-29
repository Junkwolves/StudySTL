#include <deque>

#include <iostream>

using namespace std;

int main()
{

	deque<int> myDeque = {1};

	myDeque.push_back(2);

	myDeque.push_front(0);

	for (int i = 0; i < myDeque.size(); i++)
	{
		cout << endl << "    |     myDeque[" << i << "] = " << myDeque[i] << endl; // at();
	}

	for (int b : myDeque)
	{
		cout << endl << "    |     myDeque = " << b << endl;
	}

	myDeque.begin();

	myDeque.end();

}