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
    int month,day,year;
};

struct Bank
{
    float deposit;
};

int main()
{
    Date rec;
 cout << "Date of Record mm dd yyyy";
 cin >> rec.month>>rec.day>>rec.year;

}

