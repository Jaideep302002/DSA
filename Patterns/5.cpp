#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    char ch = 'A';
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }

        cout << endl;
    }
}