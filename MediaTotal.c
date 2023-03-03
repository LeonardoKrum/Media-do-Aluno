#include  
#include <stdio.h>
2 - int main(int argc, char const *argv[]){
3 -     float p1, p2, p3, media = 0.0;
4 -
5 -     printf("Digite a nota 1\n");
6 -     scanf("%f", &p1);
7 -     printf("Digite a nota 2\n");
8 -     scanf("%f", &p2);
9 -     printf("Digite a nota 3\n");
10 -   scanf("%f", &p3);
11 -
12 -   media = (p1+p2+p3)/3;
13 -   printf("Média calculada %f\n", media);
14 -
15 -   if(media < 5){
16 -        printf("Reprovado\n");
17-    }
18 -   if(media >= 5 && media<=6.9){
19 -         printf("Recuperação\n");
20 -   }
21 -   if(media > 7){
22 -          printf("Aprovado\n");
23 -   }
24 -
25 -   return 0;
26 - } 
