#include<stdio.h>
struct student{
    char name[20];
    int age;
    int marks;

};
void main(){
    int i;
    struct student s[2];
    for (i=0;i<2;i++){
    printf("Enter a student details\n");
    printf("Enter name:");
    scanf("%s",s[i].name);
    printf("Enter age:");
    scanf("%d",&s[i].age);
    printf("Enter marks:");
    scanf("%d",&s[i].marks);

    printf("Display a students information:");
   
        printf("name:%s\n",s[i].name);
        printf("age:%d\n",&s[i].age);
        printf("marks:%d\n",&s[i].marks);
    
}
}