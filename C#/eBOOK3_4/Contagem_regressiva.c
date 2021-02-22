#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleTitle("Contagem Regressiva");
    int sec;
    int min;
    system("cls");
    printf("\n Digite os Minutos: ");
    scanf("%d",&min);
    printf("\n Digite os Segundos: ");
    scanf("%d",&sec);
    printf("Contagem Regressiva de %d segundos!\n\n", sec);
   while(sec>0)
   {
             
       printf("%dm:%ds",min,sec);
       Sleep(1000);
       system("cls");
       
    sec--;
              
    if(min==0)
    {
        sec=59;
    }      
    if(sec==0)
    {
        sec=0;
        min--;
    }
           
    }
    printf("0m:0s");

}