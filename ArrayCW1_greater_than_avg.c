/* Input some numbers , find average & check how many numbers are
greater than the average & show them */

#include <stdio.h> 
int main() {
int n;
printf("Enter how many numbers: ");
scanf("%d",&n);
int i,j,num[n],counter,sum,average,counter2,bigger_than_avg;
printf("Enter the numbers respectively:");
sum=0;counter=0;
for(i=0;i<n;i=i+1){
    scanf("%d",&num[i]);
        sum=sum+num[i];
        counter=counter+1;
    }

average=sum/counter;
counter2=0;
printf("Bigger than average numbers are:");
 bigger_than_avg=0;
for(j=0;j<n;j++){
    if(num[j]>average){
        bigger_than_avg=num[j];
        counter2=counter2+1;
    printf("%d\n",bigger_than_avg);
    }
}
printf("There are %d numbers bigger than average",counter2);
    return 0;
}