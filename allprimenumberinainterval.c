#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a;
    scanf("%d", &a); // 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29
    for (int i = 2; i <= a; i++)
    {
        int count = 0;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                if (count == 2)
                {
                    break;
                }
                count += 1;
            }
        }
        if (count < 2)
        {
            printf("%d ", i);
        }
    }
}