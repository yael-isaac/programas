

#include<stdio.h>
#include<conio.h>

float x, xl, xu, xr, raiz, e;
float e_test;
float fxl, fxu, fxr;
float calculo1, calculo2;
float fx(float x);
float falsapos (float xl,float xu, float e);


float fx(float x)
{
return (x*x*x+4*x*x-10);

}


float falsapos (float xl,float xu, float e)

{
e_test=(xr-xl);
 do
 {


 fxl=fx(xl);
 fxu=fx(xu);
 xr= xu-fxu*((xu-xl)/(fxu-fxl));
 fxr= fx(xr);

calculo1=fxl*fxr;
calculo2=fxu*fxr;

 e_test=(xr-xl)/xr;

 if(calculo1>0&&calculo2<0)
{

     xl=xr;

 }

 if(calculo1<0&&calculo2>0)
 {
     xu=xr;
 }



 }while(e_test>e);

 raiz=xr;

 return raiz;



}



int main()
{
 printf("\n Metodo de falsa posicion para la ecuacion x3+4x2-10");

printf("\nEvalue la funcion");

    printf("\n Desde: ");
    scanf("%f",&xl);
    printf("\n Hasta: ");
    scanf("%f",&xu);

    printf("\n Con un error de: ");
    scanf("%f",&e);

falsapos(xl,xu,e);


printf("\n\nEL valor de la raiz es aproximadamente:%f",raiz);

getch();
return 0;



}

