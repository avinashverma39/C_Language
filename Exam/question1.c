#include <stdio.h>
int main()
{
    int n = 100, i = 500, s = 0;
    while (n <= 500)
    {
        if (n % 2 != 0)
        {
            s = s + n;
        }
        n++;
    }
    printf("value  = %d  ", s);
    return 0;
}