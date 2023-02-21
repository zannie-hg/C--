#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,S;
    
    cout<<"Nhap so co hai chu so: "<<endl;
    cin>>a;
    S=0;
    while(a>0){
        S+=a%10;a=a/10;

    }
    cout <<"Tong so co hai chu so:"<<S<<endl;
    return 0;


}