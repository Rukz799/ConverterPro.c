#include<stdio.h>
int main()
{
 int ch;
 double meter,inch;
 printf("\nEnter 1 for convert Meter to Inch.");
 printf("\nEnter 2 for convert Inch to Meter.");
 printf("\nEnter 0 for exit.");
 printf("\n\nEnter your choice : ");
 scanf("%d", &ch);
 switch(ch)
 {
  case 1:
    printf("\nEnter value in Meter: ");
    scanf("%lf", &meter);
    inch = (39.37) * meter;
    printf("\n\t-- Convert Meter to Inch --\n");
    printf("\n%lf meter = %lf Inch",meter,inch);
    break;
  case 2:
    printf("\nEnter value in Inch: ");
    scanf("%lf", &inch);
    meter = (.025) * inch;
    printf("\n\t-- Convert Inch to meter --\n");
    printf("\n%lf Inch = %lf Meter",inch,meter);
    break;
  case 0:
    goto exit;
  default:
    printf("\nYou enter invalid options.");
 }
 exit:
 return 0;
}
