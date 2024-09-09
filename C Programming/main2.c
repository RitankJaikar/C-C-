// #include<stdio.h>

// void good_morning();
// void good_afternoon();
// void good_night();

// int main(){
//     good_morning();
//     good_afternoon();
//     good_night();
//     return 0;
// }

// void good_morning(){
//     printf("Good Morning\n");
// }

// void good_afternoon(){
//     printf("Good Afternoon\n");
// }

// void good_night(){
//     printf("Good Night");
// }

// #include<stdio.h>

// int factorial(int a);

// int main(){
//     int b=6;
//     printf("Factorial is: %d",factorial(b));
//     return 0;
// }

// int factorial(int a){
//     // printf("%d\n",a);
//     int x;
//     if(a==1 || a==0){
//         return 1;
//     }
//     else{
//         return a*factorial(a-1);
//     }
// }

// #include<stdio.h>

// float avg(int a, int b, int c);

// int main(){
//     int num1, num2, num3;
//     float AVERAGE;
//     printf("Enter 3 numbers:\n");
//     scanf("%d %d %d",&num1,&num2,&num3);
//     AVERAGE=avg(num1,num2,num3);
//     printf("Average of three numbers is: %f", AVERAGE);
//     return 0;
// }

// float avg(int a, int b, int c){
//     float average;
//     average=(a+b+c)/3.0;
//     return average;
// }

// #include<stdio.h>
// float temp(int celcius);

// int main(){
//     int temperature;
//     printf("Enter temperature in Celcius: ");
//     scanf("%d",&temperature);
//     printf("Celcius to Fahrenheit is: %f",temp(temperature));
//     return 0;
// }

// float temp(int celcius){
//     float fahrenheit;
//     fahrenheit=celcius*9.0/5 + 32;
//     return fahrenheit;
// }

// #include<stdio.h>

// float force(int mass);

// int main(){
//     int mass;
//     printf("Enter Mass (in kg): ");
//     scanf("%d",&mass);
//     printf("Force is: %.2f N",force(mass));
//     return 0;
// }

// float force(int mass){
//     return mass*9.8;
// }

// #include<stdio.h>

// int fibo(int n);

// int main(){
//     int num;
//     printf("Enter the position: ");
//     scanf("%d",&num);
//     printf("The element on this position in Fibonacci Series is: %d",fibo(num));
//     return 0;
// }

// int fibo(int n){
//     if(n==1){
//         return 0;
//     }
//     else if(n==2){
//         return 1;
//     }
//     else{
//         return fibo(n-1)+fibo(n-2);
//     }
// }

// #include<stdio.h>

// int sum(int n);

// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     printf("Sum of numbers till %d is %d",num,sum(num));
//     return 0;
// }

// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     else{
//         return sum(n-1)+n;
//     }
// }

// #include<stdio.h>
// void pattern(int n);

// int main(){
//     int line;
//     printf("Enter number of lines: ");
//     scanf("%d",&line);
//     pattern(line);
//     return 0;
// }

// void pattern(int n){
//     if(n==1){
//         printf("*\n");
//         return;
//     }
//     pattern(n-1);
//     for(int i=1; i<=(2*n-1); i++){
//         printf("*");
//     }
//     printf("\n");
// }

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter number of lines: ");
//     scanf("%d",&n);
//     for(int j=1;j<=n;j++){
//     for(int i=1;i<=(2*j-1);i++){
//         printf("*");
//     }
//     printf("\n");
//     }
//     return 0;
// }