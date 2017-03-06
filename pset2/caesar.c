#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
int main(int argc, string argv[])
{
    if (argc!=2)
    {
        printf("Error\n");
        return 1;
    }
string key = argv[1];
int result;
string p = GetString();
//int k = atoi(argv[1]);
for (int i = 0, n = strlen(p); i < n; i++)
{
    if (isupper(p[i])) 
    result = (p[i]-65+key)%26+65;
    else if (islower(p[i]))
    result = (p[i]-97+key)%26+97;
    else result=p[i];
    printf("%c", result);
}
printf("\n");
}
