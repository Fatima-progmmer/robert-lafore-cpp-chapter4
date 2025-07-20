#include<iostream>
#include<string>
using namespace std;
struct format
{
	int hour;
	int min;
	int sec;
	 float totalsec;
};
int main()
{
	format time;
	string z =":";
	cout << "Enter time = ";
	cin >> time.hour >> z >> time.min >> z >> time.sec;
	time.totalsec= time.hour*3600 + time.min*60+time.sec;
	cout << "The total seconds is " << time.totalsec;
	return 0;
}