#include<stdio.h>

main()
{
		char grade;	
	int mark;
	
	printf("enter your mark :");
	scanf("%d",&mark);
	
	grade=(mark>=90 && mark<=100)?'A'
	:(mark>=80 && mark<=90)?'B'		
	:(mark>=70 && mark<=80)?'C'	
	:(mark>=60 && mark<=70)?'D'	
	:(mark>=40 && mark<=60)?'E'
	:'F';
	printf("your grade is %c",grade);	
	switch (grade)
	{
		case'A':printf("Excellent work");
	break;
	case'B':printf("\nwell done");
	break;
	case'C':printf("\ngood jobe");
	break;
	case'D':printf("\nyou passed but you could do better");
	break;
	case'E':printf("\nyou passed but you coulde do better");
	break;
	case'F':printf("\nsorry you failed");
	break;
}
 {
	if (grade='A' || grade=='B' || grade=='C' || grade=='D' ||grade=='E')
		{
			printf("congratulation! ");
		}
		else
		{
			printf("please try sgain next time");
		}
	}
}


	
	
