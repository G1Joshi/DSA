#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

void sieve(int n)
{
    if (n <= 1)
        return;
    bool isPrime[n + 1];
    fill(isPrime, isPrime + n + 1, true);
    for (int i = 2; i * i <= n; i++)
        if (isPrime[i])
            for (int j = 2 * i; j <= n; j = j + i)
                isPrime[j] = false;
    for (int i = 2; i <= n; i++)
        if (isPrime[i])
            cout << i << " ";
}

int main()
{
    int n = 100;
    sieve(n);
    return 0;
}
