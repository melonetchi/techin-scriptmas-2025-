#include <iostream>

using namespace std;

int main()
{
    int a; //hours
    int b;//minutes
    int c;//minutes that Santa is in the air

    cin >> a >> b;

    cin >> c;

    int minutes = (a * 60) + b;

    int v = (minutes + c) / 60;
    int m = (minutes + c) % 60;
    if (v >= 24) v = v % 24;

    cout << v << " " << m;


    return 0;
}
