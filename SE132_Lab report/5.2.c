/*
5.2 Write down a C program to Sort all the data in Descending Order
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], c, temp;
    int left, right, middle;
    printf("\nenter a string:");
    gets(str);
    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] < str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c ", str[i]);
    }
    printf("\n");
}
