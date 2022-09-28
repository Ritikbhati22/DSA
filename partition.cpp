#include <iostream>
using namespace std;
bool partitionpossible(int k, int n, int arr[], int mid)
{
    int paintersCount = 1;
    int paintsum = 0;

    for (int i = 0; i < n; i++)
    {
        if (paintsum + arr[i] <= mid)
        {
            paintsum += arr[i];
        }
        else
        {
            paintersCount++;
            if (paintersCount > k || arr[i] > mid){
                return false;
            }
            paintsum = arr[i];
        }
    }
    return true;
}
int painter(int k, int n, int arr[])
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int ans = -1;
    int end = sum;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (partitionpossible(k, n, arr, mid))
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
    int arr[4] = {5,5,5,5};
    int ans = painter(2,4,arr);
    cout << "the time will taken : " << ans;
    return 0;
}