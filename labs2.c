#include <stdio.h>
typedef struct
{
    long int num;
    char str[3];
} NumberRepr;
void format(NumberRepr* number)
{
    sprintf(number->str, "%3ld", number->num);
}
int main()
{
    NumberRepr number = { .num = 1025 };
    format(&number);
    printf("str: %s\n", number.str);
    printf("num: %ld\n", number.num);
    return 0;
}
