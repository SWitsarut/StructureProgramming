#include <stdio.h>

int findDigit(int remainer[], unsigned long long code)
{
    for (int i = 9; i >= 0; i--)
    {
        remainer[i] = code % 10;
        code /= 10;
    }
}

const char* isValid(int digit[])
{
    int sum = 0;
    char *valid = "valid";
    for (int i = 10, j = 0; i > 0; i--, j++)
        sum += digit[j] * i;
    if (sum % 11 != 0)
        valid = "invalid";
    return valid;
}

int main()
{
    unsigned long long int code;
    int digit[10];
    scanf("%llu", &code);
    code += 10000000000;
    findDigit(digit, code);
    printf("%s", isValid(digit));
}