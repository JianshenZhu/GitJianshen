/*
 ============================================================================
 Name        : 1111.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char c;
	unsigned short x;
	unsigned long y;
	unsigned int leap;
	int a, b, z, q, w, k;
	float p;
	printf("Please input a charactor from a to e.\n");
	fflush(stdout);
	int i=1;
	while (i>0){
//		to make an infinite while loop
		c=getchar();
	switch(c)
	{
	case'a':
		printf("Please input a positive number and factorial of it.\n");
		fflush(stdout);
		 scanf("%hu",&x);
		    if (x>0 && x<13){
//		    	restricted input so that  the output value is smaller
//		    	than the maximum possible value of the type unsigned long
		    				y=1;
		    	  for(k=1; k<=x; ++k)
		    		{
		    			      y*= k; //Factorial of a number
		    		}
		    		printf("Factorial of %u = %lu.\n", x, y);
		    		fflush(stdout);

		    }
		    else if (x==0){ //Factorial of 0
		    	y=1;        //Factorial of 0 is 1
		    	printf("Factorial of %u = %lu.\n", x, y);
		    	fflush(stdout);
		    }
		    else
		    {
		        printf("Error! Factorial of a negative number doesn't exist or out of range.\n"); // Shows error message when the input is incorrect
		    	fflush(stdout);
		    }
		break;
	case'b':
			printf("Please input the number of a year to detect whether it is a leap year or not.\n");
			fflush(stdout);
			scanf("%d", &leap);
			if ((float) leap/4== (int) leap/4){ //determine the input can be divisible by 4 or not, if so, that means it is a leap year.
				printf("Leap Year!.\n");
			fflush(stdout);
			}
			else{
				printf("Not a leap year.\n");
				fflush(stdout);
			}
			break;
	case'c':
			printf("Please input 2 numbers to detect the bigger one.\n");
			fflush(stdout);
			scanf("%d %d", &a, &b);
			z=(a>b) ? a:b;  //determine which one is the bigger one
			printf("The maximum number among two input numbers is: %d.\n", z);
			fflush(stdout);
			break;
	case'd':
			printf("Please input an integer number and then you will get a float number.\n");
			fflush(stdout);
			scanf("%d %d", &q, &w);
			p=(float)q/(float)w; //do division by output a float number
			printf("%f.\n", p);
			fflush(stdout);
			break;
	case'e':
		printf("Exit.");// exit the program
		exit(0);

	default:
		break;// all the break in the program is used to break the process so that it will just output which the user selected


	}
	printf(“this is a test comment\n”);
	printf(“this is a test comment\n”);
	printf(“this is a test comment\n”);
	printf(“this is a test comment\n”);
	}


	return 0;
}
