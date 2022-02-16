#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char op;
    char exitKey;
    bool exits = false;

    while (!exits)
    {
        cout << "ENTER OPERATION: ";
        cin >> num1;
        cin >> op;
        cin >> num2;

        if (op == '+')
        {
            cout << "ANSWER: \n";
            cout << num1 + num2 << endl;
        }
        else if (op == '-')
        {
            cout << "ANSWER: \n";
            cout << num1 - num2 << endl;
        }
        else if (op == '*')
        {
            cout << "ANSWER: \n";
            cout << num1 * num2 << endl;
        }
        else if (op == '/')
        {
            cout << "ANSWER: \n";
            cout << num1 / num2 << endl;
        }
        else
        {
            cout << "INVALID OPERATOR!\n";
        }


        cout << "WOULD YOU LIKE TO EXIT??\n";
        cout << "F TO EXIT; ANY KEY TO CONTINUE!!\n";
        cout << "-- ";
        cin >> exitKey;
        if (exitKey == 'F' || exitKey == 'f')
        {
            exits = true;
        }
        else if(exitKey == 'D' || exitKey == 'd')
        {
            exits = false;
        }
    }

    return 0;
}