// #include<stdio.h>

// int main(){
    // int l,b;
    // printf("Enter length of Rectangle: ");
    // scanf("%d",&l);
    // printf("Enter length of Rectangle: ");
    // scanf("%d",&b);
    // int a=l*b;
    // printf("Area of Rectangle: %d",a);

    // int r,h;
    // printf("Enter radius of Cylinder: ");
    // scanf("%d",&r);
    // printf("Enter height of Cylinder: ");
    // scanf("%d",&h);
    // float a=2*3.14*r*(r+h);
    // printf("Area of Cylender: %f",a);

    // int P,R,T;
    // printf("Enter Principal: ");
    // scanf("%d",&P);
    // printf("Enter Rate of Interest: ");
    // scanf("%d",&R);
    // printf("Enter No. of Years: ");
    // scanf("%d",&T);
    // float S=(P*R*T)/100;
    // printf("Simple Interest=%f",S);

    // int m1,m2,m3,tp;
    // printf("Enter Marks1 out of 100: ");
    // scanf("%d",&m1);
    // printf("Enter Marks2 out of 100: ");
    // scanf("%d",&m2);
    // printf("Enter Marks3 out of 100: ");
    // scanf("%d",&m3);
    // tp=(m1+m2+m3)/3;
    // printf("Total percentage %d\n",tp);
    // if(tp>=40 && m1>=33 && m2>=33 && m3>=33){
    //     printf("PASS");
    // }
    // else{
    //     printf("FAIL");
    // }
    // return 0;

    // int year;
    // printf("Enter Year: ");
    // scanf("%d",&year);
    // if(year%4!=0 || (year%100==0 && year%400!=0)){
    //     printf("Not Leap Year");
    // }
    // else{
    //     printf("Leap Year");
    // }

    // char ch;
    // printf("Enter a alphabet: ");
    // scanf("%c",&ch);
    // if(ch>=97 && ch<=122){
    //     printf("Lower Case");
    // }
    // else{
    //     printf("Upper Case");
    // }

    // int n;
    // printf("Enter a Number: ");
    // scanf("%d",&n);
    // int num=n;
    // for(int i=1;i<=10;i++){
    //     printf("%d*%d=%d\n",num,i,n*i);
    // }
    // return 0;

    // int n=10;
    // int num=n;
    // for(int i=10;i>=1;i--){
    //     printf("%d*%d=%d\n",num,i,n*i);
    // }
    // return 0;

    // int i=1,n=0;
    // while(i<=10){
    //     n=n+i;
    //     i++;
    // }
    // printf("%d",n);
    // return 0;

    // int i=1,n=0;
    // do{
    //     n=n+i;
    //     i++;
    // }while(i<=10);
    // printf("%d",n);
    // return 0;

    // int n=8,sum=0;
    // for(int i=1;i<=10;i++){
    //     sum=sum+n*i;
    // }
    // printf("%d",sum);
    // return 0;

    // double n,f=1;
    // printf("Enter a Number: ");
    // scanf("%lf",&n);
    // for(int i=1;i<=n;i++){
    //     f=f*i;
    // }
    // printf("%lf",f);

    // int n;
    // printf("Enter a Number: ");
    // scanf("%d",&n);
    // if(n==0 || n==1){
    //     printf("Not Prime");
    // }
    // else if(n==2){
    //     printf("Prime");
    // }
    // else{
    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         printf("Not Prime");
    //         break;
    //     }
    //     else if(i==n-1){
    //         printf("Prime");
    //         break;
    //     }
    // }
    // }
    
    // int a=8;
    // printf("%d %d %d",a,++a,a++);
    // return 0;    
// }



// #include<stdio.h>
// int sum(int a,int b);

// int sum(int a,int b){
//     a=20;
//     b=40;
//     int s=a+b;
//     return s;
// }

// int main(){
//     int a=10,b=20;
//     int c=sum(a,b);
//     printf("%d %d %d",c,a,b);
//     return 0;
// }

// #include<stdio.h>
// int avg(int a,int b,int c);

// int main(){
//     int a=10,b=20,c=30;
//     int AVG=avg(a,b,c);
//     printf("%d",AVG);
//     return 0;
// }

// int avg(int a,int b,int c){
//     int avg=(a+b+c)/3;
//     return avg;
// }

// #include<stdio.h>

// int factorial(int n);
// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     else{
//         return factorial(n-1)*n;
//     }
// }

// int main(){
//     int num=5;
//     printf("%d",factorial(num));
//     return 0;
// }

// #include<stdio.h>

// int febonacci(int n);
// int febonacci(int n){
//     if(n==1){
//         return 0;
//     }
//     else if(n==2){
//         return 1;
//     }
//     else{
//         return febonacci(n-1)+febonacci(n-2);
//     }
// }

// int main(){
//     int num=5;
//     printf("%d",febonacci(num));
//     return 0;
// }

// #include<stdio.h>
// void address(int a);

// int main(){
//     int i=10;
//     printf("%d\n",&i);
//     address(i);
//     return 0;
// }

