// #include<stdio.h>

// int main(){
    /*Q1.Area Of Rectangle
    int length, breadth, area;
    // length = 20;
    // breadth = 10;
    printf("Enter Length: ");
    scanf("%d", &length);
    printf("Enter Breadth: ");
    scanf("%d", &breadth);
    area=length*breadth;
    printf("Area of rectangle is: %d",area);
    */

    /*
    //Q2.Area of Circle
    const int Pi=3.14;
    float radius=5,area;
    area=Pi*radius*radius;
    printf("Area of circle is:%f",area);
    //Volume of Cylinder
    float height=10,volume;
    volume=area*height;
    printf("\nVolume of Cylinder is:%f",volume);
    */

    /*
    //Q3.Conver Celcius to Farenheit
    float c,f;
    printf("Enter the temperature in Celcius:");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("Celcius to Farenheit:%f",f);
    
    //Q4.Simple Interest
    float P,Y,R;
    printf("Enter Principal, No. of Year, Rate Of Interest:\n");
    scanf("%f %f %f",&P,&Y,&R);
    float SI=(P*Y*R)/100;
    printf("Simple Interest=%f",SI);
    */

    // To find if the number is even or odd.
    // int num;
    // printf("Enter a number: ");
    // scanf("%d",&num);
    // num%2==0?printf("Even"):printf("Odd");
    // if(num%2==0)
    // {
    //     printf("\nNumber is Even.");
    // }
    // else 
    // {
    //     printf("Number is Odd.");
    // }
    // return 0;

    // int age;
    // printf("Enter Your Age: ");
    // scanf("%d",&age);
    // age>=18 && age<=90? printf("Can Drive."): printf("Cannot Drive.");
    // if(age>=18){
    //     if(age<=90){
    //         printf("You can Drive.");
    //     }
    //     else{
    //     printf("You can not Drive.");
    //     }
    // }
    // else{
    //     printf("You can not Drive.");
    // }

    // int rate;
    // printf("Enter your rating(1-5): ");
    // scanf("%d",&rate);
    // switch(rate){
    //     case 1:
    //     printf("Your rating is 1.");
    //     break;
    //     case 2:
    //     printf("Your rating is 2.");
    //     break;
    //     case 3:
    //     printf("Your rating is 3.");
    //     break;
    //     case 4:
    //     printf("Your rating is 4.");
    //     break;
    //     case 5:
    //     printf("Your rating is 5.");
    //     break;
    //     default:
    //     printf("Wrong Choice.");
    // }

    // int marks;
    // printf("Enter The Marks(Out of 100): ");
    // scanf("%d",&marks);

    // if(marks>=0 && marks<=100){
    //     printf("Entered Marks is %d.\n",marks);
    // }
    // else{
    //     printf("Wrong Marks entered.");
    // }

    // if(marks>90 && marks<=100){
    //     printf("A Grade");
    // }
    // else if(marks>80 && marks<=90){
    //     printf("B Grade");
    // }
    // else if(marks>70 && marks<=80){
    //     printf("C Grade");
    // }
    // else if(marks>60 && marks<=70){
    //     printf("D Grade");
    // }
    // else if(marks>=0 && marks<=60){
    //     printf("F Grade");
    // }

    // int p,c,m;
    // float avg;
    // printf("Enter Marks Of Physics Chemistry Maths Respectively(Out Of 100):\n");
    // scanf("%d %d %d",&p,&c,&m);
    // printf("Physics:%d \nChemistry:%d \nMaths:%d",p,c,m);
    // avg=(p+c+m)/3;
    // printf("\nAverage Marks:%.2f",avg);
    // if(avg>=40 && p>=33 && c>=33 && m>=33){
    //     printf("\nPASS");
    // }
    // else{
    //     printf("\nFAIL");
    // }

    // int income,tax;
    // printf("Enter your income: ");
    // scanf("%d",&income);
    // if(income>=250000 && income<500000){
    //     tax=income*5/100;
    //     printf("Income Tax is: %d",tax);
    // }
    // else if(income>=500000 && income<=1000000){
    //     tax=income*20/100;
    //     printf("Income Tax is: %d",tax);
    // }
    // else if(income>1000000){
    //     tax=income*30/100;
    //     printf("Income Tax is: %d",tax);
    // }
    // else{
    //     printf("You do not need to pay Tax. Your income is %d which is less than 2.5 Lakhs.",income);
    // }

    // float income, tax=0;
    // printf("Enter your income: ");
    // scanf("%f",&income);
    // if(income>=250000 && income<500000){
    //     tax=(income-250000)*5/100;
    // }
    // else if(income>=500000 && income<=1000000){
    //     tax=(income-250000)*20/100;
    // }
    // else if(income>1000000){
    //     tax=(income-250000)*30/100;
    // }
    // printf("Income Tax is: %f",tax);
    // return 0;
    // int year;
    // printf("Enter any Year: ");
    // scanf("%d",&year);
    // if(year%400==0){
    //     printf("%d is a Leap Year",year);
    // }
    // else if(year%100==0){
    //     printf("%d is not a Leap Year",year);
    // }
    // else if(year%4==0){
    //     printf("%d is a Leap Year",year);
    // }
    // else{
    //     printf("%d is not a Leap Year",year);
    // }

    // 97-122 are a to z in ASCII
    // char ch;
    // printf("Enter an Alphabet: ");
    // scanf("%c",&ch);
    // if(ch>=97 && ch<=122){
    //     printf("%c is Lowercase.",ch);
    // }
    // else{
    //     printf("%c is not Lowercase.",ch);
    // }
    // return 0;

    // int a,b,c,d;
    // printf("Enter four numbers:\n");
    // scanf("%d %d %d %d",&a,&b,&c,&d);
    // if(a>b && a>c && a>d){
    //     printf("%d is Greatest.",a);
    // }
    // else if(b>c && b>d){
    //     printf("%d is Greatest.",b);
    // }
    // else if(c>d){
    //     printf("%d is Greatest.",c);
    // }
    // else{
    //     printf("%d is Greatest.",d);
    // }

    // int i=0;
    // while(i<=20){
    //     if(i>=10){
    //         printf("%d\n",i);
    //     }
    //     i++;
    // }

    // int a,i=0;
    // scanf("%d",&a);
    // do{
    //     i++;
    //     printf("%d\n",i);
    // }while(i<a);
    // for(int i=5;i<0;i--){
    //     printf("%d\n",i);
    // }
    // int n;
    // scanf("%d",&n);
    // for(int i=1;i<=10;i++){
    //     printf("%dx%d=%d\n",n,i,n*i);
    // }
    // int n=10;
    // for(int i=10;i;i--){
    //     printf("%dx%d=%d\n",n,i,n*i);
    // }

    // int n,i=10;
    // scanf("%d",&n);
    // do{
    //     printf("%dx%d=%d\n",n,i,n*i);
    //     i--;
    // }while(i>0);

    // int i=1,n=0;
    // while(i<=10){
    //     while(i){
    //         n=i+n;
    //         break;
    //     }
    //     i++;
    // }
    // printf("%d",n);

    // int i=1,sum=0;
    // while(i<=10){
    //     sum=sum+i;
    //     i++;
    // }
    // printf("%d",sum);

    // int i=1,sum=0;
    // do{
    //     sum=sum+i;
    //     i++;
    // }while(i<=10);
    // printf("%d",sum);

    // int n=8,sum=0;
    // for(int i=1;i<=10;i++){
    //     sum=sum+n*i;
    // }
    // printf("%d",sum);

    // int num,sum=0;
    // scanf("%d",&num);
    // for(int i=1;i<=num;i++){
    //     sum=sum+i;
    // }
    // printf("%d",sum);

    // int num,i=1,sum=0;
    // scanf("%d",&num);
    // while(i<=num){
    //     sum=sum+i;
    //     i++;
    // }
    // printf("%d",sum);

    // int num,factorial=1;
    // scanf("%d",&num);
    // for(int i=1;i<=num;i++){
    //     factorial=factorial*i;
    // }
    // printf("%d",factorial);

    //WRONG CODE
    // int num;
    // scanf("%d",&num);
    // for(int i=2;i<num;i++){
    //     if(num%i==0){
    //         printf("Not a Prime Number.");
    //         break;
    //     }
    //     else{
    //     printf("Prime Number.");
    //     break;
    //     }
    // }
    // if(num==0 || num==1){
    //     printf("Not a Prime Number.");
    // }
    // else if(num==2){
    //     printf("Prime Number.");
    // }

    // int num,flag=0;
    // scanf("%d",&num);
    // if(num==0 || num==1)
    // flag=1;
    // for(int i=2;i<=num/2;++i){
    //     if(num%i==0){
    //         flag=1;
    //         break;
    //     }
    // }
    // if(flag==1)
    // printf("Not a Prime Number.");
    // else
    // printf("Prime Number.");

    // int num,flag=0,i=2;
    // scanf("%d",&num);
    // if(num==0 || num==1)
    // flag=1;
    // do{
    //     if(num%i==0){
    //         flag=1;
    //         break;
    //     }
    //     ++i;
    // }while(i<=num/2);
    // if(flag==1)
    // printf("Not a Prime Number.");
    // else
    // printf("Prime Number.");
    // return 0;
// }