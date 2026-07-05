#include<stdio.h>
struct student
{
    char std_name[50];
    int rollno;
    float marks;

};

int main(){

    FILE *fp;
    struct student s1;

    printf("Enter student name: ");
    fgets(s1.std_name,sizeof(s1.std_name),stdin);
    printf("Enter student roll number: ");
    scanf("%d",&s1.rollno);
    printf("Enter student marks: ");
    scanf("%f",&s1.marks);
    fp=fopen("student.txt","w");
    if(fp==NULL)
    {
        printf("File cannot be opened\n");
        return 0;
    }
    fprintf(fp,"%s\n %d\n %f\n",s1.std_name,s1.rollno,s1.marks);
    fclose(fp);

    fp=fopen("student.txt","r");
    if(fp==NULL)
    {
        printf("File cannot be opened\n");
        return 1;
    }
    printf("Student details:\n");
    printf("Name\t=%sRoll No\t=%d\nMarks\t=%.2f\n",s1.std_name,s1.rollno,s1.marks);
    fclose(fp);
    return 0;

}