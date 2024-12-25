/* 1. Write a C program which can input the last seven days temperature into an array and display
the average temperature.
Sample Input
36 35 39 37 38 39 38
Sample Output
37.428571 */

#include <stdio.h>
int main(){
    int i,n,s;
    float avg;
  printf("Enter how many days temp: ");
  scanf("%d",&n);
  int x[n];
   printf("Enter last %d days temperature respectively: ",n);
   s=0;
    for(i=0;i<n;i++){
        scanf ("%d",&x[i]);
        s=s+x[i];
       
    }
    avg=(float)s/n;
printf("The average temperature is: %.2f\n",avg);    
    return 0;
}
