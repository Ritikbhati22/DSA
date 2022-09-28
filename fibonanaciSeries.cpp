#include<iostream>
using namespace std;

int fab(int n)
{
    int a=0;
    int b=1;
    int c=0;
    // cout << a<<" "<<b;
for(int i=2;i<=n;i++){
    if(i==n)
    {
        return c;
    }
     c=a+b;
      a=b;
      b=c;
     }
return 0;

}
int main()
{
    int n;
cout << "Enter any number";
cin >> n;
cout<<" "<<fab(n);
return 0;
}