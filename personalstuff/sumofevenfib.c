#include <stdio.h>
#include <stdlib.h>

int main (){
  int bigsum=2;
  int i=1;
  int sumofall=0;
  //int start=0;                                                                
  //int bigsum=0;                                                               
  // int temp=0;                                                                
  while(bigsum<4000000)
    {
      int temp=bigsum;
      if(bigsum%2==0){
        sumofall+=bigsum;
      }
      bigsum+=i;
      i=temp;

      printf("%d\n", bigsum);
    }

  printf("%d\n", sumofall);


}

