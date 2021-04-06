#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h> // To round double data type to integer data type

/* 

Problem:

            1 - Given the loudness of a noice in decibels, display a perception
                message, using the following table:

                    Loudness in Decibels        Perception
                __________________________    _______________ 

                    50 or lower                 quiet

                    51 - 70                     intursive

                    71 - 90                     annoying

                    91 - 100                    very annoying

                    above 100                   uncomfortable

                
            
            2 - Given a temperature in degrees Fahrenheit (F), convert it into degrees
                Centigrade (C) using the formula given in the first problem set. Output
                the temperature value in degrees Centigrade (C) together with one of the
                messages:

                        Very Cold:      if C is in the range [40, 0)
                        Cold:           if C is in the range [0, 10)
                        Normal:         if C is in the range [10, 20)
                        Hot:            if C is in the range [20, 30)
                        Very Hot:       if C is in the range [30, 50)
                        Out of Range:   if C is out of the range [-40, 50)

            
            3 - Given the letter grade of a student, output his/her situation according to 
                the following table:

                    A    ------------- High Honor
                    B    ------------- Honor
                    C    ------------- Satisfactory
                    D    ------------- Poor
                    F    ------------- Fail

            
            4 - Calculate the absolute difference of two given numbers (x and y), where the
                absolute difference is x - y or y - x, whichever is positive. Do not use the
                'abs' or 'fabs' function in your solution.

            
            5 - Calculate the life time of a light bulb according to the following table:
                (Use switch statement)

                        Watts           Life time in hours
                    _____________    ________________________

                          15                   2000
                          25                   1500
                          40                   1500
                          60                   1000
                          75                   1000
                          100                  500

*/

