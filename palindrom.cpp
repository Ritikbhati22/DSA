#include <iostream>
using namespace std;
char toLowerChar(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char word = ch - 'A' + 'a';
        return word;
    }
}
int ReverseString(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
}
int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
bool palindrom(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    for (int i = 0; i < end; i++)
    {
        if (name[start] >= 33 && name[start] <= 47 || name[start] >= 58 && name[start] <= 64 || name[start] >= 91 && name[start] <= 96 || name[start] >= 123 && name[start] <= 126 || isspace(name[start]))
        {
            start++;
            continue;
        }
        if (name[end] >= 33 && name[end] <= 47 || name[end] >= 58 && name[end] <= 64 || name[end] >= 91 && name[end] <= 96 || name[end] >= 123 && name[end] <= 126 || isspace(name[end]))
        {
            end++;
            continue;
        }
        if (toLowerChar(name[start]) != toLowerChar(name[end]))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
        return 1;
    }
}

int main()
{
    char name[20];
    cout << "Enter the name : ";
    cout << endl;
    cin >> name;
    cout << "My name is: " << name << endl;
    int length = getlength(name);
    cout << "The length is : " << length << endl;
    ReverseString(name, length);
    cout << "The String : " << name << endl;
    cout << "palindrom or not " << palindrom(name, length) << endl;
    cout << "Small char : " << toLowerChar('B');
    return 0;
}