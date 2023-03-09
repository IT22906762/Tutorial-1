/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>
int main(){
	
	int m1,m2,num,sum;
	float average;
	
	printf("Enter Marks 1 :");
	scanf("%d",&m1);
	
	printf("Enter Marks 2 :");
	scanf("%d",&m2);
	
	sum=m1+m2;
	average=sum/2;
	
	printf("Average marks: %.2f",average );
	
	return 0;
}
#include <stdio.h>
int main() {

  int distance, amount;

  printf("Enter distance :");
  scanf("%d",&distance);

  if (distance >= 30) {
    amount = distance * 30;
  } else {
    amount = 30*distance + (distance- 30) * 40 ;
  }
  printf("Full payment : %.2d",amount);

  return 0;
}
