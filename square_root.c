#include <stdio.h>
#include <math.h>

int main()
{
    int t, s, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        s = sqrt(n);
        printf("%d\n", s);
    }

    return 0;
}
