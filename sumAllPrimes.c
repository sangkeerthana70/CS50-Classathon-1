#include <stdio.h>
//#include <math.h>
#include<cs50.h>

bool isPrime(int);
int sumPrimes(int);
int main(void)
{
    int input = get_int("Enter number: ");
    printf("%i\n", input);
    printf("Total is: %i\n", sumPrimes(input));
    if(isPrime(input))
    {
        printf("%i is prime\n", input);
    }
    else
    {
        printf("%i is NOT prime\n", input);
    }
}

bool isPrime(int num)
{
    for (int i = 2, max = num / 2; i <= max; i++)//<= triggers one more division process so <= is efficient.
    {
        if(!(num % i))//since 0 is false we are evaluating against the opposite of num % i == 0.
        {
            return false;
        }
    }
    return true;
}

int sumPrimes(int number)
{
    int sum = 0;
    //start initializing i from 2
    for (int i = 2; i <= number; i++)
    {
        if(isPrime(i))
        {
            printf("i: %i\n", i);
            sum += i;
        }
    }
    return sum;
}



