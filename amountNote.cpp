#include<iostream>
using namespace std;
int main()
{
    int n;
cout << "Enter Amount : ";
cin >> n;
int ch;
cout << "Enter Your choice: ";
cin >> ch;

switch (ch){
    case 1:cout << "The 100 Rupee Notes : "<< n/100;
    break;
    case 2:
    n=n%100;
    cout << "The 50 Rupee Notes : "<< n/50;
    break;
    case 3:
    n=n%50;
    cout << "The 20 Rupee Notes : "<< n/20;
    break;
    case  4:n=n%20;
cout << "The 1 Rupee Notes : "<< n/1;
break;

            }
}