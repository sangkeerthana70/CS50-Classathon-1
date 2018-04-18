#include <stdio.h>
#include <math.h>
#include<cs50.h>

long long factorialize(int inNum);
int sumPrimes(int num);

int main(int argc, string argv[])
{

    if (argc != 2) {
        printf("Please supply one parameter!\n");
        return 1;
    }
    int inNum = atoi(argv[1]);
    printf("Value of Key : %i\n", inNum);

    int sum = factorialize(inNum);
    printf("Sum is: %i\n", sum);

}

long long factorialize(int inNum) {
	int sum = 1;
	for (int i=1; i <= inNum; i++) {
		sum  = sum * i;
	}
	return sum;
}

int sumPrimes(num) {
 int total = 0;
 for(int n = 2; n <= num; n++){
   printf("iteration: %i\n", n);
   if(isPrime(n)){
     printf("is prime%c\n", n);
     total = total + n;
     continue;
   }
   eprintf("looping");
 }
 return total;
}
