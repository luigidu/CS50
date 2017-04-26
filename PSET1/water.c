//  Luigi F. Du
//  luigifloresdu@gmail.com
//
//  EdX Harvard CS50
//
//  Problem Set 1, water
//  Calculates the number of bottles of water filled per minute

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompt # of minutes from user
    printf("minutes: ");
    int minute = get_int();
    printf("bottles: %i\n", minute * 12);
}