// void address(int a){
//     printf("%d",&a);
// }

// #include<stdio.h>
// int func(int *a){
//     *a=*a*10;
//     return *a;
// }

// int main(){
//     int i=10;
//     func(&i);
//     printf("%d",i);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a=10, *b=&a, **c=&b;
//     printf("%d %d %d %d %d",a,b,c,*b,**c);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//     srand(time(0));
//     int a=rand()%100+1;
//     printf("%d\n",a);
//     int g;
//     printf("You have 10 Guessess.\nGuess the Number betweem 0 to 100:-\n");
//     for(int i=1;i<=10;i++){
//         printf("Guess %d:",i);
//         scanf("%d",&g);
//         if(g==a){
//             printf("You Have Guessed Right Number\n");
//             break;
//         }
//         else if(g>=0 && g<a){
//             printf("Higher Number Please\n");
//         }
//         else if(g>a && g<=100){
//             printf("Lower Number Please\n");
//         }
//         else{
//             printf("Wrong Input\n");
//             break;
//         }
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a=10, *b=&a, *c=&a;
//     printf("%d %d\n",a,b);
//     a++;
//     printf("%d %d\n",a,b);
//     b=b+500;
//     printf("%d %d %d %d %d",a,&a,b,*b,c);
//     return 0;
// }

// #include<stdio.h>

// void printarray(int *ptr,int n);
// void printarray(int ptr[],int n);

// int main(){
//     int arr[]={1,2,3,4,5,6};
//     printarray(arr,6);
//     return 0;
// }

// void printarray(int *ptr,int n){
//     *(ptr+2)=30;
//     for(int i=0;i<n;i++){
//         // printf("%d ",*ptr);
//         // ptr++;
//         printf("%d ",*(ptr+i));
//     }
// }

// void printarray(int ptr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",ptr[i]);
//         ptr[3]=10;
//     }
// }

// #include<stdio.h>

// // void printarray(int *ptr);
// void display(int m,int n,int arr[m][n]){
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int a[2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     display(2,2,a);
//     // printarray(&a[0][0]);
//     return 0;
// }

// void printarray(int *ptr){
//     for(int i=0;i<4;i++){
//         printf("%d ",*(ptr+i));
//     }
// }

// #include<stdio.h>
// #define M 2
// #define N 2

// void display(int arr[M][N])        // or, use `arr[][N]`
// {
//     for (int i = 0; i < M; i++)
//     {
//         for (int j = 0; j < N; j++) {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
 
// // Program to pass the 2D array to a function in C
// int main(void)
// {
//     int arr[M][N];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     display(arr);
 
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int s[]={1,3},b=4;
//     int *p=&s[0];
//     printf("%d %d",s,p);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a[10];
//     for(int i=0;i<10;i++){
//         a[i]=5*(i+1);
//     }
//     for(int i=0;i<10;i++){
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// void reverse(int *arr,int n){
//     int temp;
//     for(int i=0;i<n/2;i++){
//         temp=*(arr+i);
//         *(arr+i)=*(arr+n-1-i);
//         *(arr+n-1-i)=temp;
//     }
// }

// int main(){
//     int a[]={1,2,3,4,5,6};
//     // reverse(a);
//     reverse(&a[0],6);
//     for(int i=0;i<6;i++){
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// void count(int *arr){
//     int c=0;
//     for(int i=0;i<8;i++){
//         if(*(arr+i)>0){
//             c++;
//         }
//     }
//     printf("%d",c);
// }

// int main(){
//     int a[]={1,2,-3,4,-5,6,9,-9};
//     count(&a[0]);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a[3][3][3];
//     int *ptr=&a[0][0][0];
//     for(int i=0;i<27;i++){
//         printf("%d\n",ptr);
//         ptr++;
//     }

//     // for(int i=0;i<3;i++){
//     //     for(int j=0;j<3;j++){
//     //         for(int k=0;k<3;k++){
//     //             printf("%d\n",&a[i][j][k]);
//     //         }
//     //     }
//     // }
//     return 0;
// }

// #include<stdio.h>

// int main(){
    // char s[]={'3','c',' ','*','\0'};
    // char st[]="asfa234()&#$  safg/';dsDSFGs4534";
    // printf("%s",s);
    // printf("%s",st);
    // printf("\n%c",s[2]);
    // for(int i=0;i<5;i++){
    //     printf("%d\n",&s[i]);
    // }
    // char a[10];
    // // scanf("%s",a);
    // // printf("%s",a);
    // gets(a);
    // puts(a);
    // char *ptr="213 s3f fz23f s";
    // ptr="srs3423";
    // puts(ptr);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char a[10]="f3 2^*@",b[8];
//     printf("%d\n",strlen(a));
//     strcpy(b,a);
//     puts(b);
//     printf("%d\n",strlen(b));
//     printf("%d\n",strcmp(a,b));
//     strcat(a,b);
//     puts(a);
//     printf("%d\n",strcmp(a,b));
//     printf("%d\n",strcmp("ase","mds"));
//     printf("%d",strcmp("dsgse","ad"));
//     return 0;
// }

