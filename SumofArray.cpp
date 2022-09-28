#include<bits/stdc++.h>
#include<iostream>
using  namespace std;
int SumofArray(int arr[],int size)
{
    int ans= 0;
    for (int i=0;i<size;i++)
    {
       ans= ans + arr[i];
    //   count++;
    }
    return ans;
}
int main()
{
    int size;
    int arr[100];
    cout << "Enter the size of array : ";
    cin >> size;
    cout << "Enter the array :\n";
        for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    cout << SumofArray(arr,size);
}