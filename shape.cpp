#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i=0;
    while(i<=n)
    {
      int j=1;
      while(j<=n-i)
      {
          cout <<  j;
          j++;
      }
      int star=1;
while(star<=2*i)
{
    cout <<"*";
    star++;
}
      j=n-i;
      while(j>=1)
      {
          cout <<j;
          j--;
      }
      cout << endl;
      i++;
    }
    
    return 0;
}