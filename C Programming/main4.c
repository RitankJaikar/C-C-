// #include<stdio.h>

// int main(){
//     int marks[5];
    // printf("Enter marks of Student 1: ");
    // scanf("%d",&marks[0]);
    // printf("Enter marks of Student 2: ");
    // scanf("%d",&marks[1]);
    // printf("Enter marks of Student 3: ");
    // scanf("%d",&marks[2]);
    // printf("Enter marks of Student 4: ");
    // scanf("%d",&marks[3]);
    // printf("Enter marks of Student 5: ");
    // scanf("%d",&marks[4]);

//     for(int i=0;i<5;i++){
//         printf("Enter marks of Student %d: ",i+1);
//         scanf("%d",&marks[i]);
//     }

//     // printf("Entered marks are: %d, %d, %d, %d and %d",marks[0],marks[1],marks[2],marks[3],marks[4]);
//     printf("Entered marks are: ");
//     for(int i=0;i<5;i++){
//         printf("%d ",marks[i]);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i=1,a=2;
//     int *j=&i, *m=&a;
//     char l;
//     char *k=&l;
//     printf("j=%d\n",j);
//     printf("%d\n",*j);
//     printf("m=%d\n",m);
//     j++;
//     printf("%d\n",j);
//     j--;
//     printf("%d\n",j);
//     j--;
//     printf("j=%d\n",j);
//     printf("%d\n",j-m);
//     printf("k=%d\n",k+5);

//     printf("%d %d\n",j, &i);
    
//     if(j==m){
//         printf("AAA\n");
//     }

//     int a=10;
//     int *b=&a;
//     int **c=&b;
//     printf("%d %d %d %d %d\n",a,b,&a,&b,c);
//     return 0;
// }

// #include<stdio.h>
// void swap(int *x,int *y);

// int main(){
//     int a=10,b=5;
//     swap(&a,&b);
//     printf("%d %d",a,b);
//     return 0;
// }
// void swap(int *x,int *y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }

// #include<stdio.h>

// int main(){
//     int marks[5];
//     int *ptr;
//     ptr=&marks[0];
//     for(int i=0;i<5;i++){
//         printf("Enter the marks of Student %d: ",i+1);
//         scanf("%d",ptr);
//         ptr++;
//     }
//     for(int i=0;i<5;i++){
//         printf("Marks of Student %d is: %d\n",i+1,marks[i]);
//     }
//     return 0;
// }

// #include<stdio.h>

// void printArr(int *ptr,int n){
//     for(int i=0;i<n;i++){
//         printf("The vlue of element %d is:%d\n",i+1,*(ptr+i));
//     }
//     *(ptr+8)=342;
// }

// void printArr(int ptr[],int n){
//     for(int i=0;i<n;i++){
//         printf("The vlue of element %d is: %d\n",i+1,ptr[i]);
//     }
//     ptr[8]=342;
// }

// int main(){
//     int arr[]={3,342,32,214,5,642,45,53,63,32};
//     printArr(arr,10);
//     printf("%d",arr[8]);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int marks[5][2];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<2;j++){
//             if(j==0){
//             printf("Enter Marks of Student %d in Maths: ",i+1);
//             scanf("%d",&marks[i][j]);
//             }
//             else{
//             printf("Enter Marks of Student %d in Physics: ",i+1);
//             scanf("%d",&marks[i][j]);
//             }
//         }
//     }
//     printf("Entered Marks:\n");
//     for(int i=0;i<5;i++){
//         for(int j=0;j<2;j++){
//             printf("Student %d Subject %s: %d\n",i+1,j==0?"Maths":"Physics",marks[i][j]);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>

// void display(int ptr[3][3]){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",ptr[i][j]);
//         }
//         printf("\n");
//     }
// }

// void display(int *ptr){
//     for(int i=0;i<9;i++){
//         printf("%d ",*(ptr+i));
//     }
// }

// int main(){
//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("Enter element[%d][%d]: ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     display(&arr[0][0]);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int arr[10]={12,34,23,53,12,421,43,2,2,5};
//     int *ptr;
//     ptr=&arr[0];
//     printf("%d:%d   %d:%d\n",ptr,*ptr,ptr+2,*(ptr+2));
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int table5[10];
//     int *ptr=table5;
//     for(int i=1;i<=10;i++){
//         *ptr=5*i;
//         ptr++;
//     }
//     for(int i=0;i<10;i++){
//         printf("5 x %d = %d\n",i+1,table5[i]);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int table[10],num;
//     int *ptr=table;
//     printf("Enter a Number: ");
//     scanf("%d",&num);
//     for(int i=1;i<=10;i++){
//         *ptr=num*i;
//         ptr++;
//     }
//     for(int i=0;i<10;i++){
//         printf("%d x %d = %d\n",num,i+1,table[i]);
//     }
//     return 0;
// }

// #include<stdio.h>

// void reverse(int arr[],int n){
//     for(int i=0;i<n/2;i++){
//         int temp;
//         temp=arr[i];
//         arr[i]=arr[(n-1)-i];
//         arr[(n-1)-i]=temp;
//     }
// }

// void reverse(int *ptr,int n){
//     for(int i=0;i<n/2;i++){
//         int temp;
//         temp=*(ptr+i);
//         *(ptr+i)=*(ptr+4-i);
//         *(ptr+4-i)=temp;
//     }
// }

// int main(){
//     int arr[5]={23,43,63,65,21};
//     reverse(arr,5);
    
    // int n=5,N,temp,i;
    // N=n-1;
    // for(i=0;i<n/2;i++){
    //     temp=arr[i];
    //     arr[i]=arr[N-i];
    //     arr[N-i]=temp;
    // }

//     for(int i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>

// void positive(int a[],int n){
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(a[i]>0){
//             j++;
//         }
//     }
//     printf("Total number of positive integers in the Array are: %d",j);
// }

// int main(){
//     int a[6]={21,45,-23,43,-97,3};
//     positive(a,6);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a[3][10];
//     for(int j=0;j<10;j++){
//         a[0][j]=2*(j+1);
//         a[1][j]=7*(j+1);
//         a[2][j]=9*(j+1);
//     }
    
//     for(int j=0;j<10;j++){
//         printf("2 x %d = %d\n",j+1,a[0][j]);
//     }
//     printf("\n");
//     for(int j=0;j<10;j++){
//         printf("7 x %d = %d\n",j+1,a[1][j]);
//     }
//     printf("\n");
//     for(int j=0;j<10;j++){
//         printf("9 x %d = %d\n",j+1,a[2][j]);
//     }
//     return 0;
// }

// int main(){
//     int a[1][10],num;
//     scanf("%d",&num);
//     for(int j=0;j<10;j++){
//         a[0][j]=num*(j+1);
//     }
    
//     for(int j=0;j<10;j++){
//         printf("%d x %d = %d\n",num,j+1,a[0][j]);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a[2][4][3], *ptr;
//     ptr=&a[0][0][0];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<4;j++){
//             for(int k=0;k<3;k++){
//                 printf("Address of a[%d][%d][%d] is %d\n",i,j,k,&a[i][j][k]);
//                 // printf("Address of a[%d][%d][%d] is %d\n",i,j,k,ptr);
//                 // ptr++;
//             }
//         }
//     }
//     return 0;
// }