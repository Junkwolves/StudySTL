#include <iostream>

#include <map>

#include <string>

using namespace std;

int main()
{

	/*
	pair<int, string> myPair_1(1, "Test_1");

	pair<int, string> myPair_2(2, "Test_2");

	pair<int, string> myPair_3(3, "Test_3");

	cout << endl << " | " << myPair_1.first << " | " << myPair_1.second << endl;
	cout << endl << " | " << myPair_2.first << " | " << myPair_2.second << endl;
	cout << endl << " | " << myPair_3.first << " | " << myPair_3.second << endl;
	*/

	map<int, string> myMap;

	//-----------------------------------------------

	myMap.insert(make_pair(1, "Test_1"));

	//or 

	myMap.insert(pair<int, string>(2, "Test_2"));

	//or 

	myMap.emplace(4, "Test_4");

	//-----------------------------------------------

	myMap.emplace(3, "Test_3");

	// auto it = myMap.find(756890); // return end();

	cout << endl << " | ---------------------------------------- | " << endl;

	for (auto it = myMap.begin(); it != myMap.end(); it++)
	{
		cout << endl << " | " << it->first << " | " << it->second << endl;
	}

	cout << endl << " | ---------------------------------------- | " << endl;

	auto it = myMap.find(3);

	if (it != myMap.end())
	{
		cout << endl << " | " << it->first << " | " << it->second << endl;
	}

	map<string, int> myMap_2;

	myMap_2.emplace("Test_1", 1);

	myMap_2.emplace("Test_2", 2);

	cout << endl << " | " << myMap_2["Test_2"] << " | " << endl;

	myMap_2["Test_2"] = 4;

	cout << endl << " | " << myMap_2["Test_2"] << " | " << endl;

	myMap_2.erase("Test_2");

	// at();

	multimap<string, int> myMultiMap;

	myMultiMap.emplace("Test_1", 1);
	myMultiMap.emplace("Test_1", 2);
	myMultiMap.emplace("Test_1", 3);
	myMultiMap.emplace("Test_1", 4);

	return 0;
}