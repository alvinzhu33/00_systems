#include <stdio.h>
#include <stdlib.h>

int main (){
  int before=1;
  int after=2;
  int store;
  int counter=0;
  while(after < 4000000){
    if(after%2 == 0){
      counter+=make;
    }
    store = before;
    before = after;
    after += store;
  }

  printf("%d\n", counter);
  return counter;
}
