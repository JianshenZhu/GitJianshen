/*
 ============================================================================
 Name        : 2222.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
	unsigned short i;
	int j, k;
	int b[16];
	char a;
	unsigned int mask=32768;// which the mask in binary number is 10000000
	printf("Please input an integer decimal number.\n");
	fflush(stdout);
	scanf("%hu", &i);
	printf("Please select the way you want be input a or b.\n");
	fflush(stdout);
		a=getchar();
		a=getchar();
	switch(a)
	{
	case'a':
			for (k=15;k>=0;--k)
			{
				j=i%2;
				i=i/2;
				b[k]=j;//record all of the remainders of the input number and assign them to the items of the array
				}
			printf("Binary Equivalent : ");
			fflush(stdout);
			for (k=0;k<=15;++k)//output the remainders in a reverse way so that it will be the binary number of the input decimal number
			{
					printf("%d", b[k]);
					fflush(stdout);
			}


		break;
	case'b':


		printf("Binary Equivalent : ");
		fflush(stdout);

		while(mask > 0)//use the mask to check the input number

		 {

		 if((i & mask) == 0 )// if the input number & 10000000 is 0 which means the first bit of the input number is 0, so the first bit of the output will be 0(first time)
		 {
		 printf("0");
		 fflush(stdout);
		 }
		 else// if the input number & 10000000 is 1 which means the first bit of the input number is 1, so the first bit of the output will be 1(first time)
		 {
		 printf("1");
		 fflush(stdout);
		 }
		 mask = mask >> 1 ;//shift one bit to the right and compare the new mask with the input number again until all the bit of the input number is checked

		 }

		}
	return 0;
}

