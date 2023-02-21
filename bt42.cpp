#include <bits/stdc++.h>
using namespace std;

string printRoman(int number)
{
    int num[] = {1,4,5,9,10};
    string sym[] = {"I","IV","V","IX","X"};
    int i=4;   
	string res = "";
    while(number>0)
    {
      int div = number/num[i];
      number = number%num[i];
      while(div--)
      {
        res+=sym[i];
      }
      i--;
    }
	return res;
}
 
int main()
{
    int n;
	cin >> n;
	cout << "So la ma la:";
 
    cout << printRoman(n);
 
    return 0;
}