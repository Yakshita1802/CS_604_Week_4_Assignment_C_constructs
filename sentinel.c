#include <stdio.h>
int main(void) {
	int t;
	int grades[20]; //we declare an array of 20 grades because the question assumes the capacity of the class is 20
	int i = 0; //i can represent how many grades are stored in array.

	printf("Enter a grade:\n");
	scanf("%d", &t);

	//TODO: The purpose of this program is to find the average of students' grades.  Read the comments and follow the step-by-step "TODO" instructions below.
	//We do not know how many grades we will get eventually -- the max is 20 grades, but
	//some students could be absent. We will keep on accepting grades until we see an
	//input of -1. Grades can't be negative, and we are using -1 as a sentinel to end the input.
	
	while(t != -1)
  {
          // TODO: replace ??? with condition to check if it is -1
      		//(now we know it is not -1, because we are in the loop)
      		//TODO: Now add the grade t to the grades array, and increase index i by 1.
      		/**your code here**/
  grades[i] = t;
    i++;
		      /*
          Below if loop will make sure there are only 20 grades are considered as input and will
          give error if more then 20 grades are entered. as per line 13 -- the max is 20 grades --
          */
    if (i>20)
    {
      return printf("You entered more then 20 grades:\nClass capacity is only 20:\nAvg can't be executed");
    }
          //TODO: Read a new grade and store in t, why? because we have already processed what is in t
    			//We are ready to process next grade, we will repeat read->check->process
    			//                                                     ^             |	
    			//                                                     |_____________|
    			//in which read is to scan data into t, check is to make sure t is not the
    			//sentinel -1 (which would terminate the loop) and process t to store it into grades.
    			//Double check your loop body follows this workflow described above.

	      	/**your code here**/
  printf("Enter a grade:\n");
	scanf("%d", &t);
  }
	float average; //DO NOT modify this declaration
	        //TODO: Now write a loop to find the average of the class grades.
        	//Make sure the result is stored in the float average declared as above (in line 34)
        
        	/**your code here**/
  average  = 0;
  for (int grade = 0; grade<i; grade++)
    {
      average += grades[grade];
    }
  average = average/i;
          //DO NOT change the following printf
	printf("the average grade of the class is %.2f\n", average);
  return 0;
}