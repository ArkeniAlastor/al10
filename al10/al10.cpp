#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;

int main()
{
	/*set<int> group;
	group.insert(4);
	group.insert(1);
	group.insert(2);
	group.insert(5);
	group.insert(3);

	for (auto ptr = group.begin(); ptr != group.end(); ptr++)
	{
		cout << *ptr << "\t";
	}
	cout << endl;

	auto ptr = group.find(3);
	cout << *ptr << endl;*/

	/*map<int, string> group;

	group.insert(pair<int, string>(5000, "Ivanov"));
	group.insert(pair<int, string>(2500, "Petrov"));
	group.insert(pair<int, string>(3000, "Sidorovich"));
	group.insert(pair<int, string>(1500, "Petrovich"));
	group.insert(pair<int, string>(4000, "Polyakov"));
	group.insert(pair<int, string>(6000, "Tenetkov"));

	for (auto ptr = group.begin(); ptr != group.end(); ptr++)
	{
		cout << ptr->first << ": " << ptr->second << endl;
	}*/

	setlocale(0, "ru");
	map<string, string> dict;

	dict.insert(pair<string, string>("dog", "собачка"));
	dict.insert(pair<string, string>("cat", "кошечка"));
	dict.insert(pair<string, string>("apple", "яблочко"));
	dict.insert(pair<string, string>("strident", "студент"));

	for (auto ptr = dict.begin(); ptr != dict.end(); ptr++)
	{
		cout << ptr->first << ": " << ptr->second << endl;
	}

	string str;
	cout << "Enter  -> ";
	cin >> str;

	auto ptr = dict.find(str);
	cout << ptr->second << endl;
}