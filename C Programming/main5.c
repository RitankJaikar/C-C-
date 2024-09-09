// #include<stdio.h>

// int main(){
//     char a[]={'R','i','t','a','n','k','\0'};
//     // char a[]="Ritank";
//     char *ptr=a;
//     for(int i=0;*ptr!='\0';i++){
//         printf("%c",a[i]);
//         ptr++;
//     }
//     // while(*ptr!='\0'){
//     //     printf("%c",*ptr);
//     //     ptr++;
//     // }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char s1[20];
//     char s2[20];
//     char c;
//     int i=0;

//     gets(s1);
//     puts(s1);

    
//     while(c!='\n'){
//         fflush(stdin);
//         scanf("%c",&c);
//         s2[i]=c;
//         i++;
//     }
//     s2[i-1]='\0';
//     puts(s2);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int len(char *a){
//     int count=0;
//     while(*a!='\0'){
//         count++;
//         a++;
//     }
//     return count;
// }

// int main(){
//     char s[]="f f3 3s#$";
//     printf("%d\n",strlen(s));
//     printf("%d\n",sizeof(s)-1);

//     printf("%d",len(s));

//     // int i=0,count=0;
//     // while(s[i]!='\0'){
//     //     i++;
//     //     count++;
//     // }
//     // printf("%d",count);
//     return 0;
// }

// #include<stdio.h>

// void slice(char *ptr,int m,int n){
//     int i=0;
//     while((m+i)<=n){
//         ptr[i]=ptr[i+m];
//         i++;
//     }
//     ptr[i]='\0'; 
// }
// int main(){
//     char s[]="Awexc35@#@!fs";
//     puts(s);
//     slice(s,2,6);
//     printf("%s",s);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// void copy(char *a,char *s){
//     int i=0;
//     while(s[i]!='\0'){
//         a[i]=s[i];
//         i++;
//     }
//     a[i]='\0';
// }

// int main(){
//     char s[]="33d)[#$SD";
//     char a[30];
//     copy(a,s);
//     puts(a);
//     printf("%d",strcmp(s,a));
//     return 0;
// }

// #include<stdio.h>

// void encrypt(char *ptr){
//     int i=0;
//     while(ptr[i]!='\0'){
//         *ptr=*ptr+1;
//         ptr++;
//     }
// }
// void decrypt(char *pt){
//     int i=0;
//     while(pt[i]!='\0'){
//         *pt=*pt-1;
//         pt++;
//     }
// }

// int main(){
//     char s[10]="Ritank08";
//     encrypt(s);
//     puts(s);
//     decrypt(s);
//     puts(s);
//     return 0;
// }

// #include<stdio.h>

// int occurance(char *pt,char c){
//     int i=0,count=0;
//     while(pt[i]!='\0'){
//         if(pt[i]==c){
//             count++;
//         }
//         i++;
//     }
//     return count;
// }

// int occurance(char p[],char c){
//     char *pt=p;
//     int count=0;
//     while(*pt!='\0'){
//         if(*pt==c){
//             count++;
//         }
//         pt++;
//     }
//     return count;
// }

// int main(){
//     char s[50]="Ritank 08 Jaikar";

//     int i=0,count=0;
//     while(s[i]!='\0'){
//         if(s[i]=='a'){
//             count++;
//         }
//         i++;
//     }
//     printf("%d\n",count);

//     int o=occurance(s,'a');
//     printf("%d",o);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char s[50]="Ritank 08 Jaikar";
//     int i=0,flag=0;
//     while(s[i]!='\0'){
//         if(s[i]=='0'){
//             flag=1;
//             break;
//         }
//         i++;
//     }
//     if(flag==1){
//         printf("Present");
//     }
//     else{
//         printf("Not Present");
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// struct employee{
//     int code;
//     int salary;
//     char name[];
// };

// int main(){
//     // struct employee e1;
//     // struct employee e2;
//     // struct employee e3;
//     struct employee e1,e2,e3;

//     e1.code=1;
//     e3.code=2;
//     e3.code=3;

