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
int findingnemoint(int x, vector<int> y)
{
     for (int i = 0; i < y.size(); i++)
    {
        if (x == y[i])
        {
            return i;
        }
    }
}
int findingnemodeposit(float x, vector<float> y)
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
int searchingfromdate(vector<int> day)
{
    int searching;
    cout << "input day of deposit: ";
    cin >> searching;
    return findingnemoint(searching, day);

}
int searchingfromdeposit(vector<float> deposit)
{
    float searching;
    cout<<"Input amount of deposit: ";
    cin >> searching;
    return findingnemodeposit(searching,deposit);
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
        if (rec.month == 00 and rec.day == 00 and rec.year == 0000)
        {
            break;
        }
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
    int choice;
    cout << "Do you want to find something";

    cout << "Find from inf ?  [1]"
         << "\n";

    cout << "Find from date ? [2]"
         << "\n";

    cout << "Find from deposit ? [3]"
         << "\n";

    cout << "INPUT : ";
    cin >> choice;

    cin.ignore();

    if (choice = 1)
    {
        tariff = searchingfrominf(information.recinfor);
        cout << information.m[tariff] << "/" << information.d[tariff] << "/" << information.y[tariff] << " : " << information.recinfor[tariff] << " "
             << information.depo[tariff] << " Bath";
    }

   else  if (choice = 2)
    {
        tariff=searchingfromdate(information.d);
        cout << information.m[tariff] << "/" << information.d[tariff] << "/" << information.y[tariff] << " : " << information.recinfor[tariff] << " "
             << information.depo[tariff] << " Bath";
        
    }
    else if (choice = 3)
    {
        tariff=searchingfromdeposit(information.depo);
        cout << information.m[tariff] << "/" << information.d[tariff] << "/" << information.y[tariff] << " : " << information.recinfor[tariff] << " "
             << information.depo[tariff] << " Bath";

    }
    return 0;
}
