#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int Answer=0;
    // int i=0;
     cin>> n;
    while(n!=0)
{
    int digit = n%10;
    if((Answer> int INT_MAX/10 )||(Answer< int INT_MIN/10))
    {cout<< "0";
    }
    Answer = Answer*10+digit;
    n=n/10;
    // i++;
}
cout << Answer;
}