//     e1.salary=10000;
//     e2.salary=11000;
//     e3.salary=12000;

//     strcpy(e1.name,"Kumar");
//     strcpy(e2.name,"Rana");
//     strcpy(e3.name,"Khan");

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// struct employee{
//     int code;
//     int salary;
//     char name[20];
// };

// void show(struct employee a1){
//     a1.code=10;
//     a1.salary=123;
//     printf("%d\n",a1.code);
//     printf("%d\n",a1.salary);
//     strcpy(a1.name,"Ritank");
//     puts(a1.name);
//     printf("\n");
// }

// int main(){
//     struct employee e1;
//     // struct employee *ptr;
//     // ptr=&e1;
//     // (*ptr).code=10;
//     // ptr->code=10;
//     // printf("%d",e1.code);
//     // printf("%d",ptr->code);
//     // printf("%d",(*ptr).code);

//     e1.code=45;
//     strcpy(e1.name,"RJ");
//     show(e1);
//     printf("%d\n",e1.code);
//     printf("%d\n",e1.salary);
//     puts(e1.name);
//     return 0;
// }

// #include<stdio.h>

// typedef struct vector2d{
//     int x1,y1,x2,y2;
// }vec;

// void show(vec v){
//     printf("(%d,%d)---->(%d,%d)\n",v.x1,v.x2,v.y1,v.y2);
// }

// vec addVec(vec vc1,vec vc2){
//     vec result;
//     result.x1=vc1.x1+vc2.x1;
//     result.x2=vc1.x2+vc2.x2;
//     result.y1=vc1.y1+vc2.y1;
//     result.y2=vc1.y2+vc2.y2;
//     return result;
// }

// int main(){
//     vec v1,v2,sum;
//     v1.x1=10;
//     v1.x2=12;
//     v1.y1=20;
//     v1.y2=22;

//     v2.x1=14;
//     v2.x2=16;
//     v2.y1=30;
//     v2.y2=24;

//     // printf("(%d,%d)---->(%d,%d)\n",v1.x1,v1.x2,v1.y1,v1.y2);
//     // printf("(%d,%d)---->(%d,%d)\n",v1.x1,v1.x2,v1.y1,v1.y2);

//     show(v1);
//     show(v2);
//     sum=addVec(v1,v2);
//     show(sum);

//     return 0;
// }

// #include<stdio.h>

// typedef struct complex{
//     int real,img;
// }i;

// void display(i j){
//     printf("%d+i%d \n",j.real,j.img);
// }

// int main(){
//     // i i1={2,3},i2={7,4};
//     i comp[5];
//     // printf("Complex number 1: %d+i%d \n",i1.real,i1.img);
//     // printf("Complex number 1: %d+i%d \n",i2.real,i2.img);
//     // display(i1);
//     // display(i2);
//     for(int i=0;i<5;i++){
//         scanf("%d",&comp[i].real);
//         scanf("%d",&comp[i].img);
//     }
//     for(int i=0;i<5;i++){
//         display(comp[i]);
//     }
    
//     return 0;
// }

// #include<stdio.h>

// typedef struct TIME{
//     int hr;
//     int min;
//     int sec;
// }t;

// void display(t tm){
//     printf("TIME: %dhr:%dmin:%dsec \n",tm.hr,tm.min,tm.sec);
// }

// int main(){
//     t t1={01,02,03},t2={10,59,06};
//     display(t1);
//     display(t2);
//     if(t1.hr>t2.hr){
//         printf("T1 is greater time.");
//     }
//     else if(t1.hr<t2.hr){
//         printf("T2 is greater time.");
//     }
//     else if(t1.min>t2.min){
//         printf("T1 is greater time.");
//     }
//     else if(t1.min<t2.min){
//         printf("T2 is greater time.");
//     }
//     else if(t1.sec>t2.sec){
//         printf("T1 is greater time.");
//     }
//     else{
//         printf("T2 is greater time.");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int num1,num2,num3,num4,num5,num6,num7;
//     FILE *ptr;
//     ptr=fopen("text.txt","r");
//     if(ptr==NULL){
//         printf("File does not exist\n");
//     }
//     fscanf(ptr,"%d",&num1);
//     fscanf(ptr,"%d",&num2);
//     fscanf(ptr,"%d",&num3);
//     fscanf(ptr,"%d",&num4);
//     fclose(ptr);
//     printf("%d %d %d %d",num1,num2,num3,num4);

