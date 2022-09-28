#include<iostream>
#include<math.h>
    using namespace std;
    int main()
{ 
    int n;
    int ans=0;
    int i=0;
    cout<< "Enter The Numbers";
    cin >> n; 
    while (n!=0) 
{
    int digit = n % 10;
    if(digit==1){
    ans = ans+ pow(2,i);
    // cout << ans<<endl;
    n=n/10;
    i++;
}}

    cout << "The Answer is : "<< ans;
}