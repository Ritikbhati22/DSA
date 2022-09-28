#include<iostream>
using namespace std;
int reverse(int arr[],int n)
{int start=0;
int end=n-1;

while(start<=end)
{
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}
int printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
         cout << arr[i]<<" ";
    }
    cout << endl;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int brr[6]={6,5,4,3,2,1};
    reverse(arr,6);
    reverse(brr,6);
    printArray(arr,6);
    printArray(brr,6);

}