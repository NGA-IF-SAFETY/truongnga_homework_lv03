#include<stdio.h>

#include<conio.h>

 void main()
 
 {
 
     int s,i,n;
     
     s=1;
     
     printf("nhap so n \n");
     
     scanf("%d",&n);
     
     for ( i=1;i<=n;i++)
     
     {

        s=s*i;

     }

      printf("n! = %d \n",s);

 }
