/*                                    SUM OF SERIES 1^2+2^2+..........N^2.                 */


#include <stdio.h>
 
int main()
{
    int num, i, sum = 0;
 
    printf("Enter maximum values of series number: ");
    scanf("%d", &num);
    sum = (num * (num + 1) * (2 * num + 1 )) / 6;
    printf("Sum of the above given series : ");
    for (i = 1; i <= num; i++)
    {
        if (i != num)
            printf("%d^2 + ", i);
        else
            printf("%d^2 = %d ", i, sum);
    }
    return 0;
}
