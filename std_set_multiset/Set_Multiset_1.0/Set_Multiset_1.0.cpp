#include <iostream>

#include <set>

using namespace std;

int el_count = 0;

int main()
{

	set<int> mySet;

	mySet.insert(2);
	mySet.insert(1);
	mySet.insert(3);
	mySet.insert(5);
	mySet.insert(7);
	mySet.insert(4);
	mySet.insert(-1);

	for (int value : mySet)
	{
		cout << endl << "      mySet[" << el_count << "] = " << value << endl;
		el_count++;
	}

	el_count = 0;

	cout << endl << " ---------------------------------------------------- " << endl;

	int find_val = -1;

	auto it = mySet.find(find_val);

	if (it != mySet.end())
	{
		cout << endl << "              " << find_val << "                    + " << endl;
	}
	else
	{
		cout << endl << "              " << find_val << "                    - " << endl;
	}

	find_val = 22;

	it = mySet.find(find_val);

	if (it != mySet.end())
	{
		cout << endl << "              " << find_val << "                    + " << endl;
	}
	else
	{
		cout << endl << "              " << find_val << "                    - " << endl;
	}

	cout << endl << " ---------------------------------------------------- " << endl;

	mySet.erase(3);

	for (int value : mySet)
	{
		cout << endl << "      mySet[" << el_count << "] = " << value << endl;
		el_count++;
	}

	//-----------------------------------------------------------------------------------------------
	cout << endl << " ---------------------------------------------------- " << endl;

	multiset<int> my_M_Set = { 1, 1, 1, 3, 2, 2, 4, 4};

	for (int value : my_M_Set)
	{
		cout << endl << "      my_M_Set[" << el_count << "] = " << value << endl;
		el_count++;
	}

	auto it_1 = my_M_Set.lower_bound(1);

	cout << endl << "      it_1 = " << *it_1 << endl;

	auto it_2 = my_M_Set.upper_bound(1);

	cout << endl << "      it_2 = " << *it_2 << endl;

	return 0;

}