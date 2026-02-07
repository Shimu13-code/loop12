#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("How many even numbers? ");
    int sum = 0;
    int count = 0;
    int num = 2;

    while (count < n)
    {
        sum = sum + num;
        num = num + 2;
        count++;
    }
    printf("Sum: %d\n", sum);
}
