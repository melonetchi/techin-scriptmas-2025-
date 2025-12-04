#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    float price;
    float sum = 0;
    float amount = 0;

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

    cout << fixed << setprecision (2) << sum << " " << amount;

    return 0;
}
