#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    char str[100];

    f1 = fopen("file1.txt", "r");

    if (f1 == NULL)
    {
        printf("Cannot open file1\n");
        return 1;
    }

    f2 = fopen("file2.txt", "w");

    if (f2 == NULL)
    {
        printf("Cannot create file2\n");
        fclose(f1);
        return 1;
    }

    while (fgets(str, sizeof(str), f1) != NULL)
    {
        fprintf(f2, "%s", str);
    }

    printf("File copied successfully\n");

    fclose(f1);
    fclose(f2);

    return 0;
}