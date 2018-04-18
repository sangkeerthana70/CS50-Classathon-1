#include <stdio.h>
#include <math.h>
#include<cs50.h>

long long factorialize(int inNum);


int main(int argc, string argv[])
{

    if (argc != 2) {
        printf("Please supply one parameter!\n");
        return 1;
    }
    int inNum = atoi(argv[1]);
    printf("Value of Key : %i\n", inNum);

    signed int sum = factorialize(inNum);
    printf("Sum is: %i\n", sum);

}

long long factorialize(int inNum) {
	signed int sum = 1;
	for (int i=1; i <= inNum; i++) {
		sum  = sum * i;
	}
	return sum;
}

