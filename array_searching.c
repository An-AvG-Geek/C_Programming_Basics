// program to search a given character in an array



#include <stdio.h>
int main()
{
    printf("Enter the limit of the array\n");
    int len;
    scanf("%d", &len);
    char arr[len];

    printf("Enter the character\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%s", &arr[i]);
    }

    printf("Enter the charater you want to search \n");
    char search;
    scanf("%s", &search);
    int key = 0;

    for (int i = 0; i < len; i++)
    {
        if (search == arr[i])
        {
            key = 1;
            printf("found \n");
            break;
        }
    }
    if (key == 0)
    {
        printf("the charater you serched is not found in array \n");
    }
    

    return 0;
}