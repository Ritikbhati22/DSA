#include <iostream>
using namespace std;
int occurmax(string s){
    int arr[26];
    // create an array for count of char
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        // change into lower case
        int n =0;
        n = ch -'a';
        arr[n]++;
    }
    // fiding the maxword
    int maxi = -1 ;
    int ans = 0;
     for(int i=0;i<26;i++)
{  if(maxi< arr[i]){
ans = i ;
maxi = arr[i];
    }}
return ans+'a';

}
int main()
{
    string str;

    cout << "Enter any string";
    cin  >> str;
    cout <<  occurmax(str);
}