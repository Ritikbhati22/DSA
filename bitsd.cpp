#include<iostream>
using namespace std;
int bits(int n,int i)
{
int count=0;
  while(n!=0)
{
     if(n&1){
        count++;
        cout <<count;
     }
      n>>=1;
 }
    while(i!=0)
    {
        if(i&1)
        {
            count++;
        }
        i>>=1;
    }
    return count;

}
int main(){
    int a,b;
    cout << "Enter two Numbers: ";
    cin >> a >> b;
    cout << bits(a,b);
  
    return 0;
    
}