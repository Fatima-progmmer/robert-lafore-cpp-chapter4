#include<iostream>
using namespace std;
int main()
{
	char letter;
	enum etype {laborer, secretary, manager, accountant, executive, researcher};
	cout << "Enter employee type (First Letter only )" << endl;
	cout << "laborer, secretary, manager," <<endl;
	 cout <<  " accountant, executive, researcher :";
	cin >> letter;
	switch (letter)
	{
		case 'l':
		cout << "Employe type is laborer";
		break;
			case 's':
		cout << "Employe type is secretary";
		break;
			case 'm':
		cout << "Employe type is manager";
		break;
			case 'a':
		cout << "Employe type is accountant";
		break;
			case 'e':
		cout << "Employe type is executive";
		break;
			case 'r':
		cout << "Employe type is researcher";
		break;
	}
	return 0;
}