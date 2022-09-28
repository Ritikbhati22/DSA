#include<iostream>
using namespace std;
int AP(int n)
{
    int ans=(3*n+7);
    return ans;
}
int main()
{
    int N;
    cout << " Enter any number";
    cin >> N;
    cout << AP(N);
    return 0;
}