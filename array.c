// #include <stdio.h>

// int main() {

//     int marks1, marks2, marks3, marks4, marks5; 

//     printf("please enter marks for student 1: ");
//     scanf("%d",&marks1);

//     printf("please enter marks for student 2: ");
//     scanf("%d",&marks2);
    
//     printf("please enter marks for student 3: ");
//     scanf("%d",&marks3);
    
//     printf("please enter marks for student 4: ");
//     scanf("%d",&marks4);
    
//     printf("please enter marks for student 5: ");
//     scanf("%d",&marks5);

//     printf("\nMarks of student 1 are : %d", marks1);
//     printf("\nMarks of student 2 are : %d", marks2);
//     printf("\nMarks of student 3 are : %d", marks3);
//     printf("\nMarks of student 4 are : %d", marks4);
//     printf("\nMarks of student 5 are : %d", marks5);
    
    
 


// }

// #include <stdio.h>

// int main() {

//     int marks[5]; 

//     printf("please enter marks for student 1: ");
//     scanf("%d",&marks[0]);

//     printf("please enter marks for student 2: ");
//     scanf("%d",&marks[1]);
    
//     printf("please enter marks for student 3: ");
//     scanf("%d",&marks[2]);
    
//     printf("please enter marks for student 4: ");
//     scanf("%d",&marks[3]);
    
//     printf("please enter marks for student 5: ");
//     scanf("%d",&marks[4]);

//     printf("\nMarks of student 1 are : %d", marks[0]);
//     printf("\nMarks of student 2 are : %d", marks[1]);
//     printf("\nMarks of student 3 are : %d", marks[2]);
//     printf("\nMarks of student 4 are : %d", marks[3]);
//     printf("\nMarks of student 5 are : %d", marks[4]);
    
    
 


// }

// #include <stdio.h>

// int main() {

//     int marks[5] = {90, 94, 91, 96, 100}; 

//     // printf("please enter marks for student 1: ");
//     // scanf("%d",&marks[0]);

//     // printf("please enter marks for student 2: ");
//     // scanf("%d",&marks[1]);
    
//     // printf("please enter marks for student 3: ");
//     // scanf("%d",&marks[2]);

    
//     // printf("please enter marks for student 4: ");
//     // scanf("%d",&marks[3]);
    
//     // printf("please enter marks for student 5: ");
//     // scanf("%d",&marks[4]);

//     printf("\nMarks of student 1 are : %d", marks[0]);
//     printf("\nMarks of student 2 are : %d", marks[1]);
//     printf("\nMarks of student 3 are : %d", marks[2]);
//     printf("\nMarks of student 4 are : %d", marks[3]);
//     printf("\nMarks of student 5 are : %d", marks[4]);
    
    
 


// }

//  #include <stdio.h>

// int main() {

//     int marks[5] ;

//   for (int i = 0; i<5; i++) {
//      printf("please enter the marks of student %d: ",i+1);

//      scanf(" %d",&marks[i]);
//   }

//      for(int i = 0; i<5; i++) {
//         printf("\nMarks of student %d are: %d", i+1,marks[i]);
//     }
    
    
 


//  }

//  #include <stdio.h>

//  int main() {
// int num [40];
// for (int i = 0 ; i < 100 ; i++)
// num[i] = i;
// }

// #include<stdio.h>

// int main() {

//    int marks[5];

//    printf("please enter the marks of student 1 : ");
//    scanf(" %d", &marks[0]);
//    printf("please enter the marks of student 2 : ");
//    scanf(" %d", &marks[1]);
//    printf("please enter the marks of student 3 : ");
//    scanf(" %d", &marks[2]);
//    printf("please enter the marks of student 4 : ");
//    scanf(" %d", &marks[3]);
//    printf("please enter the marks of student 5 : ");
//    scanf(" %d", &marks[4]);

//    printf("\nMarks of student 1 are: %d", marks[0]);
//    printf("\nMarks of student 2 are: %d", marks[1]);
//    printf("\nMarks of student 3 are: %d", marks[2]);
//    printf("\nMarks of student 4 are: %d", marks[3]);
//    printf("\nMarks of student 5 are: %d", marks[4]);


// }

// #include<stdio.h>

// int main() {
//    int no_of_students = 10;
//    int marks[no_of_students];

//    for(int i=0; i<5 ;i++) {
//       printf("please enter the marks for students %d : ",i+1);
//       scanf("%d", &marks[i]);
//    }
//    //  printf("\nMarks of student 1 are: %d", marks[0]);
//    //  printf("\nMarks of student 2 are: %d", marks[1]);
//    //  printf("\nMarks of student 3 are: %d", marks[2]);
//    //  printf("\nMarks of student 4 are: %d", marks[3]);
//    //  printf("\nMarks of student 5 are: %d", marks[4]);

//    //  return 0;

//     for (int i = 0; i < 5 ; i++) {
//       printf("\nMarks of student %d are : %d",i+1,marks[i]);
//     }


// }




// #include <stdio.h>

// int main() {
//    int num[40];
//    for (int i = 0; i < 100; i++ ) {
//       num[i] =i ;
//    }
// }


// #include<stdio.h>

// void print_marks(int marks[], int no_of_students);

// int main() {
//    int no_of_students = 5;
//    int marks[no_of_students];

//    for(int i=0; i<no_of_students ;i++) {
//       printf("please enter the marks for students %d : ",i+1);
//       scanf("%d", &marks[i]);

