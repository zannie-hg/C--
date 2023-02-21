#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int giaiThua=1;
    int i=0;
    while(i<n){
        i++;
        giaiThua*=i;

    }
    // for(int i=1;i<=n;i++){
    //     giaiThua*=i;
    // }
    cout<<n<<"!=" <<giaiThua;
    return 0;
}