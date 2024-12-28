// i++ post increment -> use krla phle value baad mai increase krega.
// ++i pre increment -> phla increment karo and then use karo.
// same for decrement.
// i-- post decrement , --i pre decrement

#include <iostream>
using namespace std;
int main()
{
    int i = 7;
    cout << (++i) << endl; // 8
    cout << (i++) << endl; // 8 , after execution it become 9
    cout << (i--) << endl; // 9 , after execution it becomes 8
    cout << (--i) << endl; // 7
    return 0;
}