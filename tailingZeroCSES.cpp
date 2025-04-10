#include <stdio.h>
#include <math.h>

int main(){
  int n;
  scanf("%d",&n );
  int sum = 0;
  int i = 1;
  while(n >= pow(5,i)){
    sum += n / pow(5,i);
    i++;
  }
  printf("%d", sum);
  
  return 0;
}