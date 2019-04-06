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
    vector<float> depo;
};

int main()
{
    int dom;
    Date rec;
    Bank information;

    while (information.inf != "stop")
    {
        cout << "Date of Record mm dd yyyy: ";
        cin >> rec.month >> rec.day >> rec.year;
        cin.ignore();
        cout << "\n"
             << "information : ";
        getline(cin, information.inf);
        cout << "\n"
             << "Amount of deposit : ";
        cin >> information.deposit;
        cin.ignore();
        cout <<"\n";
        information.recinfor.push_back(information.inf);
        information.m.push_back(rec.month);
        information.d.push_back(rec.day);
        information.y.push_back(rec.year);
        information.depo.push_back(information.deposit);
        
    }
    

    return 0;
}
