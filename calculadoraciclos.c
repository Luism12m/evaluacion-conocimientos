#include <stdio.h>

int suma(int x, int y);
int resta(int x, int y);
int multiplicacion(int x, int y);
float division(int x, int y);


int main(void)
/*se definen las operaciones y los numeros aqui:*/
{
  int a = 15;
  int b = 5;
  int operacion = 1;
  /*realizar la operacion correspondiente:*/

  switch (operacion)
    {
    case 1:
      printf("La suma es: %i\n",suma(a,b));
      break;

    case 2:
      printf("La resta es: %i\n",resta(a,b));
      break;

    case 3:
      printf("La multiplicacion es: %i\n",multiplicacion(a,b));
      break;
      
      case 4:
	if (b == 0)
	  {
	    printf("error: division por cero\n");
	  }
	else
	  {
	    printf("La division es: %.2f\n",division(a,b));
	  }
      break;

    default:
      printf("opcion no valida\n");
    }
  return(0);
}


/*definicion de las funciones de cada operacion*/

int suma(int x, int y)
{
  return (x + y);
}

int resta(int x, int y)
{
  return (x - y);
}

int multiplicacion(int x, int y)
{
  return (x * y);
}

float division(int x, int y)
{
  return (float)x / y;
}
