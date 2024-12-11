#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// zamiana U1 do dziesietnego
int binToDec(char* bin, int length)
{
    int dec = 0;

    if (!(bin[0] == '1'))
    {
        for (int i = 0; i < length; i++)
        {
            dec = dec*2;
            dec += (bin[i] - '0');
        }
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            dec = dec*2;
            dec += (int)(!(bin[i] - '0'));
        }
        dec = -dec;
    }

    return dec;
}

// generator liczby binarnej
void binGen(char* num, int length)
{
    for (int i = 0; i < length; i++)
    {
        float los = (float)rand()/RAND_MAX;

        if (los > 0.5) num[i] = '1';
        else num[i] = '0';
    }
    num[length] = '\0';
}

int main()
{
    time_t czas;
    srand((unsigned int)time(&czas));

    int n;

    printf("Długość liczb w bitach : ");
    scanf("%d", &n);

    char num1[n+1], num2[n+1];
    binGen(num1, n);
    binGen(num2, n);

    printf("  %s\n+ %s\n ", num1, num2);
    for (int i = 0; i < n+1; i++)
    {
        printf("-");
    }
    printf("\n");

    char binSum[n+1];
    int carry = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        int bit1 = num1[i] - '0';
        int bit2 = num2[i] - '0';

        int sum = bit1 + bit2 + carry;
        binSum[i] = (sum % 2) + '0';
        carry = sum / 2;
    }
    binSum[n] = '\0';

    printf("  %s", binSum);
    if (carry) printf(" z przepelnieniem.");
    printf("\n\n");

    int dec1 = binToDec(num1, n);
    int dec2 = binToDec(num2, n);
    long int decSum = dec1 + dec2;

    printf("Dziesietnie: %d + %d = %ld\n", dec1, dec2, decSum);

    return 0;
}