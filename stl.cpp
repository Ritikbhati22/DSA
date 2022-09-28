#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(21);
    v.push_back(42);
    v.push_back(45);
    v.push_back(3);
    v.push_back(1);
cout << "Binary Search : "<<binary_search(v.begin(),v.end(),21);
sort(v.begin,v.end);


}