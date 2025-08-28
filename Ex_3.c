#include <stdio.h>

//Condensed the program by initializing the variables for calculation and removing the weight variable.

int main(void)
{
    int height = 8, lenght = 12, width = 10, volume;

    printf("Height of: %d | Weight of: %d | Width of: %d\n", height, lenght, width);

    volume = height * lenght * width;
    (volume + 165) / 166;
    
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional wieght (pounds): %d\n", (volume + 165) / 166);
}