int main()
{
    // Control flag.
    int iTab = 6;

    // Control Flag for tabs.
    char cEscape = 'n';

    // User input.
    double dNumber;

    // User input.
    int iNumber;

    // Menu.
    while (iTab != 0)
    {

        /* Operational Tabs */

        // 1st Question.
        if (iTab == 1)
        {
            while (cEscape != 'y' && cEscape == 'n')
            {
                // 1 Sec delay.
                sleep(1);

                // Tab info.
                printf("1 - Given the loudness of a noice in decibels, display a perception\n"
            "                message, using the following table:\n"
            "\n"
            "                    Loudness in Decibels        Perception\n"
            "                __________________________    _______________ \n"
            "\n"
            "                    50 or lower                 quiet\n"
            "\n"
            "                    51 - 70                     intursive\n"
            "\n"
            "                    71 - 90                     annoying\n"
            "\n"
            "                    91 - 100                    very annoying\n"
            "\n"
            "                    above 100                   uncomfortable");

                printf("\n:   ");

                scanf("%d", &iNumber);

                // Instead of if case
                switch (iNumber)
                {
                    // 50 or lower
                    case 0 ... 50 :

                        printf("\nQuiet\n");

                        break;

                    // 51 - 70
                    case 51 ... 70 :

                        printf("\nIntursive\n");

                        break;

                    // 71 - 90
                    case 71 ... 90 :

                        printf("\nAnnoying\n");

                        break;

                    // 91 - 100
                    case 91 ... 100 :

                        printf("\nVery annoying\n");

                        break;

                    // Above 100 but there must be a limit
                    case 101 ... 200 :

                        printf("\nUncomfortable\n");

                        break;

                    // Out of limit
                    default : 

                        printf("\nPermanent hearing loss!\n");

                        break;
                }

                printf("\nAre you done?\n(y/n)\n:   ");

                scanf(" %c", &cEscape);
            }

            // Back to the main menu.
            iTab = 6;

        }


        // 2nd Question.
        else if (iTab == 2)
        {
            // Tab menu
            while (cEscape != 'y' && cEscape == 'n')
            {
                printf("2 - Given a temperature in degrees Fahrenheit (F), convert it into degrees\n"
"                Centigrade (C) using the formula given in the first problem set. Output\n"
"                the temperature value in degrees Centigrade (C) together with one of the\n"
"                messages:\n"
"\n"
"                        Very Cold:      if C is in the range [-40, 0)\n"
"                        Cold:           if C is in the range [0, 10)\n"
"                        Normal:         if C is in the range [10, 20)\n"
"                        Hot:            if C is in the range [20, 30)\n"
"                        Very Hot:       if C is in the range [30, 50)\n"
"                        Out of Range:   if C is out of the range [-40, 50)");

                printf("\n:   ");

                scanf("%lf", &dNumber);

                // Fahrenheit to Celcius.
                dNumber = (dNumber - 32) / 1.8;

                // For switch statement to run properly.
                iNumber = round(dNumber);

                // 1 Sec delay.
                sleep(1);

                // Switch case instead of if case
                switch(iNumber)
                {
                    case -40 ... 0 :

                        printf("\nVery Cold");

                        break;

                    
                    case 1 ... 10 :

                        printf("\nCold");

                        break;

                    
                    case 11 ... 20 :

                        printf("\nNormal");

                        break;

                    
                    case 21 ... 30 :

                        printf("\nHot");

                        break;


                    case 31 ... 50 :

                        printf("\nVery Hot");

                        break;


                    default :

                        printf("\nOut of range");

                        break;
                }

                printf("\nAre you done?\n(y/n)\n:   ");

                scanf(" %c", &cEscape);
            }

            iTab = 6;
        }


        // 3rd Question.
        else if (iTab == 3)
        {
            // User input.
            char cGrade;

            // Tab menu.
            while (cEscape != 'y' && cEscape == 'n')
            {
                printf("3 - Given the letter grade of a student, output his/her situation according to \n"
"                the following table:\n"
"\n"
"                    A    ------------- High Honor\n"
"                    B    ------------- Honor\n"
"                    C    ------------- Satisfactory\n"
"                    D    ------------- Poor\n"
"                    F    ------------- Fail");

                printf("\n:   ");

                scanf(" %c", &cGrade);

                // 1 Sec delay.
                sleep(1);

                switch(cGrade)
                {
                    case 'A' :

                        printf("\nHigh Honor !");

                        break;

                    
                    case 'a' :

                        printf("\nHigh Honor !");

                        break;


                    case 'B' : 

                        printf("\nHonor !");

                        break;


                    case 'b' :

                        printf("\nHonor !");

                        break;


                    case 'C' :

                        printf("\nSatisfactory ;)");

                        break;


                    case 'c' :

                        printf("\nSatisfactory ;)");

                        break;


                    case 'D' : 

                        printf("\nPoor :(");

                        break;


                    case 'd' :

                        printf("\nPoor :(");

                        break;


                    case 'F' :

                        printf("\nFail ;((");

                        break;


                    case 'f' :

                        printf("\nFail ;((");

                        break;


                    default :

                        printf("\nSomething wrong, contact your advisor !");

                        break;
                }

                printf("\nAre you done?\n(y/n)\n:   ");

                scanf(" %c", &cEscape);
            }

            iTab = 6;
        }


        // 4th Question
        else if (iTab == 4)
        {
            // x Var
            double dX;

            // y Var
            double dY;

            // Tab menu.
            while (cEscape != 'y' &&  cEscape == 'n')
            {
                printf("4 - Calculate the absolute difference of two given numbers (x and y), where the\n"
"                absolute difference is x - y or y - x, whichever is positive. Do not use the\n"
"                'abs' or 'fabs' function in your solution.");

                printf("\nEnter x\n:   ");

                scanf("%lf", &dX);

                printf("\nEnter y\n:   ");

                scanf("%lf", &dY);

                // 1 Sec delay.
                sleep(1);

                //Conditionals
                if (dX > dY)
                {
                    printf("\nThe absolute value between x and y is: %lf", (dX - dY));
                }

                else if (dY > dX)
                {
                    printf("\nThe absolute value between x and y is: %lf", (dY - dX));
                }

                else
                {
                    printf("\nAbsolute value between x and y is 0.");
                }

                printf("\nAre you done?\n(y/n)\n:   ");

                scanf(" %c", &cEscape);
            }

            iTab = 6;

        }


        // 5th Question
        else if (iTab == 5)
        {
            // Tab menu.
            while (cEscape != 'y' && cEscape == 'n')
            {
                printf(" 5 - Calculate the life time of a light bulb according to the following table:\n"
"                (Use switch statement)\n"
"\n"
"                        Watts           Life time in hours\n"
"                    _____________    ________________________\n"
"\n"
"                          15                   2000\n"
"                          25                   1500\n"
"                          40                   1500\n"
"                          60                   1000\n"
"                          75                   1000\n"
"                          100                  500");

                printf("\n:   ");

                scanf("%d", &iNumber);

                // 1 Sec delay.
                sleep(1);

                // Switch case
                switch(iNumber)
                {
                    case 15 :

                        printf("\nEstimated life time is 2000 hours");

                        break;


                    case 25 :

                        printf("\nEstimated life time is 1500 hours");

                        break;


                    case 40 :

                        printf("\nEstimated life time is 1500 hours");

                        break;

                    
                    case 60 :

                        printf("\nEstimated life time is 1000 hours");

                        break;


                    case 75 :

                        printf("\nEstimated life time is 1000 hours");

                        break;


                    case 100 :

                        printf("\nEstimated life time is 500 hours");

                        break;

                    
                    default :

                        printf("\nUnknown ?");
                }

                printf("\nAre you done?\n(y/n)\n:   ");

                scanf(" %c", &cEscape);
            }

            iTab = 6;
        }

        /* Operational Tabs */


        
        
        
        // Options
        else if (iTab == 6)
        {
            printf("\nMain Menu...");
            
            // 2 Sec delay.
            sleep(2);

            printf("Problem:\n"
                    "\n"
                    "          (1) - Given the loudness of a noice in decibels, display a perception\n"
                    "                message, using the following table:\n"
                    "\n"
                    "                    Loudness in Decibels        Perception\n"
                    "                __________________________    _______________ \n"
                    "\n"
                    "                    50 or lower                 quiet\n"
                    "\n"
                    "                    51 - 70                     intursive\n"
                    "\n"
                    "                    71 - 90                     annoying\n"
                    "\n"
                    "                    91 - 100                    very annoying\n"
                    "\n"
                    "                    above 100                   uncomfortable\n"
                    "\n"
                    "                \n"
                    "            \n"
                    "          (2) - Given a temperature in degrees Fahrenheit (F), convert it into degrees\n"
                    "                Centigrade (C) using the formula given in the first problem set. Output\n"
                    "                the temperature value in degrees Centigrade (C) together with one of the\n"
                    "                messages:\n"
                    "\n"
                    "                        Very Cold:      if C is in the range [40, 0)\n"
                    "                        Cold:           if C is in the range [0, 10)\n"
                    "                        Normal:         if C is in the range [10, 20)\n"
                    "                        Hot:            if C is in the range [20, 30)\n"
                    "                        Very Hot:       if C is in the range [30, 50)\n"
                    "                        Out of Range:   if C is out of the range [-40, 50)\n"
                    "\n"
                    "            \n"
                    "          (3) - Given the letter grade of a student, output his/her situation according to \n"
                    "                the following table:\n"
                    "\n"
                    "                    A    ------------- High Honor\n"
                    "                    B    ------------- Honor\n"
                    "                    C    ------------- Satisfactory\n"
                    "                    D    ------------- Poor\n"
                    "                    F    ------------- Fail\n"
                    "\n"
                    "            \n"
                    "          (4) - Calculate the absolute difference of two given numbers (x and y), where the\n"
                    "                absolute difference is x - y or y - x, whichever is positive. Do not use the\n"
                    "                'abs' or 'fabs' function in your solution.\n"
                    "\n"
                    "            \n"
                    "          (5) - Calculate the life time of a light bulb according to the following table:\n"
                    "                (Use switch statement)\n"
                    "\n"
                    "                        Watts           Life time in hours\n"
                    "                    _____________    ________________________\n"
                    "\n"
                    "                          15                   2000\n"
                    "                          25                   1500\n"
                    "                          40                   1500\n"
                    "                          60                   1000\n"
                    "                          75                   1000\n"
                    "                          100                  500\n"
                    "");

            printf("\n0 - Quit\n:   ");
            
            scanf("%d", &iTab);

            // Not to skip tab menus.
            cEscape = 'n';

            // 1 Sec delay.
            sleep(1);
        }

        // Irrelevant Choice
        else
        {
            printf("\nChoose between 1 - 5");

            // Back to the main menu.
            iTab = 6;
        }
    }

    printf("\nGood Bye :) :) :)\n");

    // 1 Sec delay.
    sleep(1);
    
    return 0;
}