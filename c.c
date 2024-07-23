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


// #include <stdio.h>

// int main() {
//    int num;
//    printf("Enter a number:");
//    scanf("%d",&num);
//    if(num<0){
//        printf("The number is negative");
//    }else{
//        printf("The number is Positive");
//    }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//    int num1,num2;
//    printf("Enter first number:");
//    scanf("%d",&num1);
//    printf("Enter second number:");
//    scanf("%d",&num2);
//    if(num1<num2){
//        printf("Second number gratert than First number and the number is %d",num2);
//    }else{
//        printf("First number grater than second  number and the number is %d",num1);
//    }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//    int num1,num2,num3;
//    printf("Enter first number:");
//    scanf("%d",&num1);
//    printf("Enter second number:");
//    scanf("%d",&num2);
//    printf("Enter third number:");
//    scanf("%d",&num3);
//    if(num1<num2){
//        if(num2<num3){
//              printf("The gratest number is %d",num3);
//        }else{
//              printf("The gratest number is %d",num2);
//        }
//    }else{
//        if(num1<num3){
//              printf("The gratest number is %d",num3);
//        }else{
//              printf("The gratest number is %d",num1);
//        }
//    }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//    int num1,num2,choice,result;
//    printf("Enter first number:");
//    scanf("%d",&num1);
//    printf("Enter second number:");
//    scanf("%d",&num2);
//     printf("1 for addition \n2 for substration\n3 for multiplication \n4 for division \nEnter your choice:");
//     scanf("%d",&choice);
//     if(choice==1){
//         result=num1+num2;
       
//     }else if(choice==2){
//         result=num1-num2;
      
//     }else if(choice==3){
//         result=num1*num2;
        
//     }else if(choice==4){
//         result=num1/num2;
     
//     }else {
//         printf("Your not a human");
//     }
//        printf("Your result is %d",result);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//    int food;
//    printf("\nItems \n1.Porotta \n2.Briyani \n3.Frid Rice \n4.Mandhi \nSelect a Item: ");
//    scanf("%d",&food);
//     // scanf("%d",&choice);
//    switch(food){
//        case 1:
//        printf("You are selected item is Porotta");
//        break;
//        case 2:
//        printf("You are selected item is Briyani");
//        break;
//        case 3:
//        printf("You are selected item is Frid Rice");
//        break;
//        printf("You are selected item is Mandhi");
//        break;
//        default:
//        printf("This item not avilable");
//    }
      
//     return 0;
// }


// Write a program to check whether a student has passed or failed in a subject after he or she enters their mark (pass mark for a subject is 50 out of 100).
// Program should accept an input from the user and output a message as “Passed” or “Failed”

// #include <stdio.h>

// int main() {
//    float mark;
//    printf("Enter the mark of student:");
//    scanf("%f",&mark);
//    if(mark>=50){
//       printf("Passed");
//    }else{
//        printf("Failed");
//    }
   
//     return 0;
// }


// Write a program to show the grade obtained by a student after he/she enters their total mark percentage.


// #include <stdio.h>

// int main() {
//     float totalMark;
//     printf("Enter the student mark:");
//     scanf("%f",&totalMark);
//     if(totalMark>=90){
//         printf("A Grade\n");
//     }else if(totalMark>=80){
//         printf("B Grade\n");
//     }else if(70<=totalMark){
//         printf("C Grade\n");
//     }else if(60<=totalMark){
//         printf("D Grade\n");
//     }else if(50<=totalMark){
//         printf("E Grade\n");
//     }else if(totalMark<=50){
//         printf("Failed");
//     }else{
//         printf("Your entered wroung data");
//     }
    
//     return 0;
// }




// Using the ‘switch case’ write a program to accept an input number from the user and output the day as follows. 


#include <stdio.h>

int main() {
  int day;
  printf("Pick one 1-7 days:");
  scanf("%d",&day);
  
  switch(day){
      case 1:
      printf("Sunday");
      break;
      case 2:
      printf("Monday");
      break;
      case 3:
      printf("Tuesday");
      break;
      case 4:
      printf("Wednesday");
      break;
      case 5:
      printf("Thursday");
      break;
      case 6:
      printf("Friday");
      break;
      case 7:
      printf("Saturday");
      break;
      default:
      printf("Invalid Entry");
  }
    return 0;
}