#include <iostream>
using namespace std;
bool ispossiblesol(int arr[],int n,int m,int mid){
    int studentCount = 1;
    int papersum = 0;
    for(int i=0;i<n;i++){
        if(papersum+arr[i]<=mid){
            papersum += arr[i];
        }
        else{
              studentCount++;
              if(studentCount>m || arr[i]>mid){
                return false;
              }
             papersum = arr[i];
        }
    }
     return true;
}
int BookAllocation(int arr[], int m, int n)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (ispossiblesol(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[5] = {10, 20, 30, 40,50};
    int ans = BookAllocation(arr,2,5);
    cout << ans;
}
