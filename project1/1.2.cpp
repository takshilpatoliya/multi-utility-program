#include<stdio.h>

main()
{
	int base_salary,gross_salary;
	float hra,da,ta;
	
	printf(" enter the value of Base salary =");
	scanf("%d",&base_salary);
	
	printf(" enter the valueof HRA=");
	scanf("%f",&hra);
	
	printf(" enter the valueof DA=");
	scanf("%f",&da);
	
	printf(" enter the valueof TA=");
	scanf("%f",&ta);
	
	hra= base_salary*hra/100, da= base_salary*da/100, ta= base_salary*ta/100;
	gross_salary=base_salary+hra+da+ta;
	printf("Gross salary = %d",gross_salary);
	
	
	
	
	
	
	
	
	
	
	
}
