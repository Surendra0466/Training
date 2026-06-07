#include<stdio.h>
#include<stdlib.h>

void add()
{
	int a,b,c;
	printf("Enter the values of a and b to perform Addition operation:\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Addition of %d and %d is: %d\n",a,b,c);
}

void sub()
{
	
	int a,b,c;
	printf("Enter the values of a and b to perform Subtraction operation:\n");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("Subtraction of %d and %d is: %d\n",a,b,c);
}

void mul()
{

	int a,b,c;
	printf("Enter the values of a and b to perform Multiplication operation:\n");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("Multiplication of %d and %d is: %d\n",a,b,c);
}

void division()
{

	int a,b;
	float c;
	printf("Enter the values of a and b to perform Division operation:\n");
	scanf("%d%d",&a,&b);
	if(b!=0)
	{
		c=(float)a/b;
		printf("Division of %d and %d is: %0.2f\n",a,b,c);
	}
	else
	{
		printf("Enter the non-zero value of b.......\n");
	}
}

int main()
{
	int ch;
	while(1)
	{
		printf("Enter the number the function:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Quit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				add();
				break;
			case 2:
				sub();
				break;
			case 3:
				mul();
				break;
			case 4:
				division();
				break;
			case 5:
				printf("Exiting the loop.....\n");
				return 0;
				break;
			default:
				printf("enter the valid number.....\n");
		}
	}
	return 0;
}



