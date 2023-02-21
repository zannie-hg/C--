#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
    cout<<"Nhap n: ";
    cin>>n;
    int giaiThua=1;
    int i=0;
    do{
        
        i++;
        giaiThua*=i;
    }
    while(i<n);
    
    cout<<n<<"!=" <<giaiThua;

}