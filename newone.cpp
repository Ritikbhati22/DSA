#include <iostream>
using namespace std;
void sum(int arr[][3], int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            count += arr[i][j];
        }
        cout <<"THE ROW COUNT :" <<count;
    cout << endl;
    }
}
void LargestNum(int arr[][3], int row, int col)
{
    int maxi = INT16_MIN;
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            count += arr[i][j];
        }
        if (count > maxi)
        {
            maxi = count;
        }
    }
    cout <<"THE LARGEST NUM: " <<maxi;
    // cout << maxi;
}

int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    sum(arr, 3,3);
        LargestNum(arr, 3, 3);
}
