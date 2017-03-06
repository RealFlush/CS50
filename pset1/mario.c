#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int height=0;
do
{
printf("Height of the pyramide?\n");
height = GetInt();
}
while (height<0||height>23);

if (height>=0&&height<=23)
{
for (int i=0;i<height;i++)
{
    for (int j=0;j<height-i-1;j++)
    {
        printf("%s"," ");
    }
    for (int k=0;k<i+2;k++)
    {
        printf("%s","#");

    }
            printf("\n");
    }
}

}
