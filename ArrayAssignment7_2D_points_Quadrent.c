/* 7. Write a C program which can some 2D points into an array (The x values in one array and y
values in another array). Display how many points are in each quadrant.
Sample Input.
4
5 5
8 8
4 9
3 1
Sample Output
4 0 0 0
 */
 
 #include <stdio.h>
int main(){
    int i,n,j,a,b,c,d;
  printf("Enter how many 2D points (x,y): ");
  scanf("%d",&n);
  int x[n],y[n];
   printf("Enter the %d points respectively (x,y): ",n);
  
    for(i=0;i<n;i++){
        scanf ("%d%d",&x[i],&y[i]);

    }
    a=0;b=0;c=0;d=0;
 for (j=0;j<n;j++){
     if(x[j]>0 && y[j]>0){
         a++;
     }
     else if(x[j]<0 && y[j]>0){
         b++;
     }
     else if(x[j]<0 && y[j]<0){
         c++;
     }
     else if(x[j]>0 && y[j]<0){
         d++;
     }
 }   
    printf("There're %d points in 1st quadrant\n",a);
    printf("There're %d points in 2nd quadrant\n",b);
    printf("There're %d points in 3rd quadrant\n",c);
    printf("There're %d points in 4th quadrant\n",d);
    
    return 0;
    
}
