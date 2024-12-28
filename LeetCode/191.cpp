#include <iostream>
using namespace std;

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {

        int count = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                count++;
            }

            n = n >> 1;
        }
        return count;
    }
};

int main()
{
    uint32_t n;
    cout << "Enter the number:" << endl;
    cin >> n;

    Solution obj;
    obj.hammingWeight(n);
}