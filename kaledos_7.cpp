#include <iostream>

using namespace std;

int main()
{
    int n;//number of rows
    int k; //how many seats in first row

    cin >> n >> k;

    int s = (2 * k + 2 * (n - 1)) / 2 * n;

    cout << s;



    return 0;
}
