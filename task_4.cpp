#include <iostream>
using namespace std;

string space = " ";
string dbl = "==========";

void myName(string name);
void myData (string myName, string mySurname, int myAge);
int trueOrFalse (int a, int b);
int intPrint(int n);
int intSum(int e);
int faktorial();
int separateSum(int x, char y);


int main() {
    cout << intSum(5) << endl; // ця функція так і не вийшла в мене, ставив і на почтаку і в кцінці
    cout << dbl << endl;
    myName("Dmytro");
    cout << dbl << endl;
    myData("Dmytro", "Mastierov", 33);
    cout << dbl <<endl;
    cout << trueOrFalse(2, 2) << endl;
    cout << dbl << endl;
    intPrint(3);
    cout << dbl << endl;
    cout << faktorial() << endl;
    cout << dbl << endl;
    separateSum(5, 'e');
    cout << dbl << endl;
    


  return 0;
}

void myName(string name){
    cout << name << endl;
}

void myData (string myName, string mySurname, int myAge){
    cout << myName << space << mySurname << space << myAge << endl;
}

int trueOrFalse(int a, int b){
    if (a == b){
        return true;
    } else {
        return false;
    }
}

int intPrint(int n){
    int i;
    for (i = 0; i <= n; i++)
    {
        cout << i << endl;
    }
    return i;
}

int faktorial(){
    int e;
    cout << "Enter number" << endl;
    cin >> e;
    int sum = (e-2)*(e-1)*e;
    return sum;
}

int separateSum(int x, char y){
    int odd; // не парні числа
    int even; // парні числа
    return 0;

}

/*
    
    2.1* Write a function that calculate separate sum of odd or even numbers in sequence from range 1 to N. 
    This function must take as an argument a number of elements in sequence – N, and 
    also char symbol ‘e’ of ‘o’: ‘e’ for even numbers, and ‘o’ for odd numbers.

        Say, I want to calculate a sum of odd numbers in range of 1 to 5. 
        Then, I should call this function like:

            int result = calculateSumEven_Odd(5, 'o');

        The result would be a sum of all odd numbers in range of 1 to 5: 1, 2, 3, 4, 5. 
        So, the returned result would be 1 + 3 + 5 = 9.

    */ 
  int intSum(int e) {
  int sum = 0;
  int x = 0;

  for (e = 0; x <= e; x++) {
    sum += x;
  }
  return sum;
}
