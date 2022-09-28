#include<iostream>
using namespace std;
void ReverseString(char name[],int n){
int s=0;
int e=n-1;
while(s<e){
    swap(name[s++],name[e--]);
}

}
 int getlength(char name[]){
   int  count =0;
    for(int i = 0; name[i] != '\0';i++)
    {
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout << "Enter the name : ";
    cout << endl;
    cin >> name;
    cout << "My name is: "<< name<<endl;
   int length= getlength(name);
    cout << "The length is : "<<length<<endl;
    ReverseString(name,length);
    cout << "The String : "<<name;
    return 0;
}