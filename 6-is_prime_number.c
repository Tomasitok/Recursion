#include <stdio.h>
#include "main.h"
/**
 * 
 * 
 * 
*/

int is_prime_number(int n)
{
    int i;
    
    if( n <= 2)
    {
        return (n == 2) ? 1 : 0;
    }
    for(i = 2; i * i <= n; i++)
    {
        if(n % i == 0)  
        {
            return 0;
        }
    }   
    return 1;
}