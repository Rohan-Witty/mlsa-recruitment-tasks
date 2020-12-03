#include <stdio.h>
#include <stdbool.h>

bool iscoprime(int a, int b);
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int i = A;
    
    while (i > 0)
    {
        if (A%i == 0 && iscoprime(i,B))
        {
            printf("%d\n",i);
            return 0;
        }
        i--;
    }
}
bool iscoprime(int a, int b)
{
    while(a > 0 && b > 0)
    {
        if(a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a > b)
    {
        return a == 1;
    }
    else
    {
        return b == 1;
    }
}
