/* ====================================================
    -|Program : simple Calculator Commission Percentage.
    -|Date : 18/11/2023.
    -|Dev: Reda Essa.
    -|language : c++.
=======================================================*/

#include <iostream>
using namespace std;

int main()
{
    // step 1: Declare Variables you needed.
    int totalSales = 0, commission = 0;
    float percentage = 0;
    // step 2: ask User Enter TotalSales.
    cout << "TotalSales: ";
    cin >> totalSales;
    // step 3: assign percentage based on totalSales.
    if (totalSales >= 1000000)
    { // percentage 1%
        percentage = 0.01;
    }
    else if (totalSales >= 500000)
    { // percentage 2%
        percentage = 0.02;
    }
    else if (totalSales >= 100000)
    { // percentage 3%
        percentage = 0.03;
    }
    else if (totalSales >= 50000)
    { // percentage 5%
        percentage = 0.05;
    }
    else
    { // percentage 0%
        percentage = 0;
    }
    // step 4: calculator commission.
    commission = totalSales * percentage;
    // step 5: print commission.
    cout << "Your Commission Is: " << commission << endl;
    return 0;
}