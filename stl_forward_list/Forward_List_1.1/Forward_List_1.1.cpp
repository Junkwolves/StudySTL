#include <iostream>

#include <forward_list>

using namespace std;

int ForwList_count = 0;

int main()
{

	/*

		// Singly linked list

	only
		.push_front()

		.pop_front()

		iterator++

	Does not work:

		--- .push_back()

		--- .pop_back()

		--- iterator--

	*/

	forward_list<int> myForwList = {1, 2, 3, 4};

	myForwList.push_front(0);

	myForwList.pop_front();

	for(auto val : myForwList)
	{
		cout << endl << "      myForwList[" << ForwList_count << "] = " << val << endl;

		ForwList_count++;
	}

	ForwList_count = 0;

	cout << endl << " ----------------------------------------- " << endl;

	forward_list<int>::iterator it = myForwList.begin(); // it = myForwList[0]

	myForwList.erase_after(it);

	for (auto val : myForwList)
	{
		cout << endl << "      myForwList[" << ForwList_count << "] = " << val << endl;

		ForwList_count++;
	}

	ForwList_count = 0;

	cout << endl << " ----------------------------------------- " << endl;

	it = myForwList.before_begin(); // it = before myForwList[0]

	myForwList.insert_after(it, 34);

	for (auto val : myForwList)
	{
		cout << endl << "      myForwList[" << ForwList_count << "] = " << val << endl;

		ForwList_count++;
	}

	ForwList_count = 0;

}