#include <stdio.h>  
  
int main()  
{  
    int n,m=1;  
    printf("Enter the number of columns");  
    scanf("%d",&n);  
for(int i=1;i<=n;i++)  
{  
  for(int j=1;j<=i;j++)  
  {  
    printf("*");  
  }  
  printf("\n");  
}  
 for(int i=n-1;i>=1;i--)  
 {  
   for(int j=1;j<=i;j++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }    
     
    return 0;  
}  
//diamond

#include <stdio.h>  
int main(void) {  
  int n;  
  printf("Enter the number of rows\n");  
  scanf("%d",&n);  
  int spaces=n-1;  
  int stars=1;  
  for(int i=1;i<=n;i++)  
  {  
    for(int j=1;j<=spaces;j++)  
    {  
      printf(" ");  
    }  
    for(int k=1;k<=stars;k++)  
    {  
      printf("*");  
    }  
    if(spaces>i)  
    {  
      spaces=spaces-1;  
      stars=stars+2;  
    }  
    if(spaces<i)  
    {  
      spaces=spaces+1;  
      stars=stars-2;  
    }  
    printf("\n");  
  }  
  return 0;}  \
  //
  #include <stdio.h>  
  
int main(void) {  
    
  int n;  
  printf("Enter the number of columns");  
  scanf("%d",&n);  
  //printing the upper part of the pattern..  
 for(int i=0;i<n;i++)  
 {  
   for(int j=0;j<i;j++)  
   {  
       printf(" ");  
   }  
   for(int k=1;k<=n-i;k++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }  
for(int i=1;i<n;i++)  
{  
  for(int j=1;j<n-i;j++)  
  {  
    printf(" ");  
  }  
  for(int k=1;k<=i+1;k++)  
  {  
    printf("*");  
  }  
  printf("\n");  
}  
  return 0;  
}  
