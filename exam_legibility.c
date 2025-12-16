/*
Name: Shem Sammy 
Reg No: PA106/G/28607/25
Description: A program to check if a student is eligible for final exam 
*/

# include <stdio.h>
int main () {

//Variable Declaration 
 float attendance; 
 char average_marks;
 
 // Input of student requirements 
 printf("Enter student attendance ");
 scanf("%f", &attendance);
 
 printf("Enter student average_marks:");
 scanf("%c", &average_marks);
 
 //testing for eligibility   
 if(attendance >75 && average_marks >40)
 {
 printf("Eligible for final exam");
 }
 
 else
 {
 printf("Not Eligible");
 }
 
  return 0;
} 
 
