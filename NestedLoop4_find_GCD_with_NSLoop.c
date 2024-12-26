/*Find GCD (Every pairs GCD) using NESTED LOOP.*/

#include<stdio.h>
int main(){
int i,j,k,n,m=0,gcd=0;

printf("Enter how many (EVEN) numbers:");
scanf("%d",&n);

int num[n];

printf("Enter the numbers respectively:");

for(i=0;i<n;i++){
    scanf("%d",&num[i]);
    }
m=0;
for(j=0;j<n;j=j+2){
        if(num[j]>num[j+1]){
        m=num[j+1];
    }
        else{
            m=num[j];
        }
    gcd=0;
    for(k=2;k<=m;k++) {
    if(num[j]%k==0 && num[j+1]%k==0){
        gcd=k;
    }  
}
printf("GCD for %d & %d is: %d\n",num[j],num[j+1],gcd);
}
    return 0;
}