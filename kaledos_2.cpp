#include <iostream>

using namespace std;

int main ()
{
    int x, y;
    int m, s;

    cin >> x >> y;

    m = x * 60 + y;
    s = m * 60;

    cout << m << " " << s;

    return 0;
}
