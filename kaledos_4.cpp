#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    float price;
    float sum = 0;
    int amount = 0;

    cin >> price;

    while (price != 0)
    {
        if (price > 10)
        {
            sum += price;
            amount ++;
        }

        cin >> price;
    }

    cout << fixed << setprecision (2) << "Total price of magical toys: " << sum << " EUR" << endl
         << "Number of magical toys: " << amount;

    return 0;
}

