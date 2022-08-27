  /* Operações aritméticas básicas */
  
  #include <stdio.h>
  
  int main () {
    int a, b;
     
   printf("A: ");
   scanf("%d", &a);

   printf("B: ");
   scanf("%d", &b);

   printf("\n");
   printf("%d + %d = %d\n", a, b, (a+b));
   printf("%d - %d = %d\n", a, b, (a-b));
   printf("%d * %d = %d\n", a, b, (a*b));
   printf("%d / %d = %d\n", a, b, (a/b));
   printf("%d %% %d = %d\n", a, b, (a%b));
   printf("(float)%d / %d = %.2f\n", a, b, (float)a/b);
   
   return(0);
 }
