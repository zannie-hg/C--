#include<iostream>
using namespace std;
int main()
{
	int month, day, year;
	cout<<"Enter  (in numeric form)a month, a day, and a two-digit year"<<endl;
	cout<<"Enter a month: "<<endl;
	cin>>month;
	cout<<"Enter a day: "<<endl;
	cin>>day;
	cout<<"Enter a two-digit year: "<<endl;
	cin>>year;
	if (year == month * day)
		cout<<"The date is magic.";
		else
		cout<<"The date is not magic";
return 0;
	}