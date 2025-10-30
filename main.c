#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main(int argc, char *argv[])
{
  int i;
  int a[SIZE]={1,2,3,4,5}; 
  int b[SIZE]={1,2,3,4,5};
  
  if(a==b)
    printf("배열은 같은 값을 가집니다.\n");
  
  else
    printf("배열은 다른 값을 가집니다.\n"); 

  
  system("PAUSE");	
  return 0;
}
