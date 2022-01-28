#include <stdio.h>
#include <math.h>

double somme(double tab[],int taille);
double moyenne(double tab[],int taille);
double min(double tab[],int taille);
double max(double tab[],int taille);
double variance(double tab[],int taille);
double ecart_type(double tab[],int taille);
double polynome(int coefs[],int nbCoefs,double x);
double derivee(int coefs[],int nbCoefs,double x);
double primitive(int coefs[],int nbCoefs,double x);
double racineCarre(int A);

int main()
{
    #pragma region Exercice 1
    /*int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d",&taille);
    double tab[100];
    int i;    
    for(i = 0;i < taille ;i++)
    {
        printf("Entrez un reel : ");
        scanf("%lf",&tab[i]);
    }
    double som = somme(tab,taille);
    printf("La somme est : %lf",som);*/
    #pragma endregion

    #pragma region Exercice 2
    /*int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d",&taille);
    double tab[100];
    int i;    
    for(i = 0;i < taille ;i++)
    {
        printf("Entrez un reel : ");
        scanf("%lf",&tab[i]);
    }
    double moy = moyenne(tab,taille);
    printf("La moyenne est : %lf",moy);*/
    #pragma endregion

    #pragma region Exercice 3
    /*int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d",&taille);
    double tab[100];
    int i;    
    for(i = 0;i < taille ;i++)
    {
        printf("Entrez un reel : ");
        scanf("%lf",&tab[i]);
    }

    printf("Valeur max : %lf \nValeur min : %lf",max(tab,taille),min(tab,taille));*/
    #pragma endregion

    #pragma region Exercice 4
    /*int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d",&taille);
    double tab[100];
    int i;    
    for(i = 0;i < taille ;i++)
    {
        printf("Entrez un reel : ");
        scanf("%lf",&tab[i]);
    }

    printf("Variance : %lf \nEcart-type : %lf",variance(tab,taille),ecart_type(tab,taille));*/
    #pragma endregion

    #pragma region Exercice 5
    /*int degre;
    printf("Entrez le degre du tableau : ");
    scanf("%d",&degre);
    int nbCoefs = degre + 1;
    int coefs[100];
    int i;    
    for(i = 0;i < nbCoefs ;i++)
    {
        printf("Entrez un coef : ");
        scanf("%d",&coefs[i]);
    }
    double x;
    printf("Entrez la valeur x : ");
    scanf("%lf",&x);
    printf("Le polynome est egal a : %lf",polynome(coefs,nbCoefs,x));*/
    #pragma endregion

    #pragma region Exercice 6
    /*int degre;
    printf("Entrez le degre du tableau : ");
    scanf("%d",&degre);
    int nbCoefs = degre + 1;
    int coefs[100];
    int i;    
    for(i = 0;i < nbCoefs ;i++)
    {
        printf("Entrez un coef : ");
        scanf("%d",&coefs[i]);
    }
    double x;
    printf("Entrez la valeur x : ");
    scanf("%lf",&x);
    printf("La derivee du polynome est egal a : %lf",derivee(coefs,nbCoefs,x));*/
    #pragma endregion

    #pragma region Exercice 7
    /*int degre;
    printf("Entrez le degre du tableau : ");
    scanf("%d",&degre);
    int nbCoefs = degre + 1;
    int coefs[100];
    int i;    
    for(i = 0;i < nbCoefs ;i++)
    {
        printf("Entrez un coef : ");
        scanf("%d",&coefs[i]);
    }
    double x;
    printf("Entrez la valeur x : ");
    scanf("%lf",&x);
    printf("La primitive du polynome est egal a : %lf",primitive(coefs,nbCoefs,x));*/
    #pragma endregion

    #pragma region Exercice 8
    /*int A;
    printf("Entrez un nombre : ");
    scanf("%d",&A);
    printf("Racine carre de %d = %lf",A,racineCarre(A));*/
    #pragma endregion


}

double somme(double tab[],int taille)
{
    int i;
    double res = 0;
    for(i = 0;i < taille;i++)
    {
        res += tab[i];
    }
    return res;
}

double moyenne(double tab[],int taille)
{
    double res;
    res = somme(tab,taille)/taille;
    return res;
}

double min(double tab[],int taille)
{
    int i;
    double res = tab[0];
    for(i = 0;i < taille;i++)
    {
        if(tab[i] < res)
        {
            res = tab[i];
        }
    }
    return res;
}

double max(double tab[],int taille)
{
    int i;
    double res = tab[0];
    for(i = 0;i < taille;i++)
    {
        if(tab[i] > res)
        {
            res = tab[i];
        }
    }
    return res;
}

double variance(double tab[],int taille)
{
    double x = moyenne(tab,taille);
    int i;
    double res = 0;
    for(i = 0;i < taille;i++)
    {
        res += tab[i]*tab[i];
    }
    res = res/taille;
    res = res - x*x;
    return res;
}

double ecart_type(double tab[],int taille)
{
    double res = variance(tab,taille);
    res = sqrt(res);
    return res;
}

double polynome(int coefs[],int nbCoefs,double x)
{
    int i;
    double res = 0;
    for(i = 0;i < nbCoefs;i++)
    {
        res += coefs[i]*pow(x,i);
    }
    return res;
}

double derivee(int coefs[],int nbCoefs,double x)
{
    int n;
    double res = 0;
    for(n = 0;n < nbCoefs;n++)
    {
        res += coefs[n]*n*pow(x,n-1);
    }
    return res;
}

double primitive(int coefs[],int nbCoefs,double x)
{
    int n;
    double res = 0;
    for(n = 0;n < nbCoefs;n++)
    {
        res += ((1 / (double)(n + 1)) * pow(x,n + 1));
    }
    return res;
}

double racineCarre(int A)
{
    int i,rang = 0;
    double s = 0;
    double sm;
    while(A-s*s>0)
    {
        sm = s;
        s++;
    }
    if(A-s*s == 0)
    {
        return s;
    }
    s = sm;
    while(A-s*s != 0 && rang < 9)
    {
        int i = 0;
        while(A-s*s > 0 && i < 9)
        {
            sm = s;
            s += (1.0/pow(10,rang));
            i++;
        }
        s = sm;
        rang++;
    } 
    return s;
}
