#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
int main(int argc, string argv[])
{
    if (argc!=2&&isalpha(argv[1]))
    {
        printf("Error\n");
        return 1;
    }
string k = argv[1];
string text = GetString();

int m = strlen(k);
    
    for (int i = 0, j = 0, result = 0, n = strlen(text); i < n; i++)
    {
        char letter = text[i];
        
        // if the letter proves to be a non-alphabetical character, wait to apply that jth character 
        // of key to the next alphabetical character in text not yet advance to the next character in key
        char key = k[(j) % m]; 
        
        // as for the characters in key, treat A and a as 0, B and b as 1, … , and Z and z as 25    
        if (isupper(key)) 
        {
           key -= 65; 
        }
        else if (islower(key))
        {
           key -= 97;
        }
        if (isupper(letter))
        {
            result = (letter + key - 65) % 26 + 65;
            j++;
        }   
        else if (islower(letter))
        {
           result = (letter  + key - 97) % 26 + 97;
           j++;
        }
        
        // if the character in text is not a letter, output this character unchanged
        else
        {
           result = letter;
        }
           printf("%c", result);
    }   
    printf("\n");      
}
