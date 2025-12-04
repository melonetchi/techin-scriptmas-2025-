#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int length;
    int width;

    float m2price;
    float totalCost;

    cin >> length >> width >> m2price;

    totalCost = length * width * 1.05 * m2price;

    cout << fixed << setprecision (2) << totalCost;

    return 0;
}
