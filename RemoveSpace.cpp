#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string name;
    cout << "enter ant string : ";
    getline(cin,name);  
    for(int i = 0;i<name.length();i++){
        if(name[i] == ' '){
          name[i] = '@';
          name[i+1] = '4';
          name[i+2] = '0';

        }
        else{
           name[i];
        }
    }
    cout << name;
}