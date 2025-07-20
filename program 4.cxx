#include<iostream>
using namespace std;
struct employees
{
	int Number;
	float dollar;
	};
	int  main()
{
	employees record[3];
	for(int x=1 ;x<=3;x++)
	{
		cout << "Enter " << x << " employee number = ";
		cin >> record[x].Number;
		cout << "Enter " << x << " employee compensation =" ;
		cin >> record[x].dollar;
	}
	cout << "\t\tYou enterd" << endl;
	for(int y=1;y<=3;y++)
	{
	cout << y << " Composition is " << record[y].dollar <<endl;
	cout << y << " Employees number is " << record[y].Number <<endl;
}
return 0;
}