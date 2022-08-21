#include <iostream>

using namespace std;

int data = 255;
float payload = 6.153;
bool flag = true;
char ch = '#';

int main() {
  // 0
  cout << "Something 1" << endl;
  cout << "Something 2" << endl;
  cout << "Something 3" << endl;

  // 1
  cout << "payload value is : " << payload << endl;
  cout << "flag value is : "
       << "true" << endl;
  cout << "ch value is : " << ch << endl;

  // 2
  int t2 = 10;
  int t3 = t2 + 10;
  int t4 = t3 + 100;
  cout << t4 << endl;
  int t5 = t4 - 20;
  cout << t5 - 20 << endl;
  int t6 = t5 * 3;
  cout << t6 << endl;
  int t7 = t6 / 2;
  cout << t7 << endl;

  // 3
  int g = 0;
  int h = 1;
  float q = 1.5426;

  // 4 Не була визначена перемінна Value
  int value = 3;
  int Value = value + 1;
  cout << Value << endl;

  // 5 Не впевнений, але напевно грає роль використання великих та маленьких
  // літер
  int userID = 0x12;
  userID += 5;
  cout << userID << endl;
}