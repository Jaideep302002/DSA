#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool isPrime = true;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "The  number is prime";
    }
    else
    {
        cout << "The number is not prime";
    }

    return 0;
}