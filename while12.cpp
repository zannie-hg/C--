#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n=";
    cin>>n;
    int S=0;
    int i=0;
    while(i<n){
        i++;
        if(i>0 && i%2==0){
            S+=i;
        }
    }
    // for(int i =0;i<=n;i++){
    //     if((i>0) && (i%2==0)){
    //         S+=i;
    //     }
        
    // }
        
    cout<<"S= "<<S;
    return 0;
    
    
}