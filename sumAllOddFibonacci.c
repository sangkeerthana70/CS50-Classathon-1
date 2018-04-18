#include <stdio.h>
#include <math.h>
#include<cs50.h>

int sumFibs(int num);

int main(int argc, string argv[])
{
    if (argc != 2) {
        printf("Please supply one parameter!\n");
        return 1;
    }
    int inNum = atoi(argv[1]);
    printf("Value of Key : %i\n", inNum);

    int result = sumFibs(inNum);
    printf("Sum of odd numbers in this fibonacci series is: %i\n", result);

}

int sumFibs(int inNum) {
    int prevNum = 0;
    int currNum = 1;
    int result = 0;

    while (currNum <= inNum) {
        if (!(currNum % 2== 0)) {
            result += currNum;
        }

        currNum += prevNum;
        prevNum = currNum - prevNum;
    }
    return result;
}