//    }

//    print_marks(marks, no_of_students);

// }
//     void print_marks(int student_marks[], int students_count) {
      
//     for (int i = 0; i < students_count ; i++) {
//       printf("\nMarks of student %d are : %d",i+1,student_marks[i]);
//     }

//     }

// #include <stdio.h> 

// int sumArray(int arr[], int size);

// int main() {
//    int myArray[5] = {10,20,30,40,50}  ;

//    int size = sizeof(myArray) / sizeof(myArray [0]);

//    int total = sumArray(myArray , size);
//    printf("the sum of the array elements is: %d\n", total);
// }

// int sumArray(int arr[] , int size) {
//    int sum = 0;
//    for (int i = 0; i < size; i++) {
//       sum =sum +   arr[i];
//    }
//    return sum;

// }


// #include <stdio.h> 

// int sumArray(int *arr, int size);

// int main() {
//    int myArray[5] = {10,20,30,40,50}  ;

//    int size = sizeof(myArray) / sizeof(myArray [0]);

//    int total = sumArray(myArray , size);
//    printf("the sum of the array elements is: %d\n", total);
// }

// int sumArray(int *arr , int size) {
//    int sum = 0;
//    for (int i = 0; i < size; i++) {
//       sum =sum +   arr[i];
//    }
//    return sum;

// }

// #include<stdio.h>

// int main() {

//   int marks[2][3];

//    for (int i=0 ; i<2;i++) {
//      for (int col = 0; col < 3; col++ ) {
//       printf("Enter the marks for student%d,subject %d :", i + 1, col+1);
//       scanf("%d",&marks[i][col]);
     
//     }
//    }









//    // int student1[6];
//    // int student2[6];
//    // int student3[6];
//    // int student4[6];
//    // int student5[6];


//    // int subject1[6];
//    // int subject2[6];
//    // int subject3[6];
//    // int subject4[6];
//    //  int subject5[6];

// }


// questions


// #include <stdio.h>

// int main() {
//   int num1,num2,sum;

//   printf("enter first number :  ");
//   scanf("%d",&num1);
//    printf("enter second number :  ");
//   scanf("%d",&num2);

//   sum= num1 + num2 ;

//   printf("sum of numbers : %d",sum);

// }

// question 1

// #include <stdio.h>

// int main() {

//   printf("*\n");
//   printf("* *\n");
//   printf("* * *\n");
//   printf("* * * *\n");
//   printf("* * * * *\n");



//   printf("* * * * *\n");
//   printf("* * * *\n");
//   printf("* * *\n");
//   printf("* *\n");
//   printf("*\n");

  

//   printf("         *\n");
//   printf("       * *\n");
//   printf("     * * *\n");
//   printf("   * * * *\n");
//   printf(" * * * * *\n");
// }


// question 2

// #include <stdio.h>

// int main() {

//   printf(" *\n * *\n * * *\n * * * *\n * * * * *\n\n\n * * * * *\n * * * *\n * * *\n * *\n *\n ");

// }


// question 3

// #include <stdio.h> 

// int main() {

// char name[50];

//   printf("please enter your name : ");
//   scanf("%s",&name);

//   printf("WELCOME %s TO KG CODING",name);
// }

// question 4

// #include <stdio.h> 

// int main() {

//   int num1,num2;

//   printf("enter the value of num1 :");
//   scanf("%d",&num1);

//   printf("enter the value of num2 :");
//   scanf("%d",&num2);

//   printf("here are the num1 and num2 : %d,%d respectively",num1,num2);

// }


// question 5

// #include <stdio.h>

// int main() {

//   int A;
//   float B;
//   double C;
//   char  D;

//   printf("the size of int is %zu\n",sizeof(A));
//   printf("the size of float is %zu\n",sizeof(B));
//   printf("the size of double is %zu\n",sizeof(C));
//   printf("the size of char is %zu\n",sizeof(D));



// }

// question 6


// #include <stdio.h>

// int main() {

//   int  age;

// char firstname[50], lastname[50];



//   printf("Enter your first name : ");

// scanf("%s",&firstname);

//  printf("Enter your last name : \n");

// scanf("%s",&lastname);

//  printf("Enter your age : \n");

// scanf("%d",&age);


// printf("hey %s , %s and your age is %d",firstname,lastname,age);



// }

// question 7

// #include <stdio.h>

// int main() {

//   int l , square;

//   printf("enter the length : ");

// scanf("%d",&l);

// square = l*l ;

// printf("here is your AREA OF SQUARE : %d",square);


// }

// question 8

// #include <stdio.h>

// int main() {

// const float Pi = 3.14159;

// float r,circumference;

// printf("enter the value of radius : ");
// scanf("%f",&r);

// circumference = 2*Pi*r ;

// printf("here is your circumfere of circle : %f",circumference);



// }

// question 9


// #include <stdio.h>

// int main() {

// const float Pi = 3.14159;

// float r,area;

// printf("enter the value of radius : ");
// scanf("%f",&r);

// area = Pi*r*r ;

// printf("here is your area of circle : %f",area);



// }

//question 10

// #include <stdio.h>

// int main() {

//   int a,b,num1,num2;

//   printf("enter the value of a: ");
//   scanf("%d",&num1);

//   printf("enter the value of b: ");
//   scanf("%d",&num2);

//   a=num2;
//   b=num1;

//   printf("the value of a and b are %d,%d",a,b);
// }








