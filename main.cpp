#include <iostream>
using namespace std;

int main() {
  int row, col;
  cout << "Enter row:";
  cin >> row;
  cout << "Enter col:";
  cin >> col;
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= col; j++) {
      if (i == 1 || i == row || j == 1 || j == col) {
        cout << "x";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}