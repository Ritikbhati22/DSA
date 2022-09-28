#include<iostream>
using namespace std;
int first(int arr[],int key,int size)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start/2);
    int ans=-1;
    while (start<=end){
        if(key==arr[mid]){
         ans = mid;
         end = mid-1;
        }
        else if (key > arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
        mid = start + (end-start/2);
    }
    return ans;}
    int last(int arr[],int key,int size)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start/2);
    int ans=-1;
    while (start<=end){
        if(key==arr[mid]){
         ans = mid;
         start = mid+1;
        }
        else if (key > arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
        mid = start + (end-start/2);
    }
    return ans;}
int main()
{
    int arr[11] ={1,2,3,3,3,3,3,3,3,4,4};
    int ans = first(arr,3,11);
    int an = last(arr,3,11);
    cout << "First occur: "<<ans<<endl;
    cout << "last occur: "<<an<<endl;
    cout << "total occur: " << an - ans + 1;
return 0;
}