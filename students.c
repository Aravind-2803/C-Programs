#include <stdio.h>
#include <string.h>

typedef struct Student {
    int roll;
    char name[50];
    int age;
    char gender;
    int mark1;
    int mark2;
    int mark3;
    char grade[2];
} Student;

void dispOne(Student *arr, int n)
{
    int roll;
    printf("Enter Roll No: ");
    scanf("%d", &roll);
    for (int i = 0; i < n; i++)
        if (arr[i].roll == roll)
            printf("%d %s %d %c %d %d %d %s\n",arr[i].roll, arr[i].name, arr[i].age, arr[i].gender, arr[i].mark1, arr[i].mark2, arr[i].mark3, arr[i].grade);
}

void dispAll(Student *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d %s %d %c %d %d %d %s\n",arr[i].roll, arr[i].name, arr[i].age, arr[i].gender, arr[i].mark1, arr[i].mark2, arr[i].mark3, arr[i].grade);
}

void dispFail(Student *arr, int n)
{
    for (int i = 0; i < n; ++i)
        if (strncmp(arr[i].grade, "F", 2) == 0)
            printf("%d %s %d %c %d %d %d %s\n",arr[i].roll, arr[i].name, arr[i].age, arr[i].gender, arr[i].mark1, arr[i].mark2, arr[i].mark3, arr[i].grade);
}

void dispPass(Student *arr, int n)
{
    for (int i = 0; i < n; i++)
        if (strncmp(arr[i].grade, "P", 2) != 0)
            printf("%d %s %d %c %d %d %d %s\n",arr[i].roll, arr[i].name, arr[i].age, arr[i].gender, arr[i].mark1, arr[i].mark2, arr[i].mark3, arr[i].grade);
}

void insert(Student *arr, int *n)
{
    if (*n == 99)
        return;

    Student student;
    printf("Roll No: ");
    scanf("%d", &student.roll);
    getchar();
    printf("Name: ");
    fgets(student.name, 50, stdin);
    student.name[strcspn(student.name, "\n")] = '\0';
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Age: ");
    scanf("%d", &student.age);
    getchar();
    printf("Gender (M/F): ");
    student.gender = getchar();
    printf("Mark1 (0-100): ");
    scanf("%d", &student.mark1);
    printf("Mark2 (0-100): ");
    scanf("%d", &student.mark2);
    printf("Mark3 (0-100): ");
    scanf("%d", &student.mark3);

    if (student.gender != 'M' && student.gender != 'F')
        return;

    if ((student.mark1 > 100 || student.mark1 < 0) && (student.mark2 > 100 || student.mark2 < 0) && (student.mark3 > 100 || student.mark3 < 0))
        return;

    if (student.mark1 < 50 || student.mark2 < 50 || student.mark3 < 50)
        strcpy(student.grade, "F");
    else
    {
        float avg = (student.mark1 + student.mark2 + student.mark3) / 3.f;
        if (avg >= 50 && avg < 50)
            strcpy(student.grade, "F");
        else if (avg >= 50 && avg < 60)
            strcpy(student.grade, "B");
        else if (avg >= 60 && avg < 70)
            strcpy(student.grade, "B+");
        else if (avg >= 70 && avg < 80)
            strcpy(student.grade, "A");
        else if (avg >= 80 && avg < 90)
            strcpy(student.grade, "A+");
        else if (avg >= 90 && avg < 100 )
            strcpy(student.grade, "O");
        else
            printf("Invalid Mark");

    }


    for (int i = *n; i >= 0; i--) {
        if (i == 0)
            arr[i] = student;
        else {
            if (arr[i - 1].roll > student.roll)
                arr[i] = arr[i - 1];
            else {
                arr[i] = student;
                break;
            }
        }
    }
    (*n)++;
    dispAll(arr, *n);
}

void delete(Student *arr, int *n)
{
    if (*n == 0)
        return;

    int Roll, found, pos;
    found = 0;
    printf("Roll No: ");
    scanf("%d", &Roll);
    for (int i = 0; i < *n; i++)
        if (arr[i].roll == Roll)
            pos = i;
    found = 1;

    if (found)
        for (int i = pos; i < *n; i++)
            arr[i] = arr[i+1];
    else
        printf("Student Not Found!");
    (*n)--;
    dispAll(arr, *n);
}

int main()
{
    Student students[100] = {};
    int n, roll, choice;
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    Student students[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter age: ");
        scanf("%d", &students[i].age);
        printf("Enter gender (M/F): ");
        scanf(" %c", &students[i].gender);
        printf("Enter mark 1: ");
        scanf("%d", &students[i].mark1);
        printf("Enter mark 2: ");
        scanf("%d", &students[i].mark2);
        printf("Enter mark 3: ");
        scanf("%d", &students[i].mark3);
        printf("Enter grade (A/B/C): ");
        scanf("%s", students[i].grade);
    }
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Gender: %c\n", students[i].gender);
        printf("Mark 1: %d\n", students[i].mark1);
        printf("Mark 2: %d\n", students[i].mark2);
        printf("Mark 3: %d\n", students[i].mark3);
        printf("Grade: %s\n\n", students[i].grade);
    }
    n = 0;
    choice = 0;
    while (1)
    {
        printf("--------------------\n");
        printf("1.Display\n2.Insert\n3.Delete\n4.Exit\nEnter Your Choice: ");
        scanf("%i", &choice);

        switch (choice) {
        case 1:
            printf("------------\n");
            printf("1.All\n2.One\nEnter Your Choice: ");
            scanf("%d", &choice);

            switch (choice) {
            case 1:
                printf("1.All\n2.Passed\n3.Failed\nEnter Your Choice: ");
                scanf("%d", &choice);

                switch (choice)
                {
                case 1:
                    dispAll(students, n);
                    break;
                case 2:
                    dispPass(students, n);
                    break;
                case 3:
                    dispFail(students, n);
                    break;
                default:
                    printf("Invalid Choice\n");
                }
                break;

            case 2:
                dispOne(students, n);
                break;

            default:
                printf("Invalid Choice\n");
            }
            break;

        case 2:
            insert(students, &n);
            break;

        case 3:
            delete(students, &n);
            break;

        case 4:
            printf("THANK YOU...\n");
            return 0;

        default:
            printf("Invalid Input\n");
        }
    }
    return 0;
}

    