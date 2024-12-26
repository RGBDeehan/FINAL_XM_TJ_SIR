/* Display only prime X[i] */

#include <stdio.h>
int main(){
int n,i,j,k,counter=0,sum=0,factor=0;
float avg=0;

printf("Enter how many numbers:");
scanf("%d",&n);

int num[n];

printf("Enter the numbers respectively:");

for(i=0;i<n;i++){
    scanf("%d",&num[i]);
}
printf("The prime numbers are:");
    for(j=0;j<n;j++){
        if (num[j] <= 1) {
            continue; // Skip numbers less than or equal to 1
        }
counter=0;
        for(k=2;k<num[j];k++){
            if(num[j]%k==0){
             counter++;
             break;   
            }
        }
       if(counter==0){
        printf("%d ",num[j]);
       }
    }



    return 0;
}