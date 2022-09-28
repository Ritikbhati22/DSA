#include<iostream>
using namespace std ;
int main()
{int n;
cin >> n;
int count =0;
while(n!=0)
if(n&1)
{
    count++;
cout << count;
}
n=n>>1;
return 0;
}