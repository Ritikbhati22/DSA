#include <iostream>
using namespace std;
bool linearSearch(int arr[][2], int target, int row, int col)
{
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[row][col]  == target){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[2][2];
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int target;
    cout << "enter the target";
    cin >> target;
    if (linearSearch(arr, target, 2, 2))
    {
        cout << "element is found";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}
