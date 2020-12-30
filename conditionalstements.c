#include <stdio.h>
int main()
{   int marks;
    printf("Enter Marks: ");
    scanf("%d",&marks);
    printf("Enter Marks: "); 
    scanf("%d",&marks); //Input of Marks from User
    printf("\n");
 // The conditions to be checked
    if (marks<=100 && marks>=85)
        {printf("Grade A");}
    else if (marks<=84 && marks>=70)
