#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int number; // 4- digit number
    int nnumber;// new 2-digit number

    cin >> number;

    nnumber = number % 10 + number / 1000 * 10;

    cout << nnumber;

    return 0;
}
