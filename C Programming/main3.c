// #include<stdio.h>

// int main(){
//     int i=7;
//     int *j=&i;
//     printf("%d\n",&i);
//     printf("%d\n",j);
//     printf("%d\n",i);
//     printf("%d\n",*j);
//     printf("%d\n",&j);
//     printf("%d\n",*(&j));
//     printf("%d\n",*(&i));
//     return 0;
// }

// #include<stdio.h>

// void wrong_swap(int a, int b);
// void swap(int *a, int *b);

// int main(){
//     int a=10, b=15;
//     wrong_swap(a,b);
//     printf("%d %d\n",a,b);
//     swap(&a,&b);
//     printf("%d %d\n",a,b);
//     return 0;
// }

// void wrong_swap(int a, int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }

// void swap(int *a, int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }

// #include<stdio.h>

// void address(int a);

// int main(){
//     int i=10, *j;
//     j=&i;
//     printf("%d\n",&i);
//     printf("%d\n",j);
//     printf("%d\n",*j);
//     printf("%d\n",*(&i));
//     address(i);
//     return 0;
// }

// void address(int a){
//     int *b;
//     b=&a;
//     printf("%d",b);
// }

// #include<stdio.h>

// void ten_times(int *x);

// int main(){
//     int a=10;
//     ten_times(&a);
//     return 0;
// }

// void ten_times(int *x){
//     int y;
//     y=10*(*x);
//     printf("%d\n",10*(*x));
//     printf("%d",y);
// }

// #include<stdio.h>

// void calculate(int i, int j, int *sum, float *avg){
//     *sum= i+j;
//     *avg= (float)*sum/2;
// }

// int main(){
//     int a=10,b=15;
//     int sum;
//     float avg;
//     calculate(a,b,&sum,&avg);
//     printf("Sum=%d   Average=%f",sum,avg);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i=10,*j,**k;
//     j=&i;
//     k=&j;
//     printf("%d",**k);
//     return 0;
// }