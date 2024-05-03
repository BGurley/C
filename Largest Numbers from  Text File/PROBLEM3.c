// Brandon Gurley
// Homework 2 Problem 3
#define BUFFER_SIZE 300
#include <stdio.h>

int main (void){
    // opens input file
    FILE* infile = fopen("numbers.txt", "r");
    if(!infile)
    {
        printf("FILE WAS NOT FOUND\n");
        return;
    }
    
    char buffer[300];
    // declares variables
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    int num11, num12, num13, num14, num15, num16, num17, num18, num19, num20;
    
    // gets the numbers from the text file
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num1);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num2);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num3);

    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num4);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num5);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num6);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num7);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num8);

    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num9);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num10);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num11);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num12);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num13);

    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num14);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num15);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num16);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num17);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num18);

    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num19);
    
    fgets(buffer, 200, infile);
    sscanf(buffer, "%d", &num20);
    
    fclose(infile);
    
    // connects highets values with integers
    int largest1= num10;
    int largest2= num11;
    int largest3= num18;
    
    // calls the function
    funtown(&largest1, &largest2, &largest3);
    return 0;
}

// function to print the largest values
void funtown (int* x, int* y, int* z){

    printf("The Three largest numbers are %d %d %d",  *x,  *y, *z);
    
}

