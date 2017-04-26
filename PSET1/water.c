#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompt # of minutes from user
    printf("minutes: ");
    int minute = get_int();
    printf("bottles: %i\n", minute * 12);
}
