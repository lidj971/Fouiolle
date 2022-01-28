#include <math.h>
#include <stdio.h>
#include <string.h>


int main()
{
    /*Exercice 1 
    int input;
    printf("Entrez un entier\n");
    scanf("%d",&input);
    int i = 0,pow2 = 1;
    while(pow2 <= input)
    {
        pow2 = pow2*2;
        i++;
    }
    printf("%d",i);*/

    //Exercice 2
    //Conversion de decimal a binaire grace a la methode des puissances de 2
    //Debut
    int input,i,pow2;//variable d'entree input type entier et i et pow2 deux varible intermediaire de type entier
    printf("Entrez un entier\n");//Ecrire("Entrez un entier")
    scanf("%d",&input);//Lire(input)
    i = 0;//i <- 0
    pow2 = 1;//pow2 <- 1 on initialise pow a 2^i, i valant 0

    while(pow2 <= input) //Tant Que (pow2 <= input),sers a trouver la plus grande puissance de 2 contenu dans input
    {
        pow2 = pow2*2;//pow2 <- pow2*2
        i++;//i <- i+1
    }
    printf("Binaire de %d = ",input);//Ecrire("Binaire de input = ")
    for(i = i-1;i >= 0 ;i--)//pour i allant de i-1 a 0 faire
    {
        pow2 = pow2 / 2; //pow2 <- pow2 / 2
        if(pow2 <= input)//Si pow2 <= input
        {
            printf("1");//Ecrire("1")
            input -= pow2;//input <- input - pow2
        }else
        {
            printf("0");//Ecrire("0")
        }
    }
    //Fin
   
    /*Exercice 3            
    char input[20];
    printf("Entrez un nombre binaire : ");
    scanf("%s",input);

    int i = strlen(input)-1, inputDec = 0,j = 0;
    while(i >= 0)
    {
        if(input[i] == '1')
        {
            inputDec += pow(2,j);
        }
        i--;
        j++;
    }
    printf("Decimal de %s = %d",input,inputDec);*/

    /*Exercice 4
    char input[20];
    printf("Entrez un nombre binaire : ");
    scanf("%s",input);
    int i = 0;
    while(input[i] != '\0')
    {
        if(input[i] == '1')
        {
            input[i] = '0';
        }else
        {
            input[i] = '1';
        }
        i++;
    }
    printf("%s",input);*/

    /*Exercice 5
    char input[20];
    printf("Entrez un nombre binaire : ");
    scanf("%s",input);

    int i = 0;
    while(input[i] != '\0')
    {
        if(input[i] == '1')
        {
            input[i] = '0';
        }else
        {
            input[i] = '1';
        }
        i++;
    }

    i = strlen(input)-1;

    if(input[i] == '0')
    {
        input[i] = '1';
    }else
    {
        input[i] = '2';
    }

    i--;
    while(input[i] >= 0)
    {
        if(input[i] == '0' && input[i+1] == '2' )
        {
            input[i] = '1';
        }
        else if(input[i] == '1' && input[i+1] == '2')
        {
            input[i] = '2';
        }
        i--;
    }

    i = strlen(input)-1;
    while(input[i] >= 0)
    {
        if(input[i] == '2') 
        {
            input[i] = '0';
        } 
        i--;
    }
    printf("%s",input);*/

    /*Exercice 6 
    int i;
    char input[20];
    while(strlen(input) != 8)
    {
        printf("Entrez un nombre binaire sur 8 positions : ");
        scanf("%s",input);
    }
    if(input[0] == '0')
    {
        printf("Votre nombre est positif");
    }else
    {
        printf("Votre nombre est negatif");
    }*/
    
    /*Exercice 7
    int input = 128;
    while(input > 127 || input < -127)
    {
        printf("Entrez un entier relatif entre -127 et 127\n");
        scanf("%d",&input);
    }
    if(input >= 0)
    {
        int pow2 = 1;
        int i = 0,j = 0;
        while(pow2 <= input)
        {   
            pow2 = pow2*2;
            i++;
        }
        printf("Binaire de %d = ",input);
        for(i = i -1;i >= 0;i--)
        {
        
            int temp = pow(2,i);
            if(temp <= input)
            {
                printf("1");
                input -= temp;
            }else
            {
                printf("0");
            }
            j++;
        }
    }else
    {
        int pow2 = 1;
        int i = 0,j = 0;
        int posInput = -input;
        while(pow2 <= posInput)
        {   
            pow2 = pow2*2;
            i++;
        }
        printf("Binaire de %d = ",input);
        for(j = i -1;j >= 0;j--)
        {
            int temp = pow(2,j);
            
            if(temp <= posInput && j != 0)
            {
                printf("0");
                posInput -= temp;
            }else
            {
                printf("1");
            }
        }
    }*/
    
    /*Exercice 8
    char input[20];
    while(strlen(input) != 8)
    {
        printf("Entrez un nombre binaire relatif\n");
        scanf("%s",&input);
    }

    if(input[0] == '0')
    {
        int i = strlen(input)-1, inputDec = 0,j = 0;
        while(i >= 0)
        {   
            if(input[i] == '1')
            {
                inputDec += pow(2,j);
            }
            i--;
            j++;
        }
        printf("Decimal de %s = %d",input,inputDec);
    }else
    {
        int i = 0;
        printf("Decimal de %s = ",input);
        while(input[i] != '\0')
        {
            if(input[i] == '1')
            {
                input[i] = '0';
            }else
            {
                input[i] = '1';
            }
            i++;
        }
        input[i-1] = '1';
        i = strlen(input)-1;
        int inputDec = 0,j = 0;
        while(i >= 0)
        {
            if(input[i] == '1')
            {
                inputDec += pow(2,j);
            }   
            i--;
            j++;
        }
        printf("%d",-inputDec);
    }*/
    
    return 0;
}
