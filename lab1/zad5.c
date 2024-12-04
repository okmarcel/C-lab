#include <stdio.h>

int main()
{
    float cel = -50.0, far;
    printf("Celsjusz         Fahrenheit\n");
    while (cel < 50.0)
    {
        far = (cel*9.0/5.0)+32;
        printf("cel=%+6.2f       far=%+5.2f\n", cel, far);
        cel += 8.0;
    }
    
    return 0;
}