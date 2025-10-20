#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
gcc -o 0-positive_or_negative.c

int main(void)
{ int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0) {
printf("%d is positive\n", number);
} else if (n < 0) {
printf("%d is negative\n", number);
} else {
printf("is zero\n");
}
return (0);
}
