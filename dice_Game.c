#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int x,y;
  int Total;
  char name[50];

  srand(time(NULL));
  x=(rand() %6 +1);
  y=(rand() %6 +1);

  Total  = x+y;
  printf("What is your name?\n");
  scanf("%s",name);

  printf("> %s\n",name);
  printf("Hello, %s!\n",name);
  printf("Rolling dice...\n");
  printf("Die1: %d\n",x);
  printf("Die2: %d\n",y);

  printf("Total value: %d\n",Total);
return 0;
}
  
