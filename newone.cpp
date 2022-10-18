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
int LargestNum(int arr[][3], int row, int col)
{
    int maxi = INT16_MIN;
    int rowindex = 0;
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
            rowindex = i;
        }
    }
    cout <<"THE LARGEST NUM: " <<maxi;
    return rowindex;
}

int main()
{
    int arr[3][3];
cout << "Enter the array: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The array: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    sum(arr, 3,3);
        cout << endl<<"The row index: "<<LargestNum(arr, 3, 3);
}
