
#include<stdio.h>
#include<conio.h>

float xl,xu,e,xr,raiz;
float calculo1,calculo2,e_test;
float  fxl, fxu,fxr;

float fx(float x);
float falpos(float xl, float xu, float e );


float fx(float x)
{
    return(x*x*x+4*x*x-10);

}

float falpos(float xl, float xu, float e)
{


e_test=(xr-xl);
do
{


fxl=fx(xl);
fxu=fx(xu);
xr=xl-fxl*((xu-xl)/(fxu-fxl));
fxr=fx(xr);


calculo1=fxl*fxr;
calculo2=fxu*fxr;

e_test=((xr-xl)/xr);


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








int main ()
{
    printf("\n\tMetodo de falsa posicion para la funcion x3+4x2-10");

    printf("\nEvalue la funcion");

    printf("\n Desde: ");
    scanf("%f",&xl);
    printf("\n Hasta: ");
    scanf("%f",&xu);

    printf("\n Con un error de: ");
    scanf("%f",&e);

falpos(xl,xu,e);


printf("\n\nEL valor de la raiz es aproximadamente:%f",raiz);

getch();
return 0;





}
