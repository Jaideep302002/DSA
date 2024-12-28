#include <iostream>
using namespace std;
class Soltuion
{
public:
    int subtractProductAndSum(int n)
    {

        int prod = 1;
        int sum = 0;

        while (n != 0)
        {
            int digit = n % 10;
            prod = prod * digit;
            sum = sum + digit;

            n = n / 10;
        }

        int ans = prod - sum;
        return ans;
    }
};

int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;

    Soltuion obj;
    cout << obj.subtractProductAndSum(n) << endl;
}
