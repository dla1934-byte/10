#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main(int argc, char *argv[])
{
  int i;
  int a[SIZE]={1,2,3,4,5}; 
  int b[SIZE]={1,2,3,4,5};
  
  if(a==b)
    printf("�迭�� ���� ���� �����ϴ�.\n");
  
  else
    printf("�迭�� �ٸ� ���� �����ϴ�.\n"); 

  
  system("PAUSE");	
  return 0;
}
