#include <stdio.h>
#include <stdlib.h>
#include <dos.h> // To delay print statement.
#include <stdbool.h> // Booleans

/*Problem:

		1 - Input an integer number. If it is greater than 0, find its square.
			Otherwise find its cube. +++

		2 - Given a value x, calculate y according to the following formula. +++

								-x		if x < 0
						x -> 	0		if x = 0
								x^2		if x > 0

				 
		3 - A student fails a course if s/he takes less than 50 as overall grade.
			Given the overall grade of a student, display whether s/he passed or
			failed. +++

		4 - A supermarket offers a 5% discount if your bill is more than 100 YTL
			Given the customer's id number and bill, display his/her id number with
			the amount s/he has to pay (including the discount if any) +++

		5 - Calculate the water bill for a customer where the price of water / m^3 
			is 3 YTL for domestic users and 2.5 YTL for industrial users. Input
			the user-id consumption (amount of water used), user code 
			(D - domestic, I - Industrial), and outğut the user-id and the amount
			to be paid.



[There will be total six tabs, one main tab and five operational tabs.]

[There will be two version of this program, one with switch cases and other
with if cases]

Author: Cenker Özkan
Date: 05/05/2021

*/

int main()
{
    // Tab switch
    int iTab = 6; // To print the menu

    // Input 
    double dNumber;

	// Tab control
	char cEscape = 'n';

    // Main menu

    while (iTab != 0)
    {

		/* OPERATIONAL TABS BEGINNING */
		
		// 1st Question
		if (iTab == 1)
		{
			// Tab menu
			while (cEscape != 'y' && cEscape == 'n')
			{

				printf("\n(1) - Input an integer number. if it is greater than 0, find its square.\n\tOtherwise, find its cube.\n\n:  ");

				scanf("%lf", &dNumber);

				/* Calculations */

				// Checking negativity
				if (dNumber > 0)
				{
					// Delay
					sleep(1);

					printf("\n\nGiven number is greater than zero, square is: %lf\n\nAre you done\n(y/n)\n:   ", (dNumber * dNumber));

					scanf(" %c", &cEscape);
				}

				else if (dNumber < 0)
				{	
					// Delay
					sleep(1);

					printf("\n\nGiven number is not greater than zero, cube is: %lf\n\nAre you done\n(y/n)\n:   ", (dNumber * dNumber * dNumber));

					scanf(" %c", &cEscape);
				}

				// If equal to zero
				else
				{
					printf("\nYou can not enter zero as an input!\nReturning back...");

					sleep(1);
				}

				// Returning back to the options
				iTab = 6;

				printf("\n\nReturning back to the options...");
			}
		}

		// 2nd Question
		else if (iTab == 2)
		{
			while (cEscape != 'y' && cEscape == 'n')
			{
				printf("\n(2) - Given a value x, calculate y according to the following formula:\n\n\t\t-x	if x < 0\n\t\t0		if x = 0\n\t\tx^2	if x > 0\n\n:   ");

				scanf("%lf", &dNumber);

				// Calculations

				// Conditionals
				if(dNumber < 0)
				{
					printf("\nAccording to the given formula:  -%lf\n\nAre you done?\n(y/n)\n:  ", (dNumber * -1));

					scanf(" %c", &cEscape);
				}

				else if (dNumber == 0)
				{
					printf("\nAccording to the given formula:  %d\n\nAre you done?\n(y/n)\n:  ", 0);

					scanf(" %c", &cEscape);
				}

				else if (dNumber > 0)
				{
					printf("\nAccording to the given formula:  %lf\n\nAre you done?\n(y/n)\n:  ", (dNumber * dNumber));

					scanf(" %c", &cEscape);
				}
			}

			// Returning back to the options
			iTab = 6;

			printf("\n\nReturning back to the options...");
		}

		// 3rd Question
		else if (iTab == 3)
		{
			while (cEscape != 'y' && cEscape == 'n')
			{
				printf("\n(3) - A student fails a course if s/he takes less than 50 as overall grade.\n\tGiven the overall grade of a student, display whether s/he passed or\n\tfailed.\n\nEnter the grade\n:   ");

				scanf("%lf", &dNumber);

				// Calculations

				// Conditionals

				// Student Fails !
				if (dNumber < 50 && dNumber > 0)
				{
					printf("\nFailed!\nAre you done?\n(y/n)\n:   ");

					scanf(" %c", &cEscape);
				}

				// Student Passes !
				else if (dNumber > 50 && dNumber > 0)
				{
					printf("\nPassed!\nAre you done?\n(y/n)\n:   ");

					scanf(" %c", &cEscape);
				}

				// If there is a problem
				else
				{
					printf("\nYou should contact with your advisor.\nAre you done?\n(y/n)\n:");
					
					scanf(" %c", &cEscape);
				}
			}

			// Returning back to the options
			iTab = 6;

			printf("\n\nReturning back to the options...");
		}

		// 4th Question
		else if (iTab == 4)
		{
			// Since we will use more than one value here, it will be more efficient to
			// initialize the variables under this tab.

			/* Variables */
			// User id
			double dID;

			// User bill
			double dBill;						

			while (cEscape != 'y' && cEscape == 'n')
			{

				printf("\n(4) - A supermarket offers a 5 percent discount if your bill is more than 100 TL.\n\tGiven the customer's id number and bill, display his/her id number with\n\tthe amount s/he has to pay (including the discount if any).\n\nEnter id\n:   ");

				scanf("%lf", &dID);

				printf("\nBill\n:   ");

				scanf("%lf", &dBill);

				// Calculations

				// Conditionals
				if (dBill > 100 && dBill > 0)
				{	
					// Discount
					double dDiscount = dBill / 5;

					// Bill
					dBill = dBill - dDiscount;

					// %5 percent discount
					printf("\nBecause of your bill is more than 100 Turkish Liras\nYou'll have a 5 percent discount.\nYou have to pay:  %lf TL\nID number:  %lf \nAre you done?\n(y/n)\n:   ", dBill, dID);

					scanf(" %c", &cEscape);
				}

				else if (dBill < 100 && dBill > 0)
				{
					printf("\nYou have to pay:  %lf TL\nID number:  %lf \nAre you done?\n(y/n)\n:   ", dBill, dID);

					scanf(" %c", &cEscape);
				}

				else
				{
					printf("\nIt seems like there is a problem with your bill\nPlease re-check your information...");

					// 1 Sec delay
					sleep(1);
				}
			}

			// Returning back to the options
			iTab = 6;

			printf("\n\nReturning back to the options...");

		}

		// 5th Question
		else if (iTab == 5)
		{
			// Since we will use more than one value here, it will be more efficient to
			// initialize the variables under this tab.

			/* Variables */
			// User code
			char cUserCode;

			// Consumption m^3
			double dConsumption;

			while (cEscape != 'y' && cEscape == 'n')
			{
				printf("\n(5) - Calculate the water bill for a customer where the price of water / m^3\n\tis 3 TL for domestic users and 2.5 TL for industrial users. Input\n\tthe user-id, consumption (amount of water used m^3), user code\n\t(D - domestic, I - industrial), and output the user-id and the amount\n\tto be paid.\nUser id\n:   ");

				scanf(" %c", &cUserCode);

				printf("\nAmount of water used in m^3\n:   ");

				scanf("%lf", &dConsumption);

				// Calculations 

				// Conditionals
				if (cUserCode == 'I' || cUserCode == 'i')
				{
					printf("\nUser-ID:  Industrial\nPrice per m^3 water:  3 TL\nWater used in m^3:  %lf\nAmount to be paid:  %lf\nAre you done?\n(y/n)\n:   ", dConsumption, dConsumption * 3);

					scanf(" %c", &cEscape);
				}

				else if (cUserCode == 'D' || cUserCode == 'd')
				{
					printf("\nUser-ID:  Domestic\nPrice per m^3 water:  2.5 TL\nWater used in m^3:  %lf\nAmount to be paid:  %lf\nAre you done?\n(y/n)\n:   ", dConsumption, dConsumption * 2.5);

					scanf(" %c", &cEscape);
				}

				else
				{
					printf("\nIt seems like you made a mistake on your user-id\nReturning back...");

					// 2 Sec delay
					sleep(2);
				}
			}
			// Returning back to the options
			iTab = 6;

			printf("\n\nReturning back to the options...");
		}

		/* OPERATIONAL TABS ENDING */
		


		// Options
		else if (iTab == 6)
		{
			// 2 Sec delay
			sleep(2);

			printf("\n(1) - Input an integer number. If it is greater than 0, find its square.\n\tOtherwise, find its cube.\n(2) - Given a value x, calculate y according to the following formula.\n\t\t-x     if x < 0\n\t\t0     if x = 0\n\t\tx^2       if x > 0\n\n(3) - A student fails a course if s/he takes less than 50 as overall grade.\n\tGiven the overall grade of a student, display whether s/he passed or\n\tfailed.\n(4) - A supermarket offers a 5 percent discount if your bill is more than 100 TL.\n\tGiven the customer's id number and bill, display his/her id number with\n\tthe amount s/he has to pay (including the discount if any).\n(5) - Calculate the water bill for a customer where the price of water / m^3\n\tis 3 TL for domestic users and 2.5 TL for Industrial users. Input\n\tthe user-id consumption (amount of water used), user code\n\t(D - domestic, I - industrial), and output the user-id and the amount\n\tto be paid.\n(0) - Quit\n\n:   ");

			scanf("%d", &iTab);

			
			// Not to leave tabs without on purpose
			cEscape = 'n';

			// Good Bye
			if (iTab == 0)
			{
				printf("\nGood Bye :):):)");

				sleep(1);
			}
		}

		// Irrelevant choice
		else
		{
			printf("\nChoose between 1 - 5\n");

			sleep(2);

			iTab = 6;
		}
    }
    return 0;
}