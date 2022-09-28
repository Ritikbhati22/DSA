#include<iostream>
using namespace std;
int numberOfSetBits(int a, int b) {
  int count = 0;
  while (a != 0) {
    if (a&1){
      count++;
    }
    a >>= 1;
  }
  while (b != 0) {
    if (b&1){
      count++;
    }
    b >>= 1;
  }
  return count;
}

int main() {
  int a, b;
  cout<< "Enter value of a: ";
  cin>>a;
  cout<< "Enter value of b: ";
  cin>>b;

  int ans = numberOfSetBits(a, b);
  cout<<"Answer: "<<ans <<endl;
  return 0;
}
