/*
9. Write a C program which can input some numbers into an array and display the highest value
among the odd values and of the even values separately.
Sample Input
36 35 39 37 34 39 34
Sample Output
39
36

*/

#include <stdio.h>
int main(){
int i,a,b,n,j,max_even,max_odd;
// int x[100]; //
printf("How many numbers:") ;
scanf("%d",&n);
int x[n] ;

printf("Enter %d numbers respectively: ",n);
   max_even=0;
   max_odd=0;
for(i=0;i<n;i++){
    scanf("%d",&x[i]);
    if(x[i]%2==0 ){
            if(x[i]>max_even){
        max_even=x[i]; }
        }
    else{
        if(x[i]>max_odd){
            max_odd=x[i];
        }

    }

}

printf("The highest even num: %d\n",max_even);
printf("The highest off num: %d\n",max_odd);
return 0;
}
