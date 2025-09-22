#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the marks:");
    scanf("%d", &marks);
    char grade = (marks >= 90) ? 'A' : (marks >= 80) ? 'B'
                                   : (marks >= 70)   ? 'C'
                                   : (marks >= 60)   ? 'D'
                                   : (marks >= 50)   ? 'E'
                                   : (marks >= 40)   ? 'F'
                                                     : 'F';

    printf("Your Grade is %c", grade);

    switch (grade)
    {
    case 'A':
        printf("\tExcellent Work!");
        break;
    case 'B':
        printf("\tWell Done!");
        break;
    case 'C':
        printf("\tGood Job!");
        break;
    case 'D':
        printf("\tYou Passed, But You Could Do Better!");
        break;
    case 'E':
        printf("\tOn Average!");
        break;
    case 'F':
        printf("\tSorry,You Failed!");
        break;
    }
    if (marks >= 90)
    {
        printf(" Congratulations!");
    }
    else if (marks >= 80)
    {
        printf(" Keep Up The Strong Effort And Aim Even Higher.");
    }
    else if (marks >= 70)
    {
        printf(" A Little More Focus Can Take You To The Next Level.");
    }
    else if (marks >= 60)
    {
        printf(" With Consistent Practice, You Can Improve Further.");
    }
    else if (marks >= 50)
    {
        printf(" Focus More On Understanding Key Concepts.");
    }

    else
    {
        printf(" Significant Effort Is Needed To Progress.");
    }

    return 0;
}