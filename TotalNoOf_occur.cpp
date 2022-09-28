#include<iostream>
using namespace std;
int Firstoccur(int arr[],int key,int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    int ans = 0;
    if(start <= end){
        if(key==arr[mid]){ // if the key id equal to  mid
            ans = mid;   //save the mid 
            end = mid - 1;  //change the end point for first occure
            }
            else if(key > arr[mid]){  //if the key is bigger we will go in the left side
                start = mid + 1;
            }
            else {   // if the key is small we will go in the right side
                end = mid - 1;
            }
            mid = start + (end - start)/2;  //update the mid
    }
    return ans;
}
 int Lastoccur(int arr[],int key,int size)
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
int arr[10] = {1,2,3,4,5,5,5,5,6,7};
int key = 5;
int ans1 = Firstoccur(arr,key,10);
int ans2 = Lastoccur(arr,key,10);
cout << ans1<<endl;
cout << ans2<<endl;
cout << "Total occur " << ans2 - ans1 + 1;
return 0;
}