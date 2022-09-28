#include<iostream>
using namespace std;
int main() {
  int n = 4;
  int row = 1;
  while (row <= n) {
    // Print Space
    int space =1;
    while (space < row)
    {
      cout<< " ";
      space++;
    }

    // Print star
    int col = 1;
    while (col <= (n-row+1)) {
      cout<< (col + row -1);
      col++;
    }

    cout<<endl;
    row++;
  }
}