#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[50];
    int n;
    cout << "Nhap :";
    cin>>n;
    while (n <= 0)
    {

        cout << "_Loi !, yeu cau nhap lai: " << endl;
        n++;
        cin >> n;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}