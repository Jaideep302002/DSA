
#include <iostream>
using namespace std;

int main()
{
    // outer loop for number of rows.
    for (int i = 1; i <= 4; i++)
    {
        // inner loop for number of columns
        for (int j = 1; j <= 4; j++)
        {
            // work
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}