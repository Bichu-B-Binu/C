/* simple program*/
// #include <stdio.h>

// int main() {
//     // Write C code here
//     int a;
//     scanf("%d",&a);
//     printf("you have entered %d",a);
//     return 0;
// }
/*sum of a number*/

// #include <stdio.h>

// int main(void) {
//     // Write C code here
//  int num1,num2,sum;
//  printf("Enter two number:");
//  scanf("%d%d",&num1,&num2);
//  sum=num1+num2;
//  printf("Result:%d",sum);
//     return 0;
// }

/*Average of a number*/
// #include <stdio.h>

// int main(void) {
//     // Write C code here
// float num1,num2,num3,average;
// printf("Enter three number:");
// scanf("%f%f%f",&num1,&num2,&num3);
// average=(num1+num2+num3)/3;
// printf("result:%f",average);
//     return 0;
// }

/*Swapping*/

// #include <stdio.h>

// int main(void) {
//     // Write C code here
// int a=10,b=20,temp;
// temp=a;
// a=b;
// b=temp;
// printf("a:%d b:%d",a,b);


//     return 0;
// }


// #include <stdio.h>

// int main() {
//     // Write C code here
//     char a;
//     printf("Enter a char");
//     scanf("%c",&a);
//     printf("approved %c",a);

//     return 0;
// }

// #include <stdio.h>

// int main() {
    
//     int num1;
//     float num2, sum;
//     printf("Enter first number:");
//     scanf("%d",&num1);
//     printf("Enter second number:");
//     scanf("%f",&num2);
//     sum=num1+num2;
//     printf("result %f",sum);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int P;
//     float R,n,SI;
//     printf("Enter the principal amount:");
//     scanf("%d",&P);
//     printf("Enter the intrest rate:");
//     scanf("%f",&R);
//     printf("Enter the number of years:");
//     scanf("%f",&n);
//     SI=(P*R*n)/100;
//     printf("Simple intrest is: %f",SI);
//     return 0;
// }


#include <stdio.h>

int main() {
   int num;
   printf("Enter a number:");
   scanf("%d",&num);
   if(num<0){
       printf("The number is negative");
   }else{
       printf("The number is Positive");
   }
    return 0;
}