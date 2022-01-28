#include <stdio.h>


int main()
{
    int i,j,n = 5;
    int table[5] = {1,3,5,0,4};
    for(i = 0;i< n-1;i++)
    {
        for(j = i+1;j<n;j++)
        {
            if(table[j] < table[i])
            {
                int temp = table[i];
                table[i] = table[j];
                table[j] = temp;
            }
        }
    }
    for(i = 0;i < n;i++)
    {
        printf("Element %d : %d\n",i,table[i]);
    }
    return 0;
}