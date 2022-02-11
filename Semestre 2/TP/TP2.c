#include <math.h>
#include <stdio.h>
#include <string.h>

#define NEG 1
#define POS 0


int nbPosBin(int x);
char *numBin(int x);
int numDec(char*s);
char *swap(char*s);
char *compA2(char *s);
int signeBin(char *s);
char *relToBin(int x);
int Base10(char *s);

int main()
{
    #pragma region Exercice 1
    /*
    int input;
    printf("Entrez un entier\n");
    scanf("%d",&input);
    int nbPos = nbPosBin(input);
    printf("%d",nbPos);*/
    #pragma endregion

    #pragma region Exercice 2
    /*int input,i = 0,essai = 1;
    char *inputBin;
    printf("Entrez un entier\n");
    scanf("%d",&input);
    int nbPos = nbPosBin(input);
    inputBin = numBin(input);
    printf("Binaire de %d = ",input);
    printf("%s",inputBin);*/
    #pragma endregion

    #pragma region Exercice 3
    /*
    char input[20];
    int inputDec;
    printf("Entrez un nombre binaire");
    scanf("%s",input);
    inputDec = numDec(input);
    printf("Decimal de %d = ",input,inputDec);*/
    #pragma endregion

    #pragma region Exercice 4
    /*int i;
    char input[20];
    printf("Entrez un nombre binaire : ");
    scanf("%s",input);
    char *inputSwap = swap(input);
    printf("%s",inputSwap);*/
    #pragma endregion

    #pragma region Exercice 5
    /*int i;
    char input[20];
    printf("Entrez un nombre binaire : ");
    scanf("%s",input);
    char *inputSwap = compA2(input);
    printf("%s",inputSwap);*/
    #pragma endregion

    #pragma region Exercice 6
    /*int i;
    char input[20];
    while(strlen(input) != 8)
    {
        printf("Entrez un nombre binaire sur 8 positions : ");
        scanf("%s",input);
    }
    if(signeBin(input) == POS)
    {
        printf("Votre nombre est positif");
    }else
    {
        printf("Votre nombre est negatif");
    }*/
    #pragma endregion
    
    #pragma region Exercice 7
    /*int input = 128;
    while(input > 127 || input < -127)
    {
        printf("Entrez un entier relatif entre -127 et 127\n");
        scanf("%d",&input);
    }
    
    char * inputBin = relToBin(input);
    printf("%s",inputBin);*/
    #pragma endregion
    
    #pragma region Exercice 8
    /*char input[20];
    while(strlen(input) != 8)
    {
        printf("Entrez un nombre binaire relatif\n");
        scanf("%s",&input);
    }
    
    int inputDec = Base10(input);
    printf("%d",inputDec);*/
    #pragma endregion
    
    return 0;
}

int nbPosBin(int x)
{
    int i = 0,pow2 = 1;
    while(pow2 <= x)
    {
        pow2 = pow2*2;
        i++;
    }
    return i;    
}

char *numBin(int x)
{
    int i,j = 0;
    static char r[20];
    for(i = nbPosBin(x)-1;i >= 0;i--)
    {
        int temp = pow(2,i);
        if(temp <= x)
        {
            r[j] = '1';
            x -= temp;
        }else
        {
            r[j] = '0';
        }
        j++;
    }
    return r;
}

int numDec(char *s)
{
    int i = strlen(s)-1, r = 0,j = 0;
    while(i >= 0)
    {
        if(s[i] == '1')
        {
            r += pow(2,j);
        }
        i--;
        j++;
    }
    return r;
}

char *swap(char *s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == '1')
        {
            s[i] = '0';
        }else
        {
            s[i] = '1';
        }
        i++;
    }
    return s;
}

char *compA2(char *s)
{
    char *r = swap(s);
    int i = strlen(r)-1;

    if(r[i] == '0')
    {
        r[i] = '1';
    }else
    {
        r[i] = '2';
    }

    i--;
    while(r[i] >= 0)
    {
        if(r[i] == '0' && r[i+1] == '2' )
        {
            r[i] = '1';
        }
        else if(r[i] == '1' && r[i+1] == '2')
        {
            r[i] = '2';
        }
        i--;
    }

    i = strlen(r)-1;
    while(r[i] >= 0)
    {
        if(r[i] == '2') 
        {
            r[i] = '0';
        } 
        i--;
    }
    return r;
}

int signeBin(char *s)
{
    if(s[0] == '1')
    {
        return NEG;
    }else
    {
        return POS;
    }
}

char *relToBin(int x)
{
    if(x >= 0)
    {
        return numBin(x);
    }else
    {
        char *r;
        r = compA2(numBin(-x));
        return r;
    }
}

int Base10(char *s)
{
    if(signeBin(s) == POS)
    {
        return numDec(s);
    }else
    {
        char * r = compA2(s);
        return -numDec(r);
    }
}
