#include <iostream>
using namespace std;

int chocolate(int chocolateBARS, int coupons);

int main()
{
    int chocolateBARS = 0, coupons = 0;

    cout << "Enter:";
    cin >> chocolateBARS;

    coupons = chocolateBARS;

    chocolate(chocolateBARS, coupons);
}

int chocolate(int chocolateBARS, int coupons)
{
    if (coupons < 7)
    {
        cout << "the amount of dollars:You can get " << chocolateBARS << " chocolate bars" << endl;
        return chocolateBARS;
    }
    else
    {
        chocolate(chocolateBARS + 1, coupons - 6);
    }
}