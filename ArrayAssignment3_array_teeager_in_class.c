/* 3. Write a C program which can input some students' age of a particular class into an array and
display the number of teenagers in that class.
Sample Input
6
40 30 10 10 15 15
Sample Output
2  */

#include <stdio.h>
int main(){
    int i,c,n,s,j;
  printf("Enter how many students ages: ");
  scanf("%d",&n);
  int x[n];
   printf("Enter %d students age respectively: ",n);
    for(i=0;i<n;i++){
        scanf ("%d",&x[i]);
       
    } c=0;
  for(j=0;j<n;j++){
  
   if(x[j]<=19 && x[j]>=13){
       c++;
       printf("The teenagers are: %d\n",x[j]); }
  }
printf("There are %d students are teenager.\n",c);
    return 0;
}
