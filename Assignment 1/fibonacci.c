
#include <stdio.h>

long fibonacci(int num)
{
    long first = 0, second = 1, term = 0;
    
    if (num <= 1)
        return num;
    
    for (int i = 2; i <= num; i++)
    {
        term = first + second; 
        first = second;   
        second = term;    
    }
    return second;
}

int main()
{
    int num;
    printf("Enter first number: ");
    scanf("%d", &num);

    printf("The %dth fibonacci number is %ld", num, fibonacci(num));
    return 0;
}