#include <stdio.h>

//Prints uninitialized floats and ints as a test, to look for a pattern as instructed

int main(void)
{
    int one, two, tree, four;
    float fone, ftwo, ftree, ffour;

    printf("ints: ");
    printf("%d\n", one);
    printf("%d\n", two);
    printf("%d\n", tree);
    printf("%d\n", four);

    printf("\nfloats:");
    printf("%f\n", fone);
    printf("%f\n", ftwo);
    printf("%f\n", ftree);
    printf("%f\n", ffour);
    return 0;
}