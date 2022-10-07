#include <stdio.h>


int main(void) {
	char original[11];
	printf("Please input a 10-digit phone number:");
	scanf("%s", original);
	char converted[13];
	//DO NOT modify the code above

	//TODO: Partition the phone number stored in original array for better readability by 
	//using the character '-' as divider to break the number down into three components.
	//For instance, if the input is 5168886666 then the output is 516-888-6666
	//The input is stored in the array original (see lines 5 and 7). 
	//The output must be stored in the array converted (already declared in line 8).
	//You MUST use a loop to copy characters over

	/**your code here**/
  /* i am using for loop to solved this problem
  */
  int count = 0;
  for(int i = 0; i<3; i++) // count 0 to 2 and add add character in the 3rd index 
    {
      converted[i] = original[i];
    }
  converted[3] = '-';
  for(int i = 3; i<6; i++) // count 3 to 6 and add add character in the 7th index
    {
      converted[i+1] = original[i];
    }
  converted[7] = '-';
  for(int i = 6;i<11;i++)
    {
      converted[i+2] = original[i];
    }

	//DO NOT modify the code below
       	printf("%s\n", converted);	
}