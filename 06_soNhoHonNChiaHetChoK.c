#include <stdio.h>

void main()  

{

   int i,n,k;

   printf("Nhap n vao \n ");

   scanf("%d",&n);

   printf("\nNhap k vao \n ");

   scanf ("%d",&k);

  for(i=1;i<n;i++)

 {

    if(i%k==0) printf("%d  ",i); 
    
   }  
   
}
