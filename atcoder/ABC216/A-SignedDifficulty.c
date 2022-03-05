#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d.%d", &x, &y);
    if (y >= 0 && y <= 2)
        printf("%d-", x);
    else if (y >= 3 && y <= 6)
        printf("%d", x);
    else if (y >= 7 && y <= 9)
        printf("%d+", x);
    return 0;
}