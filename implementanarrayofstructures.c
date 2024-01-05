//title of program
//program to implement an array of structures for student marks for each student and pass it to function for various operations
//header file
#include<stdio.h>
//main function heading
int main()
{
//structure declaration (keyword used here--->'struct'and structure name here;--->'student')
struct student
{
//variable declaration
int m1,m2,m3;
//variable declaration for total calculation
int tot;
//variable declaration for average calculation
float avg;
//character declaration(array of declaration)
char r;
//structure defintion ends here
};
//variable declaration
int n;
//input statememt from user with using dot operator
printf("Enter no. of students:");
scanf("%d",&n);
//stucture variable declaration
struct student s[n];
//input statement from user
printf("Enter the student marks:");
//for loop statement
for(int i=0;i<n;i++)
{
//statement for getting the values
scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
// statememt for accessing the values for calculating total
s[i].tot=s[i].m1+s[i].m2+s[i].m3;
// (getting float no.)statement for getting avg value
s[i].avg=(float)s[i].tot/3.0;
//if else statement
if(s[i].avg>50)
//assignment of value (if part)
s[i].r='P';
else
//assignment of value (else part)
s[i].r='F';
}
//for loop statement
for(int i=0;i<n;i++)
{
//output statememt
printf("Student marklist\n");
//input statements for giving the marks of 3 subjects
printf("Subject 1:%d\n",s[i].m1);
printf("Subject 2:%d\n",s[i].m2);
printf("Subject 3:%d\n",s[i].m3);
//output statements for printing the total marks and average of the marks and result
printf("Total:%d\n",s[i].tot);
printf("Average:%f\n",s[i].avg);
printf("Result:%c\n",s[i].r);
}
//return statement
return 0;
}