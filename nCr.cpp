#include<iostream>
using namespace std;
int facts(int n){
int fact=1;
for(int i=1;i<=n;i++)

{
    fact=fact*i;
}
return fact;
}

int nCr(int n ,int r){
    int head =facts(n);
    int down = facts(r)*facts(n-r);
   int ans  = head/down;
    return ans;
}
int main()
{
    int n,r;
    cin >> n>>r ;
    cout << nCr(n,r);

}