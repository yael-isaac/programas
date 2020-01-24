



#include<stdio.h>
#include<conio.h>

float xl,xu,e,xr,raiz;
float calculo1,calculo2,e_test;
float  fxl, fxu,fxr;

float fx(float x);
float biseccion(float xl, float xu, float e );


float fx(float x)
{
    return(x*x*x+4*x*x-10);

}

float biseccion(float xl, float xu, float e)
{

e_test=(xu-xl)/2;
while(e_test>e)
{


fxl=fx(xl);
fxu=fx(xu);
xr=(xl+xu)/2;
fxr=fx(xr);
e_test=(xu-xl)/2;



calculo1=fxl*fxr;
calculo2=fxu*fxr;



    if(calculo1>0&&calculo2<0)
        {
            xl=xr;
        }
    if(calculo1<0&&calculo2>0)
        {
            xu=xr;
        }
e_test=(xu-xl)/2;

printf("\nEL valor del error es:%f",e_test);
}
raiz=xr;

return raiz;
}








int main ()
{
    printf("\n\tMetodo de biseccion para la funcion x3+4x2-10");

    printf("\nEvalue la funcion");

    printf("\n Desde: ");
    scanf("%f",&xl);
    printf("\n Hasta: ");
    scanf("%f",&xu);

    printf("\n Con un error de: ");
    scanf("%f",&e);

biseccion(xl,xu,e);


printf("\n\nEL valor de la raiz es aproximadamente:%f",raiz);

getch();
return 0;





}
