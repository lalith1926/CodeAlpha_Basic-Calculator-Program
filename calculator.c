#include<stdio.h>

int main()
{
    int m, choice;

    printf("Enter how many numbers: ");
    scanf("%d",&m);

    int arr[m];


    for(int i=0; i<m; i++)
    {
        printf("Enter %d number: ", i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n------Basic Calculator Program------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter Choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        {
            int sum = 0;
            for(int i=0; i<m; i++)
            {
                sum += arr[i];
            }
            printf("Answer (Addition): %d\n", sum);
            break;
        }

        case 2:
        {
            int result = arr[0];
            for(int i=1; i<m; i++)
            {
                result -= arr[i];
            }
            printf("Answer (Subtraction): %d\n", result);
            break;
        }

        case 3:
        {
            int result = 1;
            for(int i=0; i<m; i++)
            {
                result *= arr[i];
            }
            printf("Answer (Multiplication): %d\n", result);
            break;
        }

        case 4:
        {
            float result = arr[0];

            for(int i=1; i<m; i++)
            {
                if(arr[i] == 0)
                {
                    printf("Error: Division by zero!\n");
                    return 0;
                }
                result /= arr[i];
            }

            printf("Answer (Division): %.2f\n", result);
            break;
        }

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
