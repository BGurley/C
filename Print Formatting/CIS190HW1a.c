// Brandon Gurley
// CIS 190 HW 1 Part 2
#include <stdio.h>

int main(void){
	int number;
	// asks the user for a number
	printf("Enter an Integer value between 0 and 32767\n");
	scanf("%d", &number);
	int iNum1 = (int) number;
    //gives each digit their own variable
	int digitone = (iNum1%10);
    int digittwo =(iNum1/10%10);
	int digitthree = (iNum1/100%10);
	int digitfour = (iNum1/1000%10);
	int digitfive = (iNum1/10000%10);

	
        // print statements
		printf( "%d   %d   %d   %d   %d", digitone, digittwo, digitthree, digitfour, digitfive);

		printf( "\n");

		printf( "%5d   %d   %d   %d",  digittwo, digitthree, digitfour, digitfive);
        
		printf( "\n");

		printf( "%9d   %d   %d",  digitthree, digitfour, digitfive);
	
		printf( "\n");
        
		printf( "%13d   %d", digitfour, digitfive);

		printf( "\n");

		printf( "%17d", digitfive);

		printf( "\n");

	return 0;
}
