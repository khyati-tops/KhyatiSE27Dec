//recursion : It is the process to call itself again and again 

//recusive function : The function that call itself again and again is called asrecursive function 

//Recursive function : 

//WAP to find factorial of a number using Recursion 

#include<stdio.h>


//function declaration & defination
int fact(int num)
{
	if(num<=0)
	{
		return 0;
	}
	else
	{
		return num+fact(num-1); 
	}
}

int main()
{
	
	int a;
	
	printf("Enter number to find factorial : ");
	scanf("%d",&a);
	
	printf("Factorial of %d is : %d",a,fact(a));
		
	return 0;
}




