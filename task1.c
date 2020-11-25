#include <stdio.h>

int main()
{
    int x, y, z; //Initializing the variables x, y and z
    printf("Input - ");
    scanf("%d %d %d", &x, &y, &z); // Taking in the inputs
    if ((y % x + z) < x) // Main comparision logic
    {
        printf("Output - NO\n");
    }
    else
    {
        printf("Output - YES\n");
    }
}
