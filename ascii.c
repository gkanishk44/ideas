#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");

    /* Reads the entered character and stores it
     * into the char variable ch
     */
    scanf("%c", &ch);

    /* Using the format specifiers we can get the ASCII code
     * of a character. When we use %d format specifier for a
     * char variable then it displays the ASCII value of a char
     */
    printf("ASCII value of character %c is: %d", ch, ch);
    return 0;
}

//
/* C program to convert uppercase string to
 * lower case
 * written by: Chaitanya
 */
#include<stdio.h>
#include<string.h>
int main(){
   /* This array can hold a string of upto 25
    * chars, if you are going to enter larger string
    * then increase the array size accordingly
    */
   char str[25];
   int i;
   printf("Enter the string: ");
   scanf("%s",str);
 
   for(i=0;i<=strlen(str);i++){
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }
   printf("\nLower Case String is: %s",str);
   return 0;
}
//
#include <stdio.h>
 
void main()
{
    int n, r, npr_var;
 
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("\nEnter the value of r:");
    scanf("%d", &r);
    
    /* nPr is also known as P(n,r), the formula is:
     * P(n,r) = n! / (n - r)! For 0 <= r <= n.
     */
    npr_var = fact(n) / fact(n - r);
    printf("\nThe value of P(%d,%d) is: %d",n,r,npr_var);
}
// Function for calculating factorial
int fact(int num)
{
    int k = 1, i;
    // factorial of 0 is 1
    if (num == 0)
    {
        return(k);
    }
    else
    {
        for (i = 1; i <= num; i++)
    {
            k = k * i;
	}
    }
    return(k);
}
