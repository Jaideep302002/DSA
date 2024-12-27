#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        cout << "*"; // first star

        for (int j = 1; j <= n - 1; j++)
        {
            if (i == 1 || i == n) // first and last row
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << "*" << endl; // last star
        ;
    }

    return 0;
}