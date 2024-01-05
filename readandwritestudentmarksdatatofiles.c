#include <stdio.h>
struct Student
{
    char name[50];
    int marks;
};
int main()
{
    FILE *filePointer;
    // Creating a file pointer for writing
    filePointer = fopen("input.txt", "w");
    if (filePointer == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }
    struct Student students[3];
    // Getting student data
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
        // Writing student data to the file
        fprintf(filePointer, "%s %d\n", students[i].name, students[i].marks);
    }
    fclose(filePointer);
    // Reading and displaying student data from file
    filePointer = fopen("input.txt", "r");
    if (filePointer == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }
    printf("\nStudent Data from file:\n");
    while (fscanf(filePointer, "%s %d", students[0].name, &students[0].marks) != EOF)
    {
        printf("Name: %s, Marks: %d\n", students[0].name, students[0].marks);
    }
    fclose(filePointer);
    return 0;
}
