#include <stdio.h>
#include <stdlib.h>

int main() {
    char myChar;
    int myBinary[]={0,0,0,0,0,0,0,0};
    int myNumber,i;

    printf("Enter symbol: ");
    scanf("%c", &myChar);

    myNumber = myChar;
    printf("The char in Hex = %d\n",myNumber);

    for (i = 7; i >= 0; i--){
        myBinary[i] = myNumber%2;
        myNumber/=2;
        
        if(myNumber == 0)
            break;
    }
    for (int  i = 0; i < 8; i++)
        printf("%d",myBinary[i]);
    printf("\n");
    return 0;
}
