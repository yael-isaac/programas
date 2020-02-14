

#include<math.h>
#include<stdio.h>
#include<conio.h>


float  raiz, x0,xr,error, etest, gxr;
float gx(float x);
float puntofijo(float x0, float error);

float fx(float x)
{
     return (exp(-x));
}
float puntofijo(float x0, float error)
{

do{
 xr=fx(x0);
etest=fabs(xr-x0);
x0=xr;}
 while(etest>error);


raiz=xr;
return raiz;

}



int main()
{
    printf("\n Programa que resuelve la funcion e^-x-x por punto fijo");
    printf("\n\n Digite el valor de x0: ");
    scanf("%f",&x0);
    printf("\n\n Digite el error permitido: ");
    scanf("%f",&error);

    puntofijo(x0,error);

    printf("\n\n El valor aproximado de la raiz es:%f",raiz);

    getch();
    return 0;

}
