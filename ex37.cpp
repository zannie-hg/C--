#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,p,s,q;
	cout<<"Nhap x"<<endl;
	cin>>x;
	cout<<"Nhap y"<<endl;
	cin>>y;
	p = x * y;
	s = x + y;
	q = s*2 + p*(s*x) * (p + y);
	cout<<"Ket qua: "<<x<<" * "<<y<<" la "<<p<<endl;
	cout<<"Ket qua: "<<x<<" + "<<y<<" la "<<s<<endl;
	cout<<"ket qua: "<<s<<"*2 + "<<p<<"*("<<s<<"*"<<x<<") * ("<<p<<"+"<<y<<")la: "<<endl;
	return 0;
}