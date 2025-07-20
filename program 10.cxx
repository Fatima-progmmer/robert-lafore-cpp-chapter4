#include<iostream>
using namespace std;
struct sterling
{
	double decpounds;
	float pounds;
	float shellings;
	float pence;
	float defrace;
};
	int main()
{
	sterling notation;
	cout << "Enter Amount in new style = ";
	cin  >> notation.decpounds;
	notation.pounds = static_cast<int>(notation.decpounds);
	notation.defrace = notation.decpounds-notation.pounds;
	notation.shellings=notation.defrace*20;
	notation.pence= notation.defrace*20;
	cout << "Equivalent in old notation = £";
	cout << notation.pounds << "."<< notation.shellings <<"."<< notation.pence;
	return 0;
	
}