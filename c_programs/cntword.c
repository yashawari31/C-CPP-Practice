#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];
    int letters = 0, words = 0, i,lines=0;

    fp = fopen("file1.txt", "r");

    if (fp == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }

    while (fgets(str, sizeof(str), fp) != NULL)
    {
        for (i = 0; str[i] != '\0'; i++)
        {
            if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
                letters++;

            if (str[i] == ' ' || str[i] == '\n')
                words++;

            if(str[i]=='\n')
                lines++;
        }
    }

    printf("Letters = %d\n", letters);
    printf("Words = %d\n", words + 1);
    printf("lines=%d\n",lines);

    fclose(fp);

    return 0;
}