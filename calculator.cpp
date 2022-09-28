#include<iostream>
using namespace std;
int main()
{
int n;
cout << "Enter Your Choice:\n1:Multiply\n2:pluse\n3:minus\n4:modules\n5:divide\n";
cout << "Your choice is : ";
cin >> n;
int x;
int y;
cout << "Enter first Num : ";
cin >> x;
cout << " Enter Second Num : ";
cin >> y;
switch(n)
{
    case 1: cout << " The Multiply : "<< x*y << endl;
    break;
    case 2: cout << " The pluse : "<< x + y << endl;
    break;    
    case 3: cout << " The minus : "<< x -y << endl;
    break;
    case 4: cout << " The Modules "<< x % y << endl;
    break;
    case 5: cout << " The divide : "<< x / y << endl;
    break;
    default : cout << " Your Choice is Not Available";
}
 

return 0;
}