//     ptr=fopen("text.txt","w");
//     fprintf(ptr,"123 23 32\n 3523 hello");
//     fclose(ptr);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     ptr=fopen("text.txt","r");
//     // char c=fgetc(ptr);
    // // printf("%c",c);
    // // printf("%c%c%c%c%c%c",fgetc(ptr),fgetc(ptr),fgetc(ptr),fgetc(ptr),fgetc(ptr),fgetc(ptr));
    // printf("%c",getc(ptr));
    // printf("%c",getc(ptr));
    // printf("%c",getc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // fclose(ptr);

    // FILE *ptr;
    // ptr=fopen("autogenerated.txt","w");
    // fputc('h',ptr);
    // fputc('e',ptr);
    // fputc('l',ptr);
    // fputc('l',ptr);
    // putc('0',ptr);
    // putc('j',ptr);
    // putc('i',ptr);
    // fclose(ptr);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     ptr=fopen("new.txt","r");

//     // int i=0;
//     // while(i<100){
//     //     printf("%c",fgetc(ptr));
//     //     i++;
//     // }

//     // while(fgetc(ptr)!=EOF){     //mot working
//     //     printf("%c",fgetc(ptr));
//     // }

//     char c=fgetc(ptr);
//     while(c!=EOF){
//         printf("%c",c);
//         c=fgetc(ptr);
//     }
//     return 0;
// }

// #include<stdio.h>

// // void table(int n){
// //     for(int i=1;i<=10;i++){
// //         printf("%d*%d=%d\n",n,i,n*i);
// //     }
// // }

// int main(){
//     // FILE *ptr;
//     // ptr=fopen("new1.txt","r");
//     // int num;
//     // fscanf(ptr,"%d",&num);
//     // fclose(ptr);
//     // printf("Number is: %d\n",num);
//     // table(num);

//     FILE *ptr;
//     ptr=fopen("table.txt","w");
//     int num;
//     scanf("%d",&num);
//     for(int i=1;i<=10;i++){
//         fprintf(ptr,"%d*%d=%d\n",num,i,num*i);
//     }
//     fclose(ptr);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     ptr=fopen("new1.txt","r");
//     char c=fgetc(ptr);
//     FILE *ptr2;
//     ptr2=fopen("new2.txt","w");
//     while(c!=EOF){
//         printf("%c",c);
//         fputc(c,ptr2);
//         fputc(c,ptr2);
//         c=fgetc(ptr);
//     }
//     fclose(ptr);
//     fclose(ptr2);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     ptr=fopen("new3.txt","w");
//     char e1[10],e2[10];
//     int s1,s2;
//     printf("Name and Salary of Employee 1:-\n");
//     printf("NAME: ");
//     gets(e1);
//     printf("SALARY: ");
//     scanf("%d",&s1);
//     printf("Name and Salary of Employee 2:\n");
//     printf("NAME: ");
//     fflush(stdin);
//     gets(e2);
//     printf("SALARY: ");
//     scanf("%d",&s2);
//     printf("Employee 1:- Name:%s Salary:%d\n",e1,s1);
//     printf("Employee 1:- Name:%s Salary:%d\n",e2,s2);

//     fprintf(ptr,"Employee 1:- Name:%s Salary:%d\n",e1,s1);
//     fprintf(ptr,"Employee 2:- Name:%s Salary:%d\n",e2,s2);
//     fclose(ptr);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     ptr=fopen("new4.txt","r");
//     int num;
//     fscanf(ptr,"%d",&num);
//     fclose(ptr);
//     ptr=fopen("new4.txt","w");
//     fprintf(ptr,"%d",2*num);
//     fclose(ptr);
//     return 0;
// }