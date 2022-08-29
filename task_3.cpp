#include <iostream>

using namespace std;

string myName = "Dmytro";
int q = 0;
int w = -10;
int userNumber;
int sum;
int e;

int main() {
  // 1.1.0
  
    for (int i = 0; i <= 8; i++)
      cout << myName << endl;

    // 1.1.2
    while (q <= 100) {
      cout << q << endl;
      q++;
    }

    // 1.1.3

    do {
      cout << w << endl;
      w++;
    } while (w <= 10);

    // 1.1.4

    for (int e = -100; e <= 100; e++)
      cout << e << endl;

  // 2.1
  tryAgain:
    cout << "Enter positive integer number: " << endl;
    cin >> userNumber;
  if (userNumber > 0 && userNumber % 1 == 0){
    for (e = 0; e <= userNumber; e++){
      sum += e;
      }
    } 
  else {
    cout << "NOT POSITIVE. Try again." << endl;
    goto tryAgain;
    }
  cout << sum << endl;

  // 2.2 
  tryAgain2:
    cout << "Enter positive integer number: " << endl;
    cin >> userNumber;
    for (e = 0; e <= userNumber; e++){
      sum += e;
      }
  while (userNumber <= 0) {
      cout << "NOT POSITIVE. Try again." << endl;
      goto tryAgain2;
    }
  cout << sum << endl;
}