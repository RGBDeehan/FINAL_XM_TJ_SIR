/* 8. Write a C program which can input the last seven days temperature into an array and display
the highest temperature. How many days that highest value is found.
Sample Input
36 35 39 37 38 39 38
Sample Output
39
2 */

#include <stdio.h>
int main(){
    int i,n,m,c,j,k;
    
  printf("Enter how many days temp: ");
  scanf("%d",&n);
  int x[n];
   printf("Enter last %d days temperature respectively: ",n);

    for(i=0;i<n;i++){
        scanf ("%d",&x[i]);
        }
        m=0;
      for(j=0;j<n;j++){
          if(x[j]>m){
              m=x[j];
          }
      } printf("The highest temperature is: %d\n",m);  
      c=0;
      for(k=0;k<n;k++){
          if (x[k]==m){
              c++;
          }
      }
     printf("%d days have that highest temperatur\n",c);   
        
    return 0;
}
