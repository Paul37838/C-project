#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number;

   int array[4];
   array[0] = 20;
   array[1] = 30;
   array[2] = 40;
   array[3] = 50;

   if(array[0] > 21){
        printf("not up to 20");
   }
   else if(array[0] < 21){
       printf("up to 20");
   }
   else{
    while(array[0] > 22){
        printf("%d",number);
        array[0]++;
    }
   }
return 0;
}
