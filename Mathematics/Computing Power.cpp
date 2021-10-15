#include <iostream>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
        return 1;
    int ans = power(x, n / 2);
    ans = ans * ans;
    if (n % 2 == 0)
        return ans;
    else
        return ans * x;
}

int main()
{
    int x = 3, n = 5;
    cout << power(x, n);
    return 0;
}
