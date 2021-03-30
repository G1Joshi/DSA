#include <iostream>
using namespace std;

int countTrailingZeros(int n)
{
    int count = 0;
    for (int i = 5; i <= n; i = i * 5)
        count = count + (n / i);
    return count;
}

int main()
{
    int number = 251;
    cout << countTrailingZeros(number);
    return 0;
}
