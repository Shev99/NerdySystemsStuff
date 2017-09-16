# include <stdio.h> 
int main(){

  printf("The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is ... \n");
  int n,m;
  n = 20;
  m = 1;
  while (n > 1){
    if (m%n != 0){
      m++;
      n = 20;
    }
    else n--; 
  }
  printf(" %d \n", m);
  return 0;

}
