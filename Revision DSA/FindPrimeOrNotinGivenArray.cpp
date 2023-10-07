#include <iostream>
#include<math.h>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        // Numbers less than or equal to 1 are not prime.
        return false;
    }
    // Check for divisibility from 2 to the square root of the number.
    int sqrtNum = sqrt(num);
    for (int i = 2; i <= sqrtNum; ++i)
    {
        if (num % i == 0)
        {
            // If num is divisible by i, it's not prime.
            return false;
        }
    }

    // If no divisors were found, the number is prime.
    return true;
}
//given number n is prime or not L1Q2
int main()
{
    int number = 12322;

    cout << "The Given number is - " << isPrime(number);

    return 0;
}