/*Display number of factors of each X */

#include <stdio.h>
int main(){
int n,i,j,k,factor=0,counter=0,sum=0;

printf("Enter how many numbers: ");
scanf("%d",&n);

int num[n];

printf("Enter the numbrs respectively: ");

for(i=0;i<n;i++){
    scanf("%d",&num[i]);
}

for(k=0;k<n;k++){
    printf("\nFactors for %d number are:",num[k]);
        for(j=2;j<num[k];j++){
            if(num[k]%j==0){
                factor=j;
                counter=counter+1;
            printf("%d ",factor);
            }
}
printf("\nTherer are %d factors for %d\n",counter,num[k]);
}

    return 0;
}