
/// 06/08/2021  Assignment 2



/*
//9. WAP by designing a recursive function to calculate the sum of all even digits of any given integer.

#include<stdio.h>

int sum(int n)
{
	if(n==0)
		return 0;
	else if(n%2==0)
		return((n%10)+sum(n/10));
	else
		return(sum(n/10));
}
int main()
{
	int n;
	printf("Enter Number: ");
	scanf("%d", &n);

	printf("Sum = %d\n", sum(n));
	return 0;
}

*/

/// 06/08/2021  Assignment 2


/*
// 8.WAP to find the LCM of two numbers a and b by using a suitable function (say LCM) for this.

#include <stdio.h>
void LCM(int n1, int n2)
{
    int max = (n1 > n2) ? n1 : n2;

    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
}
int main()
{
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    LCM(n1,n2);


    return 0;
}

*/


/// 06/08/2021  Assignment 2

/*

//11. WAP to store n employee’s data such as employee name, gender,
//designation, department, basic pay. Calculate the gross pay of each
//employees as follows:
//Gross pay = basic pay + HR + DA
//HR=25% of basic and DA=75% of basic


#include<stdio.h>
int n;

struct emp
{
char dep[50];
char name[50];
char des[50];
float basic;
char gender[6];
}c[50];
int main()
{
    int i;
 printf("How Many entries You want ? :");
scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        printf("\nEnter name %d : ",i+1);
        scanf("%s",c[i].name);
        printf("Enter Gender : ");
        scanf("%s",c[i].gender);
        printf("Enter Department : ");
        scanf("%s",&c[i].dep);
        printf("Enter Designation : ");
        scanf("%s",&c[i].des);
        printf("Enter Basic Pay : ");
        scanf("%f",&c[i].basic);

            }
        float gp,hr,da;
        printf("Name     Gender   Department   Designation   Basic Pay    Gross Pay \n");

    for(i=0;i<n;i++)
    {
        hr= (25.0/100.0)*c[i].basic;
        da=(75.0/100.0)*c[i].basic;
        gp= hr+da+c[i].basic;
        printf("%s   %s   %s   %s  %f %f\n",c[i].name,c[i].gender,c[i].dep,c[i].des,c[i].basic,gp);
    }

}


*/


/// 06/08/2021  Assignment 2




//6. WAP to test whether a number num (num is entered through keyboard) is a number in the Fibonacci sequence or not.


#include<stdio.h>
int main()
{
 int a,b,c,next,num;
 printf("Enter any number: ");
 scanf("%d", &num);
 if((num==0)||(num==1))
   printf("\n%d is a Fibonacci term",num);
 else
 {
   a=0;
   b=1;
   c=a+b;
   while(c<num)
   {
     a=b;
     b=c;
     c=a+b;
   }
   if(c==num)
     printf("\n%d is a Fibonacci term",num);
   else
     printf("\n%d is not a Fibonacci term",num);
 }
 getch();
 return 0;
}



/// 06/08/2021  Assignment 2

/*
//10. WAP to find the factorial of a number n by writing a recursive function for it.

#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}

*/







/*

7,9,12 thora struct wala part, 14
*/























