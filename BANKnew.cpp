#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>

using namespace std;

struct Date
{
    int month, day, year;
};

struct Bank
{
    float deposit;
    string inf;
    vector<string> recinfor;
    vector<int> m;
    vector<int> d;
    vector<int> y;
};

int main()
{
    int dom;
    Date rec;
    Bank information;

    cout << "Date of Record mm dd yyyy: ";
    cin >> rec.month >> rec.day >> rec.year;
    if (rec.month = 01, 03, 05, 07, 8, 10, 12)
    {
        dom = 31;
    }
    else if (rec.month = 04, 06, 9, 11)
    {
        dom = 30;
    }
    else
    {
        dom = 28;
    }

    for (int i = 0; i < dom; i++)
    {
        cout << "\n"
             << "information :";
        getline(cin, information.inf);
        information.recinfor.push_back(information.inf);
        information.m.push_back(rec.month);
        information.d.push_back(rec.day);
        information.y.push_back(rec.year);
        cout << "Date of Record mm dd yyyy: ";
        cin >> rec.month >> rec.day >> rec.year;
        cout << information.recinfor[0];
    }
    return 0;
}
