#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;

	cout << "May i know your name";
	getline(cin, str);

	cout << "Hello "<< str;


	return 0;
}


