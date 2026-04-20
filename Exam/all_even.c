#include <stdio.h>
int main()
{
    int i = 1, n = 300;
    while (i <= 300)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}