#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    char c;
    int count = 0;

    char string[2*m*n];

    while ((getchar()) != '\n'); // NEED TO DO THIS TO MAKE fgets work after scanf

    fgets(string, 2*m*n, stdin); //Input



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< m; j++)
        {
            if ((i == n - 1) && (string[2*i*m + 2*j] == 'D'))
            {
                count ++;
            }
            else if ((j == m - 1) && (string[2*i*m + 2*j] == 'R'))
            {
                count ++;
            }


        }
    }
    printf("%d\n", count);
}
