#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n= "<<endl;
    cin>>n;
    int a;
    cout<<"Nhap a= "<<endl;
    cin>>a;
    int s=1;
    for (int i = 1; i <= n; i++)
    {
        s*=a;
    }
    cout<<"Luy thua "<<a<<" mu "<<n<<" la :"<<s;
    

}