

#include<math.h>
#include<stdio.h>
#include<conio.h>


float  raiz, x0,xr,error, etest, gxr;

float gx(float x)
{
     return sqrt((5+x)/2);
}
float puntofijo(float x0, float etest)
{
    do
    xr= gx(x0);
    while(etest>error);
    gxr=gx(xr);

    etest=fabs(xr-gxr);

    raiz= gxr;
}



int main()
{
    printf("\n Programa que resuelve la funcion 2X^2-x-5 por punto fijo");
    printf("\n\n Digite el valor de x0: ");
    scanf("%f",&x0);
    printf("\n\n Digite el error permitido: ");
    scanf("%f",&error);
    puntofijo(x0,error);
    printf("\n\n El valor aproximado de la riz es:%f",raiz);

    getch();
    return 0;

}



