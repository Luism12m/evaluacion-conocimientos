#include <stdio.h>

int suma(int x, int y); /*prototipos de la funcion para evitar fallas de compilacion*/
int resta(int x, int y);
int multiplicacion(int x, int y);
float division(int x, int y);

/*definicion main o funcion principal*/
int main()
{
  int a = 100;
  int b = 500;
  printf("La calculadora recibe el numero : %i y el numero :%i\n",a ,b);
  printf("La Suma es: %i\n", suma(a,b));
  printf("La Resta es: %i\n" , resta(a,b));
  printf("La Multiplicacion es: %i\n", multiplicacion(a,b));
  printf("La Division es: %.1f\n", division(a,b));
  return (0);
}


/*definicion de las funciones*/ 
int suma(int x,int y)
{
  
   return ( x + y); 
}
int resta(int x,int y)
{
  
   return ( x - y); 
}
int multiplicacion(int x,int y)
{
  
   return ( x * y); 
}
float division(int x,int y)
{
 if (y == 0)
   {
    printf("Error: Division por cero\n");
    return 0; /*O manejar el error de otra manera*/
  }
  
 return (float) x / y; 
}
