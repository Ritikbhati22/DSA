#include <iostream>
#include<string>
#include<vector>
using namespace std;
bool valid(char ch){
     if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9'|| ch >= 'A' && ch <= 'Z'){
        return 1;
     }
     return 0;
}
char tolower(char n){
    if(n >= 'a' && n <= 'z' || n >= '0' && n <= '9'){
      return n;
    }
    else{
        char temp = n - 'A' + 'a';
        return temp;
    }

}
bool checkpalindrom(string n){
    int start = 0;
    int end = n.length()-1;
    while(start<=end){
        if(n[start]!=n[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
        return 1;
    }
}
    bool palindrom(string s)
    {
        string temp = "";
                for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
            

        }
        for(int i=0;i<temp.length();i++){
            temp[i] = tolower(temp[i]);
        }
        return checkpalindrom(temp);
    }
int main()
{
    string name;
    cout << "enter any name: ";
    cin >> name;
cout<<checkpalindrom(name);

}