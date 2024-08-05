#include<stdio.h>
#include<conio.h>
 
 main()
 {
 	float maths,science,english,sum,result;
 	
 	printf("Enter the of maths");
 	scanf("%f",&maths);
 	printf("Enter the of english");
 	scanf("%f",&english);
 	printf("Enter the of science");
 	scanf("%f",&science);
 	
    sum=maths+science+english;
 	result=sum/3;
 	
 	printf("The result is %.2f",result);
 	
 	if(result>=90 && result<=100)
 	{
 		printf("The Grade is A1");
	}
	else if(result>=70&&result<=80)
	{
		printf("The drade is B1");
	}
	else if (result>=50 && result<=60)
	{
		printf("the grade is B1");
	}
	else if (result>=33 && result<=40)
	{
		printf("The grade is D");
	}
	else
	{
		printf("you are failed");
	}
 	
	 
 	
 }