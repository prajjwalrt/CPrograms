#include<stdio.h>
int main()
{  int ch;
   printf("FOOD MENU\n");
   printf("1.Lasgna-Rs.355\n");
   printf("2.Nachos-Rs.250\n");
   printf("3.Cheese balls-Rs.190\n");
   printf("4.Red velvet-Rs.300\n");
   printf("5.Pizza-Rs.400\n");
   printf("Enter your choice(1-5):");
   scanf("%d",&ch);
   switch(ch)
   {
   	case 1:
   		printf("Food item:Lasagna\n");
   		printf("Price:355");
   		break;
   	case 2:
   		printf("Food item:Nachos\n");
   		printf("Price:250");
   		break;
   	case 3:
   		printf("Food item:Cheese balls\n");
   		printf("Price:190");
   		break;
   	case 4:
   		printf("Food item:Red velvet\n");
   		printf("Price:300");
   		break;
   	case 5:
   		printf("Food item:Pizza\n");
   		printf("Price:400");
   		break;
   	default:
   		printf("Sorry!Item not available.");
   			
   }
   
	return 0;
	
}
