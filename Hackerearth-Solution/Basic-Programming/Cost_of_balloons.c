/* Name: Chaitaly Kundu
Date : 20-01-2021 */

/* You are conducting a contest at your college. This contest consists of two problems and  participants. You know the problem that a candidate will solve during the contest.

You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. 
Each problem must have a balloon associated with it as a prize for solving that specific problem. 
You can distribute balloons to each participant by performing the following operation:

      Use green-colored balloons for the first problem and purple-colored balloons for the second problem
      Use purple-colored balloons for the first problem and green-colored balloons for the second problem
You are given the cost of each balloon and problems that each participant solve. Your task is to print the minimum price that you have to pay while purchasing balloons.

Input format

First line:  that denotes the number of test cases ()
For each test case: 
First line: Cost of green and purple-colored balloons 
Second line:  that denotes the number of participants ()
Next  lines: Contain the status of users. For example, if the value of the  integer in the  row is , 
then it depicts that the  participant has not solved the  problem. Similarly, if the value of the  integer in the  row is , 
then it depicts that the  participant has solved the  problem.

Output format
For each test case, print the minimum cost that you have to pay to purchase balloons. */

// Write your code here
#include<stdio.h>
int main()
{
	int T, i, n, bg, bp,l,r1,r2, cost1=0, cost2=0;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %d", &bg, &bp);
		scanf("%d",&n);
		for(l=0;l<n;l++)
		{
			scanf("%d %d",&r1,&r2);
			cost1 =cost1 + (bg*r1) + (r2*bp);
			cost2 =cost2 + (bp*r1) + (r2*bg);
		}
		if(cost1<cost2)
		{
			printf("%d\n",cost1);
		}
 		else 
		{ 
			printf("%d\n",cost2);
		}
		cost1= cost1 *0;
 		cost2= cost2 *0;
	}
}
	
