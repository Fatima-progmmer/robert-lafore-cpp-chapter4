#include<iostream>
using namespace std;
struct your_date
{
 int day;
 int month;
 int year;
};
int main()
{
	 your_date birth ;
	char slash='/';
	cout <<" Enter your birthday date= ";
	cin >> birth.day >> slash  >> birth.month >> slash >> birth.year;
	cout << "You entered =" ;
	cout << birth.day<< slash << birth.month << slash << birth.year;
	return 0;
}