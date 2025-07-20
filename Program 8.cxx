#include<iostream>
using namespace std;
struct fraction
{
	int nominator1;
	int denomintar1;
	int nominator_2;
	int denomintar_2;
	float add;
	int first;
	int second;
	int multi;
};
int main()
{
	fraction order;
	char dummychar='/';
	cout << "Enter 1st fraction = ";
	cin  >> order.nominator1  >> dummychar >> order.denomintar1;
	cout << "Enter 2nd fraction =";
	cin >> order.nominator_2
	>> dummychar >> order.denomintar_2;
	order.multi=order.denomintar1*order.denomintar_2;
	order.first = order.multi/order.denomintar1*order.nominator1;
	order.second = order.multi/order.denomintar_2*order.nominator_2;
	order.add=order.first + order.second;
	cout <<order.add << "/" << order.multi;
	return 0;
}