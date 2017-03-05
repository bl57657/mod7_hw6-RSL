/*
 * =====================================================================================
 *
 *       Filename:  Real_Salt_Lake_HW6_task1.c
 *       	Usage:  ./Real_Salt_Lake_HW6_task1.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2017 05:17:09 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Tysen Bair (), tysenbair@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <math.h>

/* Function Prototypes */
void Usage(void);
void GetRec(double* x, double* y);
void Polar(double* x, double* y, double* r, double* theta);
void Showit(double* r, double* theta);
int AskQuestion(void);

/* Main Program */
int main(int argc, char *argv[])
{
	double x, y, r, theta;
	if(argc !=3)
{
	Usage();
}
	GetRec(&x, &y);
	Polar(&x, &y, &r, &theta);
	Showit(&r, &theta);

	return(0);
}
/* Function Defenitions */
void GetRec(double* x, double* y)
{
	
	printf("Enter the coordinate for Polar conversion(x & y): ");
	scanf("%lf%lf", &*x, &*y);
	return;
}
void Polar(double* x, double* y, double*r, double* theta)
{
	if(x == 0)
	{
		//printf("X value cant be zero, try again\n");
	Usage();
	}
	else
	{
	*r = sqrt( (*x) * (*x) + (*y) * (*y) );
	*theta = atan( (*y) / (*x) );
	}
	return;
}
void Showit(double* r, double* theta)
{
	printf("Polar R: %lf, Theta: %lf\n", *r, *theta);
	return;
}
void Usage(void)
{
	printf("Usage: ./Program name <x> <y> \n");
	printf("Help: You MUST have two and only two input values.\n");
	printf("Help: Inputs must be numerical values.\n");
	return;
}
int AskQuestion(void)
{
	int a;
	
	printf("Would you like to perform another calculation? <Yes=1> <No=0> \n");
	scanf("%i",&a); 
	return(0);
}

