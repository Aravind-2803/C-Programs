#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max_student 100
struct Student
{
  char name[50];
  char gender[9];
  int age,id;
  char grade;
  int sub_1,sub_2,sub_3;
};

void  insertion(struct Student *students,int *count )
{
  if(*count>=Max_student)
  {
    printf("Cannot add more students maximum element reached \n");
  }
  
  struct Student *s = &students[*count];
  
  printf("Enter Stud ID : ");
  scanf("%d",&s->id);
  getchar();
  printf("Enter Student Name : ");
  fgets(s->name, sizeof(s->name), stdin);
  printf("Enter Student Gender : ");
  fgets(s->gender, sizeof(s->gender), stdin);
  
  printf("Enter student age: ");
  scanf("%d", &s->age);
  printf("Enter The Mark Of First Subject : ");
  scanf("%d",&s->sub_1);
  printf("Enter The Mark Of Second Subject : ");
  scanf("%d",&s->sub_2);
  printf("Enter The Mark Of Third Subject : ");
  scanf("%d",&s->sub_3);

  (*count)++;  
}

int main() {
    struct Student students[Max_student];
    int studentCount = 0; 

    int choice, id;
    while (1) {
        printf("\n Student Management System\n");
        printf("1. Add Student\n");
        printf("2. Delete Student\n");
        printf("3. View Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertion(students, &studentCount); 
                break;
          
            case 4:
                printf("Thank Youu .....\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
