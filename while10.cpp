#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cout<<"nhap n duong:";
    cin>>n;
    
    while(n<=0){
        n++;
        cout<<"Nhap lai(n>0): ";
        cin>>n;
        }
    
    
    int s=0;
    int i=0;
    if(n>0){
       while(i<n) {
        i++; s+=i;
       }
       cout <<"S= "<<s<<endl; 
      
    }
    
    
    
    
    return 0;
}   
    
        
    