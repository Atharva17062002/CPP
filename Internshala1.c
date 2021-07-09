#include <stdio.h>
int main(){
    char name[100],section[2],grade[1];
    int standard,hindi,english,maths,science,social,total;
    printf("Student Name: ");
    scanf("%s",name);
    while ((getchar()) != '\n');
    printf("Standard(class): ");
    scanf("%d",&standard);
    while ((getchar()) != '\n');
    printf("Section: ");
    scanf("%s",section);
    while ((getchar()) != '\n');
    printf("Markes secured in\n");
    printf("\tMathematics: ");
    scanf("%d",&maths);
    while ((getchar()) != '\n');
    printf("\tEnglish: ");
    scanf("%d",&english);
    while ((getchar()) != '\n');
    printf("\tHindi: ");
    scanf("%d",&hindi);
    while ((getchar()) != '\n');
    printf("\tScience: ");
    scanf("%d",&science);
    while ((getchar()) != '\n');
    printf("\tSocial Science: ");
    scanf("%d",&social);

    total=hindi+maths+english+social+science;

    printf("Jawahar Navodaya Vidyalaya\n");
    printf("\tAnnual Report Card");
    printf("\nName: %s\n",name);
    printf("Standard: %d\n",standard);
    printf("Section: %s\n",section);
    printf("\nMarks Secured out of 100\n");
    printf("Mathematics: %d\n",maths);
    printf("English: %d\n",english);
    printf("Hindi: %d\n",hindi);
    printf("Science: %d\n",science);
    printf("Social Science: %d\n",social);
    printf("\nTotal marks secured: %d\n",total);
    
    if(450<=total<=500){
    printf("Grade: A\n");}
    else if(400<=total<=449){
    printf("Grade: B\n");}
    else if(350<=total<=399){
    printf("Grade: C\n");}
    else if(300<=total<=349){
    printf("Grade: D\n");}
    else if(200<=total<=299){
    printf("Grade: E\n");}
    else{
    printf("Grade: F\n");}
    return 0;
}