#include <stdio.h>
int main() {
 char stuName[20] = "Mat b Mamat";
 char stuGrade = 'A';
 short stuAge = 21;//16bits
 int totStudent = 1200;//32bits
 float stuWeight = 55.6;
 double feePaid = 5461.75;
 int stuStatus = 0;
 //no boolean in c

 printf ("Name : %s\n", stuName);//string
 printf ("Grade : %c\n", stuGrade);//char
 printf ("Age : %d\n", stuAge);//decimal
 printf ("Total Student: %d\n", totStudent);
 printf ("Weight (kg) : %f\n", stuWeight);//float or double
 printf ("Fee Paid : %f\n", feePaid);
 printf ("FullTime : %d\n", stuStatus);//int or decimal
 printf ("\n");
 return 0;
}
