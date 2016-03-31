#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

double suma(double a, double b);
double resta(double a, double b);
double multiplicacion(double a, double b);
double division(double a, double b);
double factorial(double a);


double suma(double operando1, double operando2)
{
    double total;

    total=operando1+operando2;

    return total;
}//saca la suma entre el 1er operando y el segundo


double resta(double operando1, double operando2)
{
    double total;

    total=operando1-operando2;

    return total;
}//saca la resta entre el 1er operando y el segundo


double division(double operando1, double operando2)
{
    if(operando2==0)
        {
            printf("\nError, no se puede dividir por 0\n");
            return 0;
        }

    double total;

    total=operando1/operando2;

    return total;
}//saca la división entre el 1er operando y el segundo


double multiplicacion(double operando1, double operando2)
{
    double total;

    total=operando1*operando2;

    return total;
}//saca la multiplicasión entre el 1er operando y el segundo


double factorial(double operando1)
{
    double i, total=1;

    for(i=1;i<=operando1;i++)
    {
        total=total*i;
    }

    return total;
}//Saca el factorial de un numero

#endif // FUNCIONES_H_INCLUDED


