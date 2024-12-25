/* Enter some days temperature and show how many & which
 temperature are higher than previous day */

#include <stdio.h>
int main() {
int n,i,j;
printf("Enter how many days temperature: ");
scanf("%d",&n);
printf("Enter the temperatures respectively: ");
int temp[n],counter,higher_temp;

for(i=0;i<n;i++){
    scanf("%d",&temp[i]);
}
printf("The higher than previous temperatures are:");
counter=0;higher_temp=0;
for(j=1;j<n;j++){
    if(temp[j]>temp[j-1]){
        higher_temp=temp[j];
        counter=counter+1;
        printf("%d\n",higher_temp);
    }

}

printf("There are %d days temperature are higher than previous day",counter);

    return 0;
}