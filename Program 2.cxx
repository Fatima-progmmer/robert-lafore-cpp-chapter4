#include<iostream>
using namespace std;
struct model_a_point
{
	long p1[1][2];
	long p2[1][2];
	long sum[1][2];
};
int main()
{
	model_a_point coordinate;
	cout << "Enter value of 1st coordinate point= ";
	for(int i=1;i<=1;i++)
	{
		for(int j=1;j<=2;j++)
	cin >>coordinate.p1[i][j];
	}
	cout << "Enter value of 2nd coordinate point= ";
	for(int i=1;i<=1;i++)
	{
		for(int j=1;j<=2;j++)
	cin >>coordinate.p2[i][j];
	}
	cout << "coordinate of p1+p2 are ";
	for(int i=1;i<=1;i++)
	{
		for(int j=1;j<=2;j++)
		cout << coordinate.p1[i][j] + coordinate.p2[i][j] << " ";
	}
	return 0;
}