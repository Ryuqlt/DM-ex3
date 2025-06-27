#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int x,y;
  int Total;

  srand(time(NULL));
  x=(rand() %6 +1);
  y=(rand() %6 +1);

  Total  = x+y;

  printf("Rolling dice...\n");
  printf("Die1: %d\n",x);
  printf("Die2: %d\n",y);

  printf("Total value: %d\n",Total);
return 0;
}
