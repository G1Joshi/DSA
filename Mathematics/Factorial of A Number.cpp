#include <iostream>
using namespace std;

int fact(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
        ans = ans * i;
    return ans;
}

int main()
{
    int number = 5;
    cout << fact(number);
    return 0;
}
