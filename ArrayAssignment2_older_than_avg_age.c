/* 2. Write a C program which can input some persons’ age into an array and display how many of
them are older than the average age of those people.
Sample Input
6
40 30 1010 15 15
Sample Output
2 */

#include <stdio.h>
int main(){
    int i,c,avg,n,d,j,s;
  printf("Enter how many ages: ");
  scanf("%d",&n);
  int x[n];
   printf("Enter %d persons age respectively: ",n);
   c=0;s=0;
    for(i=0;i<n;i++){
        scanf ("%d",&x[i]);
        s=s+x[i];
        c++;
    }
    avg=s/n;
    d=0;
    for(j=0;j<n;j++){
        if(x[j]>avg){
            d++;
            printf("Older than avg ages are: %d\n",x[j]);
        }
    }
    
printf("The average age is: %d\n",avg);
printf("There are %d people are elder than average age.\n",d);
    return 0;
}
