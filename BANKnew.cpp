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

/* string upperwords(string x)
{
    string y;
    for (int i = 0; i < x.size(); i++)
        {
            x[i] = toupper(x[i]);
            y[i]=x[i];
        }
        return y;
}
 */
int findingnemo(string x, vector<string> y)
{

    for (int i = 0; i < y.size(); i++)
    {
        if (x == y[i])
        {
            return i;
        }
    }
}
int searchingfrominf(vector<string> inf)
{
    string searching;
    cout << "Input information of deposit: ";
    getline(cin, searching);
    for (int i = 0; i < searching.size(); i++)
    {
        searching[i] = toupper(searching[i]);
    }
    return findingnemo(searching, inf);
}

int main()
{
    int tariff;
    int dom;
    Date rec;
    Bank information;
    Bank searching;

    while (information.inf != "STOP")
    {
        cout << "Date of Record mm dd yyyy: ";
        cin >> rec.month >> rec.day >> rec.year;
        cin.ignore();
        cout << "\n"
             << "information : ";
        getline(cin, information.inf);

        for (int i = 0; i < information.inf.size(); i++)
        {
            information.inf[i] = toupper(information.inf[i]);
        }
        if (information.inf == "STOP")
        {
            break;
        }
        cout
            << "Amount of deposit (Bath): ";
        cin >> information.deposit;
        cin.ignore();
        cout << "\n";
        information.recinfor.push_back(information.inf);
        information.m.push_back(rec.month);
        information.d.push_back(rec.day);
        information.y.push_back(rec.year);
        information.depo.push_back(information.deposit);
    }

    cout << "Find from inf ?"
         << "\n";
    tariff = searchingfrominf(information.recinfor);
    cout << information.m[tariff] << "/" << information.d[tariff] << "/" << information.y[tariff] << " : " << information.recinfor[tariff] << " "
         << information.depo[tariff]<<"Bath";
    return 0;
}
