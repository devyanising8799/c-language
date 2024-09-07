#include<stdio.h>
#include<conio.h>

main()
{
   int hra,da,ta;
   float salary,grosssalary,total;
   
   printf("enter the salary;");
   scanf("%f",&salary);
    printf("enter the hra;");
   scanf("%f",&hra);
   hra=(salary*hra)/100;
   	 printf("enter the da;");
   scanf("%f",&da);
   da=(salary*da)/100;
   	 printf("enter the ta;");
   scanf("%f",&ta);
   ta=(salary*ta)/100;
   
   total=salary+hra+da+ta;
   
   printf("the gross salary is %.2f",total);
   	
}