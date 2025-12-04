#include <iostream>

using namespace std;

int main ()
{
    int x, y;
    int m, s;

    cin >> x >> y;

    m = x * 60 + y;
    s = m * 60;

    cout << "Minutes passed: m = " m << endl 
         << "Seconds passed: s = " s;

    return 0;
}

