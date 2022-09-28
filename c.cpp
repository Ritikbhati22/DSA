#include<iostream>
using namespace std;
 getlength(char name[]){
   int  count =0;
    for(int i = 0; name[i] != '\0';i++)
    {
        count++;
    }
    return count;
}
intint main(){
    char name[20];
    cout << "Enter the name : ";
    cout << endl;
    cin >> name;
    cout << "My name is: "<< name<<endl;
    cout << "The length is : "<<getlength(name);
    return 0;
}