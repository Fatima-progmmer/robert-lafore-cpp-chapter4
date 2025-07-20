#include<iostream>
using namespace std;
struct volume
{
	int vol;
	float deminsional;
	float result;
};
int main()
{
	volume room[3];
	int x;
	for(int x=1;x<=3;x++)
	{
	cout << "Enter " << x << " volume =";
	cin >> room[x].vol;
	cout << "Enter " << x << " dimensional=";
	cin >> room[x]. deminsional;
	cout << " Result of " << x << " is ";
	room[x].result=room[x].deminsional*12+room[x].vol/12;
	cout << room[x].result << endl;
	}
return 0;
}
