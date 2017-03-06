#include <stdio.h>
#include <string.h>
#include <cs50.h>
int main(void)
{
    printf("What is Your name^\n");
    string s = GetString();
    printf("Hello, %s\n",s);
}
