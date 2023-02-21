#include <bits/stdc++.h>
using namespace std;
int main()
// khai bao so nguyen A gom 10 phan tu thuc hien cac cong viec
// 1. nhap mangcA[10]
// 2. xuat A[10]
// 3. tinh tbc cac phan tu A, in ket qua tbc
{


    int A[10];
    int s=0;

    cout<<"Nhap phan tu mang A:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>A[i];
       
    }
    cout<<"Xuat phan tu mang A:"<<endl;
    for (int  i = 0; i < 10; i++)
    {
        cout<<A[i]<<" ";
        s+=A[i];
    }
    cout<<endl;
    float TBC=s/10;
    cout<<"TBC = "<<s;
    



}