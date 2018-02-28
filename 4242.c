include <stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("All even numbers from 1 to %d are);
    for(i=2; i<=n; i+=2)
    {
        printf("%d\n",i);
    }

    return 0;
}
