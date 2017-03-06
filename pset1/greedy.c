#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    int coins=0;
    float sum=0;
    int quarter = 25;
    int ten = 10;
    int five = 5;
    int one = 1;
  
do
{
printf("How much to pay out?\n");
sum = GetFloat();
}
while (sum<0);
int itog = (int)round((100*sum));

coins = coins+ itog / quarter;
int left = itog%quarter;

coins = coins+ left / ten;
left = left%ten;

coins = coins+ left / five;
left = left%five;

coins = coins+ left / one;
left = left%one;

printf("%d\n", coins);
}
