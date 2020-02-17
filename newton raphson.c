


#include<stdio.h>
#include<conio.h>
#include<math.h>

float xi,xr,e, etest, raiz;
float x, f_xi,fprim_xi;


float f_x(float x)
{
    return (2*x*x-x-5);
}

float f_primx(float x)
{
    return (4*x-1);
}

float Newton(float xi, float e)
{
    do
    {
    f_xi=f_x(xi);
    fprim_xi=f_primx(xi);
    xr= xi-(f_xi/fprim_xi);
    etest=(xr-xi);
    xi=xr;
    }
    while(etest>e);
    raiz= xr;

}
int main()
{

    printf("\n Programa que resuelve la funcion 2x^2-x-5 por Newton Raphson");

    printf("\n\n Digite el valor de Xo: ");
    scanf("%f",&xi);
     printf("\n\n Digite el valor del error permitido: ");
    scanf("%f",&e);

  Newton(xi,e);

  printf("\n\n El valor de la raiz es:%f",raiz);

     getch();
     return 0;


}

