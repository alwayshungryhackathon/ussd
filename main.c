
#include <stdio.h>
#include <stdlib.h>
/*This is our basic idea for the USSD program*/
int main()
{
  int answer;
  printf("Are you a service provider or a service seeker:\n 1. Service Provider\n 2. Service Seeker\n");
  scanf("%d", &answer);
  if(answer == 1){
    printf("\nHave you registered with AlwaysHungry?\n\1. Yes\n\2. No\n");
    scanf("%d", &answer);
  }
  if(answer == 2){
    printf("");
   }
   return 0;
}
