#include<iostream>
using namespace std;
int main(){
int n;
cin >>n;
for ( int i=0;i<n;i++)
{
    for(int j=0;j<n-i;j++){
        cout<<j+1<<" ";
    }
    for(int k=0;k<2*i;k++){
        cout<<"* ";
    }
    for(int k=n-i-1;k>=0;k--){
        cout<<k+1<<" ";
    }
    cout<<endl;
}
    return 0;
}