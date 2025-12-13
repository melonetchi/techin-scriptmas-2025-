#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int N;

    cin >> N;

    int s;


    for (int a = 1; a <= N + 2; a++) cout << "#";
    cout << endl;
    for (int i = 1; i <= N; i++)
    {
        cout << "#";
        for (int j = 1; j <= N; j++)
        {
            s = j + i;
            if (s % 15 == 0) cout << "G";
             else if (s % 5 == 0) cout << "S";
              else if (s % 3 == 0) cout << "T";
                else cout << ".";

        }

        cout << "#" << endl;
    }
    for (int a = 1; a <= N + 2; a++) cout << "#";

    return 0;
}
