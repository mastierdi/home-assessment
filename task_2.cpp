#include <iostream>

using namespace std;

int main() {
  // 1 --------------------------------------------
  cout << "Enter FIRST number: ";
  float a;
  cin >> a;

  if (a > 0) {
    cout << "You have entered positive number" << endl;
  }
  if (a < 0) {
    cout << "You have entered negative number" << endl;
  }
  if (a == 0) {
    cout << "You have entered ZERO :)" << endl;
  }

  cout << "Enter new number: ";
  float b;
  cin >> b;
  if (a > b) {
    cout << "FIRST > NEW" << endl;
  }
  if (a < b) {
    cout << "FIRST < NEW" << endl;
  }
  if (a == b) {
    cout << "FIRST = NEW" << endl;
  }

  // 2 --------------------------------------------
  cout << "Enter FIRST text: ";
  string text1;
  cin >> text1;
  cout << "Enter SECOND text: ";
  string text2;
  cin >> text2;
  if (text1 == text2) {
    cout << "FIRST and SECOND texts are the same";
  } else {
    cout << "FIRST and SECOND texts are different." << endl;
  }

  // 3 --------------------------------------------
  float q;
  float w;
  float e;
  cout << "Now we find the largest of three entered numbers." << endl;
  cout << "Enter FIRST number: ";
  cin >> q;
  cout << "Enter SECOND number: ";
  cin >> w;
  cout << "Enter THIRD number: ";
  cin >> e;
  if ((q > w) && (q > e)) {
    cout << "FIRST number is the largest";
  }
  if ((w > q) && (w > e)) {
    cout << "SECOND number is the largest";
  }
  if ((e > q) && (e > w)) {
    cout << "THIRD number is the largest";
  }
  return 0;
}