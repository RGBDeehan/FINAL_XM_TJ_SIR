/* Enter 5 numbers & show even numbers seperately using 
another array & also find sum of even numbers */

#include<stdio.h>
int main(){
int x[5],y[5],i,j,c=0,k,s=0;
printf("Enter 5 value for x:");
for(i=0;i<5;i++){
    scanf("%d",&x[i]);
    }
c=0;
    for(j=0;j<5;j++){
        if(x[j]%2==0){
            y[c]=x[j];
            c++;
        }
    }

s=0;
 printf("Even Numbers:");
    for(k=0;k<c;k++){
        printf("%d \n",y[k]);
       s=s+y[k];
    }


printf("Sum of even numbers: %d\t",s);
    return 0;
}