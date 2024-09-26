#include <iostream>
#include<string>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a1 = 3;
    int q1 = 4;
    int c1 = 23;
    int c2 = 22;
    int c3 = 23;
    int c5 = 23;
    int b1 = 2;
    if (c1 == c3) {
        cout << "true" << endl;
    }

    if (a1 == 3) {
        cout << "¬ведите число b1:" << endl;
        cin >> b1;
        cout << "¬ведите число c1:" << endl;
        cin >> c1;
        int s1 = b1 + c1;
        cout << "b1 + c1 = " << s1 << endl;
    }
    if (q1 != 5) {
        int w1, e1;
        cout << "¬ведите число w1:" << endl;
        cin >> w1;
        cout << "¬ведите число e1:" << endl;
        cin >> e1;
        int r1 = w1 + e1;
        cout << "w1 + e1 = " << r1 << endl;
    }
    if (a1 > b1 && c2 > c1) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    if (c5 == c3 || c5 > c3)
    {
        cout << "true" << endl;
    }
    else { cout << "false" << endl; }
    a1 = 60;
    int a2 = 60;
    b1 = 25;
    c1 = a1 && b1;
    c2 = a1 || b1; c3 = a1 - b1; int c4 = a1 + b1; c5 = a1 != b1;
    int i = 0, b = 5;
    int i1 = 1, i2 = 1;
    while (i < 10 || b < 10)
    {
        i++;
        i1++;
        i2++;
        cout << i1 << endl;
        cout << i2 << endl;
        b++;
    }
}