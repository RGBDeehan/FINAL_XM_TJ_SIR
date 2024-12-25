/* 4. Write a C program which can input the last seven days temperature and display in how many
days the temperature is increased than that of immediate previous day.
Sample Input
36 35 39 37 38 39 38
Sample Output
3
*/

#include<stdio.h>
int main(){
int i,j,n,c;

 printf("Enter how many days temperature: ");
  scanf("%d",&n);
  int t[n];
printf("Enter temperature respectively:");

for(i=0;i<n;i++){

scanf("%d",&t[i]);}
c=0;
for(j=1;j<n;j++){
    if(t[j]<t[j-1]){
        c++;
    }
}
printf("how many tmep high than immidiate previous: %d\n",c);
return 0;
}
