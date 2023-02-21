#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cout<<"nhap n duong:";
    cin>>n;
    int i =0;
    
    do{
        
        cout<<"Nhap lai(n>0): ";
        n++;
        cin>>n;
        int s=0;
        for (int i = 0; i <= n; i++){
            s+=i;
            
        }
        cout<<"S= "<<s;
    }
    while(i>n);
    // while(n<=0){
    //     n++;
    //     cout<<"Nhap lai(n>0): ";
    //     cin>>n;
    //     }
    
    
    // int s=0;
    // int i=0;
    // if(n>0){
    //    while(i<n) {
    //     i++; s+=i;
    //    }
    //    cout <<"S= "<<s<<endl; 
      
    // }
    // int i=1;
    // int s= 0;
    // do {
    //     if(n>0){
    //         cout<<i<<" ";
    //         i++;
    //         s+=i;cout<<"S= "<<s;
    //     }
        
    // }
    
    // while(i<n);
    
    
    
    
    return 0;
}   
    
        