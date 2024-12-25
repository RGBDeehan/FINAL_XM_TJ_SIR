/* Enter 2 semesters students marks & show hwo many students improved
and which student improved how many narks improved */

#include <stdio.h>
int main(){
int n1,n2,i,j,k,improved_marks,counter;
printf("Enter how many numbers of students in 1st semester: ");
scanf("%d",&n1);
    int first_sem_marks[n1];
   
printf("Enter 1st semester students marks respectivrly:");
        for(i=0;i<n1;i++){
        scanf("%d",&first_sem_marks[i]);
        
}


printf("Enter how many numbers of students in 2nd semester: ");
scanf("%d",&n2);
    int second_sem_marks[n2];
 
printf("Enter 2nd semesters students marks respectivrly:");
        for(j=0;j<n2;j++){
        scanf("%d",&second_sem_marks[j]);
       
}
improved_marks=0;counter=0;
    for(k=0;k<n1;k++){
        if(second_sem_marks[k]>first_sem_marks[k]){
            improved_marks=second_sem_marks[k]-first_sem_marks[k];
        counter++;
        printf("%d no. student improved %d marks\n",k+1,improved_marks);
        }
}
printf("%d number of students improved",counter);

    return 0;
}