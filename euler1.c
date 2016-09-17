#include <stdio.h>
#include <stdlib.h>

int main(){
  int x;
  int ans = 0;
  for( x = 1; x < 1000; x++){
    if( x%3 == 0 || x%5 ==0 ){
      ans+=x;
    }
  }
  printf("%d\n",ans);
  return ans;
}
