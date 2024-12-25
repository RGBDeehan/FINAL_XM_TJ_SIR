/* Enter 2 semesters marks & show which semister is harder */

#include <stdio.h>
int main(){
int n1,n2,i,j;
printf("Enter how many numbers for 1st semester: ");
scanf("%d",&n1);
    int first_sem_marks[n1],sum1,counter1;
    float avg1;
printf("Enter 1st semesters marks respectivrly:");
sum1=0;counter1=0;
        for(i=0;i<n1;i++){
        scanf("%d",&first_sem_marks[i]);
        sum1=sum1+first_sem_marks[i];
        counter1=counter1+1;
}
avg1=(float)sum1/counter1;

printf("Enter how many numbers for 2nd semester: ");
scanf("%d",&n2);
    int second_sem_marks[n2],sum2,counter2;
    float avg2;
printf("Enter 2nd semesters marks respectivrly:");
sum2=0;counter2=0;
        for(j=0;j<n2;j++){
        scanf("%d",&second_sem_marks[j]);
        sum2=sum2+second_sem_marks[j];
        counter2=counter2+1;
}
avg2=(float)sum2/counter2;

if(avg1>avg2){
    printf("2nd Semester was Tougher.");
}
else{
printf("1st Semester was Tougher.");
}
    return 0;
}