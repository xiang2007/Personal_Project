#include <stdlib.h>

int sum_of_digit(int size,char *digit)
{
    digit = (char *)malloc(size *sizeof(char));
    int i;
    int count;
    count = 0;
    i = 0;
    while (digit[i])
    {
        return (count += digit[i]);
        i++;
    }

}

#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    int s;
    s = strlen(argv[1]);
    pritnf("%d",sum_of_digit(s, argv[1]));

}