#include<iostream>
using namespace std;
int main()
{
int n;
cin>> n;
int i=0;
while(i<n)
{
    int j=1;
    while(j<=n-i)
    {
        cout << j;
        j++;
    }
    int s=1;
    while(s<=2*i)
    {
        cout << "*";
        s++;
    }
     int p=n-i;
    while(p>=1)
    {
        cout << p;
        p--;
    }
    cout << endl;
    i++;
}
return 0; }