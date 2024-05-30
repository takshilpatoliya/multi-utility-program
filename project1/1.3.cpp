#include<stdio.h>

main()
 
 {
 	float first_angle,second_angle,third_angle;
 	
 	printf(" enter the value of first angle=");
 	scanf("%f",&first_angle);
	 
	printf(" enter the value of second angle=");
 	scanf("%f",&second_angle); 
	 
 	third_angle=180-(first_angle+second_angle);
 	printf("%.2f",third_angle);
 	
 	
 }
