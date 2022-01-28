#include <stdio.h>
#include <string.h>
#include <conio.h>  

int main()
{
    char seqAdn[21] = "ATCGTCGATCGAATCGGTCA",temp; 
    int i,A = 0,T = 0,C = 0,G = 0,right = strlen(seqAdn)-1;
    for(i = 0;i < right;i++)
    {
        
        temp = seqAdn[i];
        seqAdn[i] = seqAdn[right];
        seqAdn[right] = i;
        right--; 
    }
    printf("%s\n %c",seqAdn,seqAdn[1]);
    printf("A %d T %d C %d G %d",A,T,C,G);
    getch();  
}