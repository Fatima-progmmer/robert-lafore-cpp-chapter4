#include<iostream>
using namespace std;

struct employees
{
	int Number;
	float dollar;
};

	struct your_date
{
 int day;
 int month;
 int year;
};

	int  main()
{
	char choice;
	employees record[4];
	 your_date birth[4];
	char slash='/';
	char letter[4];
	enum etype {laborer, secretary, manager, accountant, executive, researcher};
	
	for(int x=1 ;x<=4;x++)
	{
		cout << "\n\n*----_------------_------Enter" << x <<" record -------_-------\n\n" << endl;
		cout << "Enter " << x << " employee number = ";
		cin >> record[x].Number;
		cout << "Enter " << x << " employee compensation =" ;
		cin >> record[x].dollar;
		cout <<" Enter your first employment  date= ";
	cin >> birth[x].day >> slash  >> birth[x].month >> slash >> birth[x].year;
	cout << "Enter employee type (First Letter only )" << endl;
	cout << "laborer, secretary, manager," <<endl;
	 cout <<  " accountant, executive, researcher :";
	cin >> letter[x];
	}
	
	cout << "\n\t\t√√√You enterd✓✓✓\n\n" << endl;
	for(int y=1;y<=4;y++)
	{
		cout << "\n*------------------Employee " << y << " Data-------------- ";
	cout << y << " Employees number is " << record[y].Number <<endl;
		cout << y << " Composition is " << record[y].dollar <<endl;
	cout << y << " employment date  =" ;
	cout << birth[y].day<< slash << birth[y].month << slash << birth[y].year << endl;
	choice=letter[y];
		switch (choice)
	{
		case 'l':
		cout << "Employe type is laborer" <<endl;
		break;
			case 's':
		cout << "Employe type is secretary" << endl;
		break;
			case 'm':
		cout << "Employe type is manager" <<endl;
		break;
			case 'a':
		cout << "Employe type is accountant" <<endl;
		break;
			case 'e':
		cout << "Employe type is executive" <<endl;
		break;
			case 'r':
		cout << "Employe type is researcher"<<endl;
		break;
	}
}

return 0;
}