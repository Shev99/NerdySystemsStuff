# include <stdio.h>
int main(){

  printf("The 1001st prime number is...");

  int divisor;
  int counter = 1;
  int ans = 1;
  
  while (counter <= 10001){
    ans++;
    divisor = 2;
    while (divisor <= ans/2){
      if (ans%divisor == 0){
	counter--;
	break;
      }
      else divisor ++; 
    }
    counter++;
    
  }

  printf("%d \n", ans);

}
