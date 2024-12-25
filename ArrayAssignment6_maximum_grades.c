/* 6. 6. Write a C program which can input some students’ marks and display which grades are
achieved by most of the students (Grades are A (>=90), B (>=80), C (>=70), and D (>=60))
Sample Input
8
77 65 74 97 87 85 99 80
Sample Output
B */   


#include <stdio.h>
int main(){
    int n,i,j,a,b,c,d;
    printf("Enter how many students: ");
  scanf("%d",&n);
  int x[n];
   printf("Enter %d students marks respectively: ",n);
   
    for(i=0;i<n;i++){
        scanf ("%d",&x[i]);
       }
       a=0;b=0;c=0;d=0;
  for(j=0;j<n;j++){
      if(x[j]>=90 && x[j]<=100){
          a++;
      }
     else if(x[j]>=80 && x[j]<90){
         b++;
     } 
      else if(x[j]>=70 && x[j]<80){
      c++;
  }  
    else if(x[j]>=60 && x[j]<70){
        d++;
    }
  }
    if (a>b && a>c && a>d){
        printf("A grade achieved by most of the students");
    }
    else if (b>a && b>c && b>d){
        printf("B grade achieved by most of the students");
    }
     else if (c>a && c>c && c>d){
        printf("C grade achieved by most of the students");
    }
     else if (d>a && d>c && d>b){
        printf("D grade achieved by most of the students");
    }
    
    
 return 0;   
}
