#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='S';
    int opcion=0, flag=0, flag1=0;
    double operando1=0, operando2=0;

    while(seguir=='S')
    {
            printf("1- Ingresar 1er operando (A=%.2f)\n",operando1);
            printf("2- Ingresar 2do operando (B=%.2f)\n",operando2);
            printf("3- Calcular la suma (A+B)\n");
            printf("4- Calcular la resta (A-B)\n");
            printf("5- Calcular la division (A/B)\n");
            printf("6- Calcular la multiplicacion (A*B)\n");
            printf("7- Calcular el factorial (A!)\n");
            printf("8- Calcular todas las operacione\n");
            printf("9- Salir\n\n");
            printf("Ingrese una opcion: ");
            scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

                   printf("\n\nIngrese el primer operando:  ");
                   scanf ("%lf",&operando1);
                   flag=1;
                   break;

            case 2:

                   printf("\n\nIngrese el segundo operando: ");
                   scanf ("%lf",&operando2);
                   flag1=1;
                   break;

            case 3:
                   if(flag&&flag1)
                   {

                        printf("\n%.2lf + %.2lf = %.2lf\n", operando1, operando2, suma(operando1,operando2));
                   }

                   else if(flag)
                        printf("Debe ingresar el segundo operando\n\n");

                   else if(flag1)
                        printf("Debe ingresar el primer operando\n\n");

                   break;

            case 4:
                   if(flag&&flag1)
                        printf("\n%.2lf - %.2lf = %.2lf\n", operando1, operando2, resta(operando1,operando2));

                   else if(flag)
                        printf("Debe ingresar el segundo operando\n\n");

                   else if(flag1)
                        printf("Debe ingresar el primer operando\n\n");

                   break;

            case 5:
                   if(flag&&flag1)
                        printf("\n%.2lf / %.2lf = %.2lf\n", operando1, operando2, division (operando1,operando2));

                   else if(flag)
                        printf("Debe ingresar el segundo operando\n\n");

                   else if(flag1)
                        printf("Debe ingresar el primer operando\n\n");

                   break;

            case 6:
                   if(flag&&flag1)
                        printf("\n%.2lf x %.2lf = %.2lf\n", operando1, operando2, multiplicacion (operando1,operando2));

                   else if(flag)
                        printf("Debe ingresar el segundo operando\n\n");

                   else if(flag1)
                        printf("Debe ingresar el primer operando\n\n");

                   break;

            case 7:
                   if(flag)
                        printf("\n%.0lf! = %.0lf\n\n", operando1, factorial (operando1));

                   else if(flag1)
                        printf("Debe ingresar el primer operando\n\n");

                   break;
            case 8:
                   if(flag && flag1)
                   {
                        printf("\n%.2lf + %.2lf = %.2lf\n", operando1, operando2, suma(operando1,operando2));

                        printf("\n%.2lf - %.2lf = %.2lf\n", operando1, operando2, resta(operando1,operando2));

                        printf("\n%.2lf / %.2lf = %.2lf\n", operando1, operando2, division (operando1,operando2));

                        printf("\n%.2lf x %.2lf = %.2lf\n", operando1, operando2, multiplicacion (operando1,operando2));

                        printf("\n%.0lf! = %.0lf\n\n", operando1, factorial (operando1));
                   }

                   else if(flag)
                        printf("Debe ingresar el segundo operando\n\n");

                   else if(flag1)
                        printf("Debe ingresar el primer operando\n\n");

                   break;

            case 9:
                    seguir = 'n';


        }//Fin switch

        system("pause");
        system("cls");

    }//Fin while
    return 0;
}//Fin main

