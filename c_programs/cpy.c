#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    // create file
    fp = fopen("file1.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be created\n");
        return 1;
    }

    printf("Enter a line:\n");

    fgets(str, sizeof(str), stdin);
    fprintf(fp, "%s", str);

    fclose(fp);

    printf("Data written successfully\n");

    return 0;
}