#include <stdio.h>

//Exercice 4
int main()
{
    int n;
    double x,y = 0;
    double coeffs[101];
    printf("Entrez n\n");
    scanf("%d",&n);
    printf("Entrez x\n");
    scanf("%lf",&x);
    printf("Entrez les coeffs");
    int i;
    for(i = 0;i < n;i++)
    {
        scanf("%lf",&(coeffs[i]));
    }
    y = coeffs[n-1];
    for(i = n-1;i >=0;i--)
    {
        y = y* x + coeffs[i];
    }
    printf("%lf",y);
    
}
/*
int main()
{
    int i;
    double addCoeffs = 0,addNotes = 0,moyennePond;
    for(i = 0;i < 10;i++)
    {
        double note;
        printf("Entrez une note\n");
        scanf("%lf",&note);
        if(note >= 12)
        {
            addNotes += note * 2; 
            addCoeffs += 2;
        }else
        {
            addNotes += note;
            addCoeffs += 1;
        }
    }
    moyennePond = addNotes / addCoeffs;
    printf("%lf",moyennePond);
}*/
/*Exercice 2
int main()
{
    int n;
    double x,result;
    printf("Entrez n\n");
    scanf("%d",&n);
    printf("Entrez x\n");
    scanf("%lf",&x);
    result = 1;
    int i;
    for(i = 0;i < n;i++)
    {

        double temp = -x;
        int j;
        for(j = 0;j < i;j++)
        {
            temp *= -x;
        }
        result += temp;

    }
    printf("%lf",result);
}
*/


/*Exercice 2
int main(
{
    int n = 0,nbInf = 0,nbSup = 0;
    double moyenneInf = 0,moyenneSup = 0;
    printf("Entrez le nombre de valeurs\n");
    scanf("%d",&n);
    int i;
    for(i = 0;i < n; i++)
    {
        double temp;
        printf("Entrez une valeure\n");
        scanf("%lf",&temp);
        if(temp > 0)
        {
            moyenneSup += temp;
            nbSup ++;
        }else
        {
            moyenneInf += temp;
            nbInf++;
        }
    }
    moyenneInf /= nbInf;
    moyenneSup /= nbSup;
    printf("Inf = %lf Sup = %lf",moyenneInf,moyenneSup);
}*/