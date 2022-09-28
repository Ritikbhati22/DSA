
#include<iostream>
using namespace std;
int Binary(int arr[],int size, int key)
{
    int start = 0;

    int end = size - 1;
    int mid = start + (end - start / 2);
    while (start <= end)
    {
     if (key == arr[mid])
     {
        return mid;
     }
     if (key < mid)
     {
        end  = mid -1;
     }
     else
     {
        start = mid +1;
     }
     mid = start + (end - start / 2);
    }
return -1;
}
int main()
{
    int arr[6] ={2,4,7,9,10,22};
    int ans = Binary(arr,6,1);
    cout << "The Key is : "<< ans;
return 0;
}
