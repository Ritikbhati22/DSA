// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Max(int arr[],int size)
{
        int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int Min(int arr[],int size)
{
        int min=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>min){
            min =arr[i];
        }
    }
    return min;
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Max num : \n"<<Max(arr,n);
    cout << "Min num : "<<Min(arr,n);
}