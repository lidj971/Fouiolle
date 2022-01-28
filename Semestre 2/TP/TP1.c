#include <stdio.h>

/*Exercice 3
int main()
{
    int i,j,n = 15,change = 1;
    int table[50];
    for (i = 0;i < 15;i++)
    {
        printf("Entrez une valeur\n");
        scanf("%d",&table[i]);
    }
    while(change == 1)
    {
        change = 0;
        for(i = 0;i < n-1;i++)
        {
            if(table[i+1] < table[i])
            {
                int temp = table[i];
                table[i] = table[i+1];
                table[i+1] = temp;
                change = 1;
            }
        }
    }
    
    for(i = 0;i < n;i++)
    {
        printf("Element %d : %d\n",i,table[i]);
    }
    return 0;
}*/

/*Exercice 2
int main()
{
    int i,j,n = 15;
    int table[50];
    for (i = 0;i < 15;i++)
    {
        printf("Entrez une valeur\n");
        scanf("%d",&table[i]);
    }
    for(i = 1;i < n;i++)
    {
        j = i -1;
        while(j >= 0 && table[j] > table[j+1])
        {
            int temp = table[j];
            table[j] = table[j+1];
            table[j+1] = temp;
            j--;
        }
    }
    for(i = 0;i < n;i++)
    {
        printf("Element %d : %d\n",i,table[i]);
    }
    return 0;
}*/

/*Exercice 1
int main()
{
    int i,j,n = 10;
    int table[50];
    for (i = 0;i < 10;i++)
    {
        printf("Entrez une valeur\n");
        scanf("%d",&table[i]);
    }
    for(i = 0;i < n-1;i++)
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
}*/