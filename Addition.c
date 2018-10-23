#include <stdio.h>
 
int main(void)
{
  int number_0;
  int number_1;
  int addition;
  
  printf("Enter first number : ");
  scanf("%d", &number_0);
  
  printf("Enter second number : ");
  scanf("%d", &number_1);

  addition = number_0 + number_1;
  printf("Addition of given numbes is : %d", addition);
  
  return 0;
}
