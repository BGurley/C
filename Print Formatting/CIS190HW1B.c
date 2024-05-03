// Brandon Gurley
// CIS 190 HW 1
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
		printf( "%d   %d   %d   %d   %d", digitfive, digitfour, digitthree, digittwo, digitone);

		printf( "\n");

		printf( "%d   %d   %d   %d",  digitfour, digitthree, digittwo, digitone);
        
		printf( "\n");

		printf( "%d   %d   %d",  digitthree, digittwo, digitone);
	
		printf( "\n");
        
		printf( "%d   %d", digittwo, digitone);

		printf( "\n");

		printf( "%d", digitone);

		printf( "\n");

	return 0;
}
