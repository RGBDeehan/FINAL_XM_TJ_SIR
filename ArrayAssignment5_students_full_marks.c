/* 5. Write a C program which can input some students' marks and check whether any student
got full marks. You may assume that the exam’s total mark is 30.
Sample Input
6
22 29 10 10 15 15
Sample Output
No*/

#include <stdio.h>
int main() {
    int n,i,j,s,c,z;
     printf("Enter how many students: ");
  scanf("%d",&n);
  int x[n];
  printf("Enter total mark of exam: ");
  scanf("%d",&z); 
printf("Enter marks respectively:");
    
  for(i=0;i<n;i++){

scanf("%d",&x[i]);}
c=0;
for(j=0;j<n;j++){
    if(x[j]==z){
        c++;
       
    }
    else{printf("No students got full marks\n");
        break ;
    }
}   printf("%d Students got full marks\n",c);
        return 0;
}
