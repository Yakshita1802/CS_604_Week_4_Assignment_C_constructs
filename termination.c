#include <stdio.h>

int main(void) {

	//TODO: Please replace the three ???s in line 12 so that the loop calculates
	//the sum of all the odd numbers from 1 to 1000 (that is: 1+3+5...+999)
	//You are only allowed to modify the ??? 
	//You may NOT change < to <=.
  int sum = 0;

  /*If condition will check whether the remainder of the number divided by 2 is not equal to 0 or not. If the condition is True, then it is an Odd number
    */

	for(int i = 1;i <=1000 ; i++) {
    if(i%2 != 0){ // Any number that is not divisible by 2 is odd
      
		  sum = sum + i;
    }
  }
	printf("the sum is %d\n", sum);
	return 0;
}