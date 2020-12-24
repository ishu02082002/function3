#include <stdio.h>
int main() 
{
    int  m,n,max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &m, &n);

    max = (m>n) ? m:n;

    while (1) 
	{
        if (max % m == 0 && max % n == 0) 
		{
            printf("The LCM of %d and %d is %d.", m, n, max);
            break;
        }
        ++max;
    }
    return 0;
}
