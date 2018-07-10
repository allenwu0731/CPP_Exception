#include <iostream>
#include <exception>

int main()
{
	int choice=0;
	float a=0;
	float b=0;
	

	printf("-----------------\n");
	printf("Option List:\n");
	printf("1) division \n");
	printf("2) multiplication\n");
	printf("-----------------\n");
	printf("Please choose: (-1 to exit)\n");
	scanf("%d", &choice);
	
	while(choice!=-1)
	{
			
		printf("Please input two mumber:\n");
		scanf("%f", &a);
		scanf("%f", &b);		
		
		try{
			
			if(choice==1){
				if(b==0)
					throw(b);
				printf("result: %.2f\n", a/b);
			}
			else if(choice==2)
				printf("result: %.2f\n", a*b);
			
		}catch(...){
			
			printf("Division by zero condition!\n");
		}
		
		printf("\n-----------------\n");
		printf("Option List:\n");
		printf("1) division \n");
		printf("2) multiplication \n");
		printf("-----------------\n");
		printf("Please choose: (-1 to exit)\n");
		scanf("%d", &choice);
		
	}
	
	
	return 0;
}
