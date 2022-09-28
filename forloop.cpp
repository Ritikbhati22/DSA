#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
//fibanocci series
int a=0,b=1;
cout <<a<<" "<<b<<" ";
for(int i=0;i<n;i++){
int newnumber=a+b;
cout << newnumber<<" ";
a=b;
b=newnumber;}
    return 0;
 }
