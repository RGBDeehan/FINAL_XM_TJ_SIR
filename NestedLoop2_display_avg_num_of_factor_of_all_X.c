/* Display average number of Factor for all X */

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

    for(j=0;j<n;j++){
sum=0;counter=0;
        for(k=1;k<=num[j];k++){
            if(num[j]%k==0){
                factor=k;
                sum=sum+factor;
                counter++;
            }
        }
        printf("\n%d number average factor is: %.2f",num[j],avg=(float)sum/counter);
    }




    return 0;
}