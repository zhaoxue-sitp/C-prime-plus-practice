#include <iostream>
#include <string>

int main()
{
	using namespace std;
	const int ArSize = 20;
	string name;
	string dessert;

	cout << "Enter your name:\n";
	cin.getline(name, ArSize);
	cout << "Enter your favourite dessert:\n";
	cin.getline(dessert, ArSize);
	cout << "I have some delicious "
		<< dessert;
	cout << " for you, "
		<< name
		<< ".\n";

	return 0;
}