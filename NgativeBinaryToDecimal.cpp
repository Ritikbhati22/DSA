#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n ;
    int ans=0;
    int i=0;

    n*=-1;
    cin >> n ;
    while (n)
    {
        int bit=n&1;
        ans=(bit *  pow(10,i)+ans);
        n = n >> 1; 
        i++;
        
    }
    int ones=~(ans);
int twos=ones+1;
cout << twos<<endl;

int ones1=~(twos);
int twos2= ones1+1;
cout<<twos2;
    cout << ans;

}