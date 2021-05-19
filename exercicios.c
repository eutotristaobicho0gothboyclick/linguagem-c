/*''01 -Um  ciclista  treina  em  uma  pista  circular, 
executando  um  movimento  circular  e  uniforme,  
com velocidade  igual  a  x  m/s.
Sendo  o  raio  da  pista  igual  a  y  m,
desenvolva  um  algoritmo  quedetermine  o  valor  da aceleração centrípeta,
com base nos valores x e y digitados pelo usuário. 
Para fins de cálculo, x deve assumir um valor maior ou igual a 10 m/s e y
um valor maior
ou igual a 80 m ''*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

// int main(){
//    setlocale(LC_ALL, "Portuguese");

/*int main()

{
    setlocale(LC_ALL, "Portuguese"); //usa a lingua portuguesa
    float acp, x, y;
    printf("Seja Bem Vindo!\n");
    printf("O objetivo deste programa é calcular a velocidade de um ciclista numa pista circular.\n");
    printf("Informe a velocidade da bicicleta em m/s: ");
    scanf("\n%f", &x);
    printf("Agora informe o raio desta pista circular em metros: ");
    scanf("\n%f", &y);
    printf("\n");
    acp = ((x * x) / y);
    printf("O resultado será de %.1f m/s²\n", acp);

    return 0;
}*/

/*Um  carro  de  corrida  percorre  uma  pista  circular  com  velocidade  constante  de x  km/h
e  aceleração centrípeta de y m/s2.Desenvolva um algoritmo que determine o raio da pista. Para fins de cálculo, 
x deve ser maior ou igual a 180 km/h e y deve ser maior ou igual a 25 m/s.*/

/*int main()
{
    float x, y, S;
    printf("Bem Vindo!\nEsse programa tem como objetivo descobrir o raio da pista de corrida percorrida por um carro");
    printf("Informe a velocidade em KM/H desse veículo de corrida, lembre-se que ele deve ter uma velocidade x>=180: ");
    scanf("%f", &x);
    printf("Agora informe a Aceleração Centrípeda dele(sendo ela y>=25): ");
    scanf("%f", &y);
    y=y*3.6;
    S = ((pow(x, 2)) / y);
    printf("O resultado será %.2f km de raio\n", S);

    return 0;
}*/

/*Desenvolva um algoritmo que determine a área total de n cilindros(com tamanhos diferentes). Utilize a estrutura ENQUANTO.*/

/*int main(){
    char r;
    int n;
    n=0;
    float a,at,al,l,b;
    const float pi=3.141592;
    printf("Bem Vindo!\nEsse programa calcula a área de n cilindros.\nInforme se quer executar esse algoritmo(s/n):");
    scanf("\n%c",&r);
     if (r=='n'){
        printf("você está finalizando o programa\n");
        n=0;
     }
     else{
        n=1;
        while (n!=0){
            printf("Informe o raio da base do cilindro: ");
            scanf("\n%f",&b);
            printf("Agora informe o valor da altura do cilindro:");
            scanf("\n%f",&l);
            a=2*(pow(b,2)*pi);
            al=2*((2*pi)*b*l);
            at=a+al;
            printf("A área do cilindro é: %2f",at);
            printf("Informe se quer executar esse algoritmo(s/n):");
            scanf("\n%c",&r);



        }
     }
    return 0;
}*/

/*Desenvolva um algoritmo que lendo os coeficientes ae b (ambos pertencentes aos Reais),
forme uma função afimque,com base em um valor de xdigitado, determine o valor de y.*/

/*int main()
{
    float a, b, x, y;
    printf("Bem Vindo!\nEsse programa irá calcular o y de uma função afim\nY=A.X+B\nComece informando os valores\nLembre-se que o coeficiente angular a!=0\n");
    printf("Informe o valor do coeficiente angular (a):");
    scanf("\n%f", &a);
    printf("Informe o valor do coeficiente constante (b):");
    scanf("\n%f", &b);
    printf("Agora com os coeficientes da função aplicados informe o valor de x:");
    scanf("\n%f", &x);
    if (a == 0)
    {
        printf("Essa não é uma função!\n\n\n\n");
    }
    else
    {
        y = (a * x) + b;
        printf("O valor de y é: %.2f\n\n\n\n\n", y);
    }
    return 0;
}*/

/*Um plano de ligações telefônicas cobra R$ 0,05 para cada minuto de efetivo uso e seu usuário fez uma recarga de R$ 50,00.
Desenvolva  um  algoritmo  que,  com  base  na  quantidade  de  minutos  utilizados  em  ligações,
 determine o valor total gasto. Ainda,
  considerando que o plano permite passar do valor da recarga e que o usuário pode ficar devendo,
 o programa deve informar se saldo do usuário*/

/*int main(){
    float a,b,c;
    int m;
    printf("Esse programa faz o cálculo da conta da operadora telefônica\n");
    printf("Informe a quantidade de minutos usados:");
    scanf("\n%i",&m);
    printf("Informe o valor recarregado:");
    scanf("\n%f",&a);
    c=m*0.05;
    b=a-c;
    
    if (b<0){
        printf("Você esta devendo a empresa\n");
        b=b*(-1);
        if(b>0.99){
            printf("veja o valor abaixo\n%.2f  reais\n ",b);
        }
        else{
             printf("veja o valor abaixo\n%.2f centavos\n ",b);
        }
    }    
    else{if(b!=0){
        printf("O valor do seu saldo atual é %.2f\n",b);
    }
    }

    return 0;
}*/

/*Desenvolva um algoritmo que imprima a Série de Fibonacci até um termo n,
determine o somatório e produtório dos termos impressos. Utilize a estrutura FAÇA-ENQUANTO.*/

/*int main(){
    int i,n,a,b,c,d,e,f;
    a=0;
    b=1;
    c=0;
    i=0;
    d=0;
    e=1;
    f=1;

    printf("Bem Vindo!\nEsse progrma mostra uma sequência de Fibonacci até um termo que você determinar\n");
    printf("Informe quantas vezes você quer reproduzir essa sequência:");
    scanf("\n%i",&n);
    printf("soma--------produto\n");

    do { //executa pelo menos uma vez
        d=a*b;
        c=a+b;
        a=b;
        b=c;
        i++;
     
     printf("%i-----------%i\n",c,d);
}
while(i!=n);
    return 0;

}*/

/*Desenvolva  um  algoritmo  que  leia  n números inteiros  positivose  determine  quantos são  números primos. 
Utilize a estrutura de repetição PARA*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    int num,c,n,i,cont;
    n=0;
     printf("Esse programa determina quantos numeros sao primos\n");
        printf("Informe um numero maior que 0 para executar:");
        scanf("\n%d",&num);
            while(num>0){
                cont=0;
                for(i=1;i<=num;i++){
                    if(num%i==0){
                        cont++;
                    }
                }
                        if(cont>2){
                            n=0;
                            printf("\nQuantidade de numeros primos:%i\n",n);
                        }
                        else{
                            n=cont/2;
                            printf("\nQuantidade de numeros primos:%i\n",n);
                        }
                    
                
                 printf("\nInforme um numero maior que 0 para executar:");
                 scanf("\n%i",&num);
                
                printf("\nFinalizando\n");
            }
            if (num<=0){
                printf("não foi possível executar\n");
            }
            c==0;
 return 0;
}


/**/



/**/




