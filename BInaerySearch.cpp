#include <iostream>
using namespace std;
int  binary(int arr[],int size,int key){
    int start = 0 ;
    int end = size - 1;
    int mid = start + (end - start/2);
    while (start  <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else  {
            end = mid -1;
        }
        mid = start + (end -start / 2);
    }
    return -1;
}
int main ()
{
    int arr[10] = {1,2,3,4,5,6,8,9,10,11};
    int  ans= binary (arr,10,1);
    cout << "The key is available on index Num: "<< ans;
    return 0;

 }