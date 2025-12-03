#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> group;
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
	cout << *ptr << endl;


}