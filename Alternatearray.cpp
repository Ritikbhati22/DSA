#include<iostream>
using namespace std;
int reverse(int arr[],int n)
{
for(int i=0;i<n;i=i+2){
    if(i+1<n){
    swap(arr[i],arr[i+1]);}
}
}
int printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
}
int main()
{
    int arr[6]={1,2,3,4,5};
    reverse(arr,5);
    printarray(arr,5);
    int m;
    cout << "enter the size : ";
    int a[5];
    for(int i = 0;i<=m;i++)
    {
        cin >>a[i];
    }
    reverse(a,m);
    printarray(a,m);
    
}