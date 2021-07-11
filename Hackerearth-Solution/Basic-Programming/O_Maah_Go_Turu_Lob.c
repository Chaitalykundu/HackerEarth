/* Name : Chaitaly Kundu
Date : 20-01-2021 */

/* Bob's crush's name starts with a vowel. That's the reason Bob loves vowels too much. He calls a string "lovely string" if it contains either all the lowercase vowels or all the uppercase vowels or both, else he calls that string "ugly string". 
For more clarification, see the sample testcase explanation.
Input
First line contains T, the number of test cases.
Next T lines contain a single string S.
Output
For each test case, print "lovely string" or "ugly string"  (without quotes)  according to the definition of Bob. */



// Write your code here
#include<stdio.h>
#include<string.h>
 
int main(){
   int i,x=0,j,y=0,T,p,q;
   char s1[1000001], v1[6] ="aeiou", v2[6] = "AEIOU";
    scanf("%d",&T);
	for(q=0;q<T;q++){
   scanf("%s",&s1);
   p=strlen(s1);
   for(i=0;i<5;i++){
	   for(j=0;j<p;j++){
		   if(v1[i]== s1[j]){
			   y++;
			   break;}}}
		   
	for(i=0;i<5;i++){
		for(j=0;j<p;j++){
			 if(v2[i]== s1[j]){
				 x++;
				 break;}}}
 
    if(y==5 || x==5) {
		printf("lovely string\n");
	}
    else{
		printf("ugly string\n");
	}
    x=0;
	y=0;
	}
	return 0;
}
