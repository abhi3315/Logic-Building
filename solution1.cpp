#include <iostream>
using namespace std;

// Function to find GCD with basic or iterative logic
int gcdBasic(int a, int b)
{
    // Storing the maximum of a and b into max
    int max = a > b ? a : b;
    int gcd = 1;
    for (int i = 2; i <= max; i++)
        if (a % i == 0 && b % i == 0)
            gcd = i;

    return gcd;
}

// Function to find GCD efficiently using Euclidean algorithm
int gcdEfficient(int a, int b)
{
    return b == 0 ? a : gcdEfficient(b, a % b);
}

int main()
{
    int testCases, a, b, gcd = 0;
    unsigned long lcm = 0;
    cin >> testCases;
    while (testCases--)
    {
        cin >> a >> b;
        gcd = gcdEfficient(a, b);
        lcm = ((long)a * b) / gcd;
        cout << lcm << " " << gcd << endl;
    }

    return 0;
}