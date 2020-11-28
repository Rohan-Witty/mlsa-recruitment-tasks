#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    int n, k; //n is length of strings and k is max lenth of substring
    scanf("%d %d", &n, &k); //inputting values of n and k
    char s[n]; //Input string
    bool present[n]; //Array to check whether corresponding element os s[n] is present in letters specified in third line

    for (int i = 0; i<n; i++) //Initializing present array to false
    {
        present[i] = (0==1);
    }
    scanf("%s", s); //Inputting the string

    char containing[2*k]; //Array for 3rd line input of letters

    while ((getchar()) != '\n'); // NEED TO DO THIS TO MAKE fgets work after scanf

    fgets(containing, 2*k, stdin); //Input

    //LOT OF THINGS THAT WERE TRIED BEFOR REALIZING THAT fgets CANNOT BE TRIED DIRECTLY AFTER scanf
    //scanf("%[^\n]", containing);
    /*int cc = 0;
    char c;
    while ((c = fgetc(stdin)) != '\n')
    {
        containing[cc] = c;
        cc++;
    }*/
    /*for(int i=0; i<k; i++)
    {
        char c[1];
        scanf("%c", c);
        for (int j = 0; j < n; j++)
        {
            if(strchr(c, s[j]) != NULL)
            {
                present[j] = (1==1);
            }

        }
    }*/

    for (int j = 0; j < n; j++)
    {
        if(strchr(containing, s[j]) != NULL) //Checking presence of each char in s in containing
        {
            present[j] = (1==1);
        }
    }


    int count = 0; //Count for number of substrings
    for(int i = 0; i < n; i++) // Checkin each possible substring
    {

        for (int j = i; j < n; j++)
        {
            bool sub = (1==1);
            for (k = i; k <= j; k++)
            {
                sub = sub && present[k];
            }
            count = count + (int)sub;
        }
    }
    printf("%d\n", count); //Final Output
    return 0;

}