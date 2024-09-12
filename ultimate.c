
   #include <stdio.h>

void calculator();
void patternprint();
void factorial();
void palindrome();
void reversingnum();
void perfectnum();

int main()
{
    int choice;
    printf("Enter your choice ");
    printf("\n1 for calculator ");
    printf("\n2 for pattern printing ");
    printf("\n3 for printing factorial ");
    printf("\n4 for checking palindrome ");
    printf("\n5 for reversing number ");
    printf("\n6 for checking if the number is perfect or not ");
    scanf("%d", &choice);
 switch (choice)
    {
    case 1:
        calculator();
        break;
    case 2:
        patternprint();
        break;
    case 3:
        factorial();
        break;
    case 4:
        palindrome();
        break;
    case 5:
        reversingnum();
        break;
    case 6:
        perfectnum();
        break;
    default:
        printf("Invalid choice");
        break;
    }
    printf("\nEnd of function\n");
    return 0;
}

void calculator()
{
    int a, b, operation, result;
    printf("\nEnter the first number: ");
    scanf("%d", &a);
    printf("\nEnter the second number: ");
    scanf("%d", &b);
    printf("\n1 for addition, \n2 for subtraction");
    printf("\n3 for multiplication, \n4 for division ");
    scanf("%d", &operation);
    switch (operation)
    {
    case 1:
        result = a + b;
        printf("The result is %d", result);
        break;
    case 2:
        result = a - b;
        printf("The result is %d", result);
        break;
    case 3:
        result = a * b;
        printf("The result is %d", result);
        break;
    case 4:
        if (b != 0)
        {
            result = a / b;
            printf("The result is %d", result);
        }
        else
        {
            printf("Division by zero is not allowed.");
        }
        break;
    default:
        printf("Invalid operation");
        break;
    }
}

void patternprint()
{
    int choice, rows, i, j, k;
    printf("Enter your choice ");
    printf("\n1 for left side triangle ");
    printf("\n2 for right side triangle ");
    printf("\n3 for pyramid ");
    printf("\n4 for diamond ");
    printf("\n5 for hollow square or rectangle ");
    printf("\n6 for square or rectangle ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\nPrinting left side triangle ");
        printf("\nEnter the number of rows: ");
        scanf("%d", &rows);
        for (i = 1; i <= rows; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    case 2:
        printf("\nPrinting right side triangle ");
        printf("\nEnter the number of rows: ");
        scanf("%d", &rows);
        for (i = 1; i <= rows; i++)
        {
            for (j = 1; j <= rows - i; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    case 3:
        printf("\nPrinting pyramid ");
        printf("\nEnter the number of rows: ");
        scanf("%d", &rows);
        for (i = 1; i <= rows; i++)
        {
            for (j = i; j < rows; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    case 4:
        printf("Printing diamond ");
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        for (i = 1; i <= rows; i++)
        {
            for (j = i; j < rows; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (i = rows - 1; i >= 1; i--)
        {
            for (j = rows; j > i; j--)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    case 5:
        printf("\nPrinting hollow square or rectangle ");
        int columns;
        printf("\nEnter the number of rows: ");
        scanf("%d", &rows);
        printf("\nEnter the number of columns: ");
        scanf("%d", &columns);
        for (i = 1; i >= rows; i++)
        {
            for (j = 1; j <= columns; j++)
            {
                if (i == 1 || i == rows || j == 1 || j == columns)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        break;
    case 6:
        printf("\nPrinting square or rectangle ");
        printf("\nEnter the number of rows: ");
        scanf("%d", &rows);
        printf("\nEnter the number of columns: ");
        scanf("%d", &columns);
        for (i = 1; i <= rows; i++)
        {
            for (j = 1; j <= columns; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    default:
        printf("Invalid choice");
        break;
    }
}

void factorial()
{
    int num, fact = 1, i;
    printf("\nEnter the number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("\nThe factorial of the given number is %d", fact);
}

void palindrome()
{
    int num, temp, remainder, reverse = 0;
    printf("\nEnter the number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    if (reverse == num)
        printf("\nPalindrome");
    else
        printf("\nNot a palindrome");
}

void reversingnum()
{
    int num, reverse = 0;
    printf("\nEnter the number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    printf("\nThe reversed number is %d", reverse);
}

void perfectnum()
{
    int num, sum = 0, i;
    printf("\nEnter the number: ");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
        printf("\nPerfect number");
    else
        printf("\nNot a perfect number");
}
