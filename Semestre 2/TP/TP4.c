#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

typedef struct point
{
    int x;
    int y;
    char nom;
}point;

point InputCoord();
void printPoint(point input);
double distance(point A,point B);
int confondues(point A ,point B);
char *typeTriangle(point triangle[]);
int confonduesFigures(point figure[] ,int nbPoints);
void swap(int a,int b);
void swapP(int *a,int *b);

int main()
{
    #pragma region Exercice 1
    /*point input;
    input = InputCoord
    printPoint(input);*/
    #pragma endregion

    #pragma region Exercice 2
    /*point A,B;
    A = InputCoord();
    B = InputCoord();

    printPoint(A);
    printPoint(B);
    double dis = distance(A,B);
    printf("distance(%c,%c) = %lf",A.nom , B.nom, dis);*/
    #pragma endregion

    #pragma region Exercice 3
    /*point A,B,C;
    A = InputCoord();
    B = InputCoord();
    C = InputCoord();

    if(confondues(A,B) == TRUE || confondues(A,C) == TRUE|| confondues(B,C) == TRUE)
    {
        printf("certains points se superposent\n");
    }else
    {
        printf("ensemble des points valides\n");
    }*/
    #pragma endregion

    #pragma region Exercice 4
    /*point triangle[3];
    int nbPoints = 3;

    triangle[1] = InputCoord();
    triangle[2] = InputCoord();
    triangle[3] = InputCoord();

    while(confonduesFigures(triangle,nbPoints) > 0)
    {
        printf("certains points se superposent\n");
        triangle[1] = InputCoord();
        triangle[2] = InputCoord();
        triangle[3] = InputCoord();
    }

    printf("Triangle %s",typeTriangle(triangle));*/
    
    #pragma endregion

    #pragma region Exercice 5
    /*point figure[4];
    int nbPoints;
    printf("Entrez le nombre de points de la figure : ");
    scanf("%d",&nbPoints);

    while(nbPoints > 4 || nbPoints < 0)
    {
        printf("Entrez le nombre de points de la figure : ");
        scanf("%d",&nbPoints);
    }
    
    int i;
    for(i = 0;i < nbPoints;i++)
    {
        figure[i] = InputCoord();
    }
    int nbPointsDiff = nbPoints - confonduesFigures(figure,nbPoints);
    if(nbPointsDiff == 4)
    {
        printf("C'est un quadrilatere");
    }else if(nbPointsDiff == 3 )
    {
        printf("C'est un triangle %s",typeTriangle(figure));
    }else if(nbPointsDiff == 2)
    {
        printf("C'est un segment");
    }else if(nbPointsDiff == 1)
    {
        printf("C'est un point");
    }*/
    
    
    #pragma endregion

    #pragma region Exercice 6
    /*
    int input;
    int *p = &input;
    printf("Entrez un entier :");
    scanf("%d",p);
    printf("%d",*p);*/

    #pragma endregion

    #pragma region Exercice 7
    /*int a,b;
    printf("Entrez un entier : ");
    scanf("%d",&a);
    printf("Entrez un entier : ");
    scanf("%d",&b);
    swap(a,b);
    printf("a = %d b = %d",a,b);*/

    #pragma endregion

    #pragma region Exercice 8
    /*int a,b;
    printf("Entrez un entier : ");
    scanf("%d",&a);
    printf("Entrez un entier : ");
    scanf("%d",&b);
    swapP(&a,&b);
    printf("a = %d b = %d",a,b);*/

    #pragma endregion

}

point InputCoord()
{
    point temp;
    printf("Entrez le nom du point : ");
    scanf(" %c",&temp.nom);
    printf("Entrez le x du point : ");
    scanf("%d",&temp.x);
    printf("Entrez le y du point : ");
    scanf("%d",&temp.y);
    return temp;
}

void printPoint(point input)
{
    printf("%c(%d , %d)\n",input.nom,input.x,input.y);
}

double distance(point A,point B)
{
    double a = B.x - A.x,b = B.y - A.y;
    double res = sqrt(pow(a,2)+pow(b,2));
    return res;
}

int confondues(point A ,point B)
{
    if(A.x == B.x && A.y == B.y)
    {
        return TRUE;
    }else 
    {
        return FALSE;
    }
}

int rectangle(point triangle[])
{
    point A = triangle[1];
    point B = triangle[2];
    point C = triangle[3];
    
    double sommeCar = pow(distance(A,B),2)+pow(distance(B,C),2);
    double carHypo = pow(distance(A,C),2);
    if(sommeCar == carHypo)
    {
        return TRUE
    }
    double sommeCar = pow(distance(A,C),2)+pow(distance(B,C),2);
    double carHypo = pow(distance(A,B),2);
    if(sommeCar == carHypo)
    {
        return TRUE
    }
    double sommeCar = pow(distance(A,B),2)+pow(distance(A,C),2);
    double carHypo = pow(distance(B,C),2);
    if(sommeCar == carHypo)
    {
        return TRUE
    }
    return FALSE
}

char *typeTriangle(point triangle[])
{
    point A = triangle[1];
    point B = triangle[2];
    point C = triangle[3];

    double sommeCar = pow(distance(A,B),2)+pow(distance(B,C),2);
    double carHypo = pow(distance(A,C),2);

    if(distance(A,B) == distance(B,C) && distance(A,B) == distance(A,C))
    {
        return "equilateral";
    }else if(distance(A,B) == distance(B,C) || distance(A,B) == distance(A,C) || distance(B,C) == distance(A,C) && rectangle(triangle) == TRUE)
    {
        return "rectangle isocele";
    }else if(distance(A,B) == distance(B,C) || distance(A,B) == distance(A,C) || distance(B,C) == distance(A,C))
    {
        return "isocele";
    }else if(rectangle(triangle) == TRUE)
    {
        return "rectangle";
    }
    else
    {
        return "quelconque";
    }
}

int confonduesFigures(point figure[] ,int nbPoints)
{
    int i,res = 0;
    for(i = 0;i < nbPoints;i++)
    {
        int j;
        for(j = i+1;j < nbPoints;j++)
        {
            if(figure[i].x == figure[j].x && figure[i].y == figure[j].y)
            {
                res++;
                j = nbPoints;
            }
        }
    }
    return res;
}
void swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapP(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
