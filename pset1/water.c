#include <stdio.h>
#include <cs50.h>
int main(void)
{
int bottles_per_minute = 12;
printf("How many minutes did you spend in the shower?\n");
int mins = GetInt();
printf("You lost %i bottles of water\n", mins*bottles_per_minute);
}
