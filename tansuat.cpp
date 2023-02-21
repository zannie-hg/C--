#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
   cin>>n;
   int a[100];
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
   }
    // sap xep giam dan
   sort(a,a+n, greater<int>());
   for (int i = 0; i < n; i++)
   {
    cout<<a[i]<<" ";
   }
   //khoi tao mang 2 chieu de sap xep tan suat va gia tri
   int mode[n][2];
    for(int i=0;i<2;i++)
    for(int j=0;j<10;j++) mode[j][i]=0;
     mode[0][0]=1;
 
    //tim tan suat
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    if(a[i]==a[j+1]) {++mode[i][0];mode[i][1]=a[i];}
   
    //tim so lan suat hien nhieu nhat
    int max;
    int k=0;
    max=mode[0][0];
    for(int j=0;j<10;j++)
    if(max<mode[j][0]){max=mode[j][0];k=j;}
   
    //in ket qua
    cout<<"Gia tri xuat hien nhieu nhat la:"<<mode[k][1]<<"\n";
    cout<<"Xuat hien "<<max<<" lan.";
   
    return 0;
}