#include<bits/stdc++.h>
using namespace std;
bool LinearSearch(int arr[],int size,int key)
{
    for (int i=0;i<size;i++)
{
    if(arr[i]==key)
    {
        return 1;
    }
}
    return 0;

}
int main()
{
  int arr[10]={10,3,4,5,6,7,8,9,11,12};
    int key;
    cout << "\nEnter the key";
    cin >> key;
    bool found =(arr,10,key);
    if(found)
    {
    cout << "the key is present";
    }
    else{
    cout << "the key is not present";
    }
    return 0;
}
