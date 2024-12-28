#include <iostream>
using namespace std;
// left shift : basically multiplies the number by 2.
// right shift : basically divides the number by 2.

int main()
{

    // right shift
    cout << (17 >> 1) << endl; // 8
    cout << (17 >> 2) << endl; // 4

    // left shift
    cout << (19 << 1) << endl; // 38
    cout << (21 << 2) << endl; // 21*2 = 42 , 42*2 = 84
    return 0;

    // but in the case of large numbers, the left shift will not work as expected.
}
