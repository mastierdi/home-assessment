#include <iostream>

using namespace std;

char abc[5] = {'a', 'b', 'c', 'd', 'e'};
int fromOneToTen[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
string names[4] = {"", "", "", ""};
string printAllTask[4] = {"first", "second", "third", "fours"};

void fromOneToTenFunc();
void namesFunc();
void printArray();
void fromOneToNFunc();

int main()
{
    fromOneToTenFunc();
    namesFunc();
    printArray();
    fromOneToNFunc();
    return 0;
}

void fromOneToTenFunc()
{
    cout << "TASK 1.2" << endl;
    cout << "_______________" << endl;

    for (int i = 0; i <= 9; i++)
    {
        cout << fromOneToTen[i] << endl;
    }
    cout << "===============" << endl;
}

void namesFunc()
{
    cout << "TASK 1.3" << endl;
    cout << "_______________" << endl;
    for (int i = 0; i <= 4; i++)
    {
        names[i] = "Dmytro";
    }

    for (int i = 0; i <= 3; i++)
    {
        cout << names[i] << endl;
    }
    cout << "===============" << endl;
}

void printArray()
{
    cout << "TASK 1.4" << endl;
    cout << "_______________" << endl;

    for (int i = 0; i <= 9; i++)
    {
        cout << fromOneToTen[i] << endl;
    }

    for (int i = 0; i <= 3; i++)
    {
        cout << names[i] << endl;
    }
    cout << "===============" << endl;
}

void fromOneToNFunc()
{
    int N = 1;
    int fromOneToN[N];
    cout << "Enter int positive number" << endl;
    char choise;

    do
    {
        cin >> N;
        cout << "Try again!" << endl;
    } while (N < 0);

    for (int i = 0; i <= N; i++)
    {
        fromOneToN[i] = i;
    }
    cout << "_______________" << endl;
    for (int i = 1; i <= N; i++)
    {
        cout << fromOneToN[i] << endl;
    }
    cout << "===============" << endl;
    //-----------------------------------------------------------------------------------------------
    cout << "Choose e for even or o for odd" << endl;
    cin >> choise;

    switch (choise)
    {
    case 'e':

        for (int i = 0; i <= N; i++)
        {
            fromOneToN[i] = i;
        }
        cout << "_______________" << endl;
        for (int i = 1; i <= N; i++)
        {
            if (fromOneToN[i] % 2 == 0)
            {
                cout << fromOneToN[i] << endl;
            }
        }
        cout << "===============" << endl;

        break;
    case 'o':

        for (int i = 0; i <= N; i++)
        {
            fromOneToN[i] = i;
        }
        cout << "_______________" << endl;
        for (int i = 1; i <= N; i++)
        {
            if (fromOneToN[i] % 2 == 1)
            {
                cout << fromOneToN[i] << endl;
            }
        }
        cout << "===============" << endl;

        break;

    default:
        break;
    }
    //-----------------------------------------------------------------------------------------------
    for (int i = 0; i <= N; i++)
    {
        if (fromOneToN[i] > 2)
        {
            fromOneToN[i] = 9;
        }
    }
    cout << "_______________" << endl;
    for (int i = 1; i <= N; i++)

        cout << fromOneToN[i] << endl;

    cout << "===============" << endl;
}