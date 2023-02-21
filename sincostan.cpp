#include <bits/stdc++.h>
using namespace std;
int main()
{
    float Pi = 3.14159;
    float a,b;
    cout<<"Nhap do cua mot goc: ";
    cin >>a;
    b=(a*Pi)/180;
    cout<<"Sin cua "<<a<<"la"<<(sin(b))<<endl;
    cout<<"cos cua "<<a<<"la"<<(cos(b))<<endl;
    cout<<"tan cua "<<a<<"la"<<tan(b)<<endl;
    cout<<"cot cua "<<a<<"la"<<1/tan(b)<<endl;
    return 0;
    

}