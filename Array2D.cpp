#include <iostream>
using namespace std;
bool linearSearch(int arr[][3], int target, int row, int col)
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[row][col]  == target){
                return 1;
            }
        }
    }
    return 0;
}

void printsum(int arr[][3],int row,int col){
    cout <<"the sum is:";
    for(int i=0;i<3;i++)
{
    int count=0;
    for(int j=0;j<3;j++){
count  += arr[row][col];
     }
cout<<count<<" ";
}
cout << endl;
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
    int target;
    cout << "enter the target";
    cin >> target;
    if (linearSearch(arr, target, 3, 3))
    {
        cout << "element is found";
    }
    else
    {
        cout << "not found";
    }
    printsum(arr,3,3);
    return 0;
}
