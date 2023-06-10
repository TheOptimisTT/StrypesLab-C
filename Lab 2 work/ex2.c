#include <stdio.h>

int main()
{
    int A;
    int B;

    printf("Enter the value of A: ");
    scanf("%d",&A);

    printf("Enter the value of B: ");
    scanf("%d",&B);

    if (A%B==0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    
    return 0;
}