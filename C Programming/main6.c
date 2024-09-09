// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int swg(char you,char comp){
//     //0 drwa,1 win,-1 lose

//     if(you==comp){
//         return 0;
//     }

//     if(you=='s'&&comp=='w'){
//         return 1;
//     }
//     else if(you=='w'&&comp=='g'){
//         return 1;
//     }
//     else if(you=='g'&&comp=='s'){
//         return 1;
//     }
//     else{
//         return -1;
//     }
// }

// int main(){
//     char you,comp;
    
//     srand(time(0));
//     int num=rand()%100+1;

//     if(num<33){
//         comp='s';
//     }
//     else if(num>33 && num<66){
//         comp='w';
//     }
//     else{
//         comp='g';
//     }

//     printf("|||-WELCOME TO SNAKE,WATER,GUN GAME-|||\n\n");
//     printf("Choose Snake's',Water'w',Gun'g'\n");
//     scanf("%c",&you);
//     int r=swg(you,comp);
//     printf("You- '%c', Computer-'%c'\n",you,comp);
//     if(r==0){
//         printf("--Draw--");
//     }
//     else if(r==1){
//         printf("--You Win--");
//     }
//     else{
//         printf("--You lost--");
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     float *ptr;
//     ptr=(float*)malloc(5*sizeof(float));
//     // for(int i=0;i<5;i++){
//     //     scanf("%f",&ptr[i]);
//     // }
//     for(int i=0;i<5;i++){
//         printf("%f ",ptr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int n;
//     int *ptr;
//     scanf("%d",&n);
//     ptr=(int*)calloc(n,sizeof(int));
    
//     for(int i=0;i<n;i++){
//         scanf("%d",&ptr[i]);
//     }

//     for(int i=0;i<n;i++){
//         printf("%d ",ptr[i]);
//     }
//     printf("\n");

//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int n;
//     int *ptr;
//     scanf("%d",&n);
//     ptr=(int*)calloc(n,sizeof(int));
//     for(int i=0;i<n;i++){
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",ptr[i]);
//     }
//     printf("\n");
//     ptr=realloc(ptr,5);
//     for(int i=0;i<5;i++){
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<5;i++){
//         printf("%d ",ptr[i]);
//     }
    
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     float *ptr;
//     ptr=(float*)malloc(5*sizeof(float));
//     for(int i=0;i<5;i++){
//         scanf("%f",&ptr[i]);
//     }
//     for(int i=0;i<5;i++){
//         printf("%f ",ptr[i]);
//     }
//     printf("\n");
//     ptr=realloc(ptr,10*sizeof(float));
//     for(int i=0;i<10;i++){
//         scanf("%f",&ptr[i]);
//     }
//     for(int i=0;i<10;i++){
//         printf("%f ",ptr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     float *ptr;
//     ptr=(float*)malloc(1000*sizeof(float));
//     for(int i=0;i<10;i++){
//         scanf("%f",&ptr[i]);
//         free(ptr);
//     }
//     for(int i=0;i<5;i++){
//         printf("%f ",ptr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *ptr;
//     ptr=(int*)calloc(5,sizeof(int));
//     for(int i=0;i<5;i++){
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<5;i++){
//         printf("%d ",ptr[i]);
//     }
//     printf("\n");
//     ptr=realloc(ptr,10*sizeof(int));
//     for(int i=0;i<10;i++){
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<10;i++){
//         printf("%d ",ptr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *ptr;
//     int n;
//     scanf("%d",&n);
//     ptr=(int*)calloc(10,sizeof(int));
//     for(int i=0;i<10;i++){
//         ptr[i]=n*(i+1);
//         printf("%d*%d=%d\n",n,i+1,ptr[i]);
//     }
//     printf("\n");
//     ptr=realloc(ptr,15*sizeof(int));
//     for(int i=0;i<15;i++){
//         ptr[i]=n*(i+1);
//         printf("%d*%d=%d\n",n,i+1,ptr[i]);
//     }
//     return 0;
// }