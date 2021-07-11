/* You have been given an array A of size N .
You need to sort this array non-decreasing oder using bubble sort.
However, you do not need to print the sorted array .
You just need to print the number of swaps required to sort this array using bubble sort

SAMPLE INPUT:    SAMPLE OUTPUT: 
5                0
1 2 3 4 5 */

/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <stdio.h>

int main()
{
    int num, A[10], i, j, temp, count;
    scanf("%d", &num);

    for (int i = 0; i < num - 1; i++)
    {
        count = 0;
        for (int j = 0; j < num - i - 1; j++)
        {
            if (A[j] > A[j])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                count++;
            }
        }
    }
    printf("%d", count);
}