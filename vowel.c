//program to check if entered character is vowel or not



#include <stdio.h>
int main()
{
    char arr[] = {'a', 'e', 'i', 'o', 'u'};
    int i;
    char ch;
    printf("Enter the character you want to check \n");
    scanf("%c", &ch);
    int key = 0;
    for (i = 0; i < 5; i++)
    {

        if (ch == arr[i])
        {
            key = 1;
            break;
        }
    }

    if (key == 1)
    {
        printf("the given character is a vowel\n");
    }

    else
    {
        printf("the given character is consonant \n");
    }
    return 0;
}