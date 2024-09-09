#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main(){

    // cout<<"Namaste Dunia"<<endl;

    // char ch=252;
    // cout<<ch;

    // unsigned int a=-3;
    // cout<<4/9.4;
    // char a;
    // a=cin.get();
    // cout<<a;
    // int a=2;
    // int b=a+1;
    // if((a=3)==b){
    //     cout<<a;
    // }
    // cout<<a;
    // int a=24;
    // if(a>20){
    //     cout<<"Love";
    // }
    // else if(a==24){
    //     cout<<"Lovely";
    // }
    // cout<<a;

    // char ch;
    // cin>>ch;
    // if(ch>=97 && ch<=122){
    //     cout<<"LOWER CASE";
    // }
    // else if(ch>=65 && ch<=90){
    //     cout<<"UPPER CASE";
    // }
    // else if(ch>=48 && ch<=57){
    //     cout<<"NUMERIC VALUE";
    // }
    // 
    // int n;
    // cin>>n;
    // int i=2;
    // int flag=0;
    // while(i<n){
    //     if(n%i==0){
    //         flag=1;
    //         break;
    //     }
    //     i++;
    // }
    // if(flag==1){
    //     cout<<"Not Prime";
    // }
    // else if(n==1){
    //     cout<<"Not Prime";
    // }
    // else{
    //     cout<<"Prime";
    // }
    // 
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=(n-i+1)){
    //         cout<<j;
    //         j++;
    //     }
    //     int k=i-1;
    //     while(k){
    //         cout<<"**";
    //         k--;
    //     }
    //     int l=n-i+1;
    //     while(l>0){
    //         cout<<l;
    //         l--;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // int a=4;
    // int b=6;
    // cout<<(a&b)<<endl;
    // cout<<(a|b)<<endl;
    // cout<<(a^b)<<endl;
    // cout<<(~a)<<endl;

    // cout<<(17>>1)<<endl;
    // cout<<(17>>2)<<endl;
    // cout<<(19<<1)<<endl;
    // cout<<(21<<2)<<endl;

    // int i=7;
    // cout<<(++i)<<endl;  //8
    // cout<<(i++)<<endl;  //8
    // cout<<(i--)<<endl;  //9
    // cout<<(--i)<<endl;  //7

    // int a=1;
    // int b=2;
    
    // if((a--)>0 || (++b)>2){
    //     cout<<"qwer";
    // }
    // else{
    //     cout<<"asdf";
    // }
    // cout<<a<<" "<<b;

    // int num=3;
    // cout<<(25*(++num));

    // int a=1,b=a++,c=++a;
    // cout<<b<<c;

    // for(int a=10,b=11;a>=0 && b>=1; a--,b--){
    //     cout<<a<<" "<<b<<endl;
    // }

    // int n;
    // cin>>n;
    // int x=0;
    // int y=1;
    // cout<<"Febonacci series:"<<endl;
    // cout<<x<<endl;
    // cout<<y<<endl;
    // for(int i=1;i<=n-2;i++){
    //     int series=x+y;
    //     x=y;
    //     y=series;
    //     cout<<series<<endl;
    // }

    // int n;
    // cin>>n;
    // int flag=0;
    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         flag=1;
    //         break;
    //     }
    // }
    // if(n==1){
    //     cout<<"Not Prime";
    // }
    // else if(flag==0){
    //     cout<<"Prime";
    // }
    // else{
    //     cout<<"Not Prime";
    // }

    // for(int i=0;i<5;i++){
    //     cout<<i<<endl;
    //     cout<<"HI"<<endl;
    //     continue;
    //     cout<<"Oyeee"<<endl;
    // }

    // for(int i=0;i<=15;i+=2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }

    // for(int i=0;i<5;i++){
    //     for(int j=i;j<=5;j++){
    //         if(i+j==10){
    //             break;
    //         }
    //         cout<<i<<" "<<j<<endl;
    //     }
    // }

    // int num;
    // cin>>num;
    // int digits=0;
    // for(int i=1; ;i=i*10){
    //     if(num/i==0){
    //         break;
    //     }
    //     else{
    //         digits++;
    //     }
    // }
    // cout<<digits<<endl;

    // int div=10;
    // int sum=0;
    // int a=0,b=0;
    // for(int j=1;j<=20;j++){
    //     a=num%div;
    //     div=div*10;
    //     b=(num%div-a)/(div/10);
    //     sum=sum+b;
    //     if(j==1){
    //         sum=sum+a;
    //     }
    // }
    // cout<<sum;

    // int sum=0,product=1;
    // int div=10;
    // for(int i=1;i<=digits;i++){
    //     int a=num%div;
    //     int b=((num-a)%(div*10))/div;
    //     div=div*10;
    //     if(i==1){
    //         sum=sum+a;
    //     }
    //     sum=sum+b;
    // }
    // cout<<sum<<endl;
    // div=10;
    // if(digits==1){
    //     product=num;
    // }
    // else{
    //     for(int i=1;i<=digits-1;i++){
    //         int a=num%div;
    //         int b=((num-a)%(div*10))/div;
    //         div=div*10;
    //         if(i==1){
    //             product=product*a;
    //         }
    //         product=product*b;
    //     }
    // }
    // cout<<product<<endl;
    // cout<<product-sum<<endl;

    // int num;
    // cin>>num;
    // int sum=0,product=1;
    // for(int i=1;num!=0;i++){
    //     int a=num%10;
    //     int b=num/10;
    //     num=b;
    //     sum=sum+a;
    //     product=product*a;
    // }
    // cout<<sum<<endl;
    // cout<<product<<endl;
    // cout<<product-sum;

    // int num;
    // cin>>num;
    // int sum=0,product=1;
    // while(num!=0){
    //     int digit=num%10;
    //     num=num/10;
    //     sum=sum+digit;
    //     product=product*digit;
    // }
    // cout<<sum<<endl;
    // cout<<product<<endl;
    // cout<<product-sum;

    // int n;
    // cin>>n;
    // int count=0;
    // while(n!=0){
    //     if(n&1!=0){
    //         count++;
    //     }
    //     n=n>>1;
    // }
    // cout<<count;

    // int n;
    // cin>>n;
    // int count =0;
    // while(n){
    //     if(n%2==1){
    //         count++;
    //     }
    //     n=n/2;
    // }
    // cout<<count;
    
    // int n;
    // cin>>n;
    // int digit=0,rev=0;
    // while(n){
    //     digit=n%10;
    //     rev=rev*10+digit;
    //     // cout<<digit<<endl;
    //     // digit=digit*10;
    //     n=n/10;
    // }
    // cout<<rev;

    // int n;
    // cin>>n;
    // while(n!=0){
    //     int bit=n%2;
    //     n=n/2;
    //     cout<<(bit);
    // }

    // int n;
    // cin>>n;
    // int ans=0,i=0;
    // while(n!=0){
    //     int bit=n&1;
    //     ans=pow(10,i)*bit+ans;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<ans;

    // int n;
    // cout<<"Enter a binary number: ";
    // cin>>n;
    // int num=0,i=0;
    // while(n!=0){
    //     int digit=n%10;
    //     num=num+pow(2,i)*digit;
    //     n=n/10;
    //     i++;
    // }
    // cout<<num;

    // int n;
    // cin>>n;
    // int digit=0,rev=0;
    // while(n!=0){
    //     digit=n%10;
    //     if((rev<(pow(-2,31))/10) || (rev>(pow(2,31)-1)/10)){
    //         return 0;
    //     }
    //     rev=rev*10+digit;
    //     n=n/10;
    // }
    // cout<<rev;

    // int n;
    // cin>>n;
    // int i=0,_1scomp=0,ans=0;
    // if(n==0){
    //     cout<<1;
    // }
    // while(n!=0){
    //     int bit=n&1;
    //     _1scomp=!bit*pow(10,i)+_1scomp;
    //     ans=!bit*pow(2,i)+ans;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<_1scomp<<"   "<<ans;

    // int n;
    // cin>>n;
    // int num=n;
    // int mask=0;
    // if(n==0){
    //     cout<<1;
    // }
    // else{
    // while(num!=0){
    //     mask=(mask<<1)|1;
    //     num=num>>1;
    // }
    // cout<<(mask&(~n));
    // }

    // int n;
    // cin>>n;
    // for(int i=31;i>=0;i--){
    //     int a=n>>i;
    //     int bit=a&1;
    //     cout<<bit;
    // }

    // int n;
    // cin>>n;
    // int i=0,ans=0;
    // while(i<=30){
    //     if(n==pow(2,i)){
    //         ans=1;
    //         break;
    //     }
    //     i++;
    // }
    // cout<<ans;

    // int n;
    // cin>>n;
    // int ans=0,m=1;
    // if(n==1){
    //     ans=1;
    // }
    // for(int i=0;i<30;i++){
    //     m=m*2;
    //     if(n==m){
    //         ans=1;
    //         break;
    //     }
    // }
    // cout<<ans;

    // int a,b;
    // cin>>a>>b;
    // char ch;
    // cin>>ch;
    // switch(ch){
    //     case '+': cout<<a+b;
    //                 break;
    //     case '-': cout<<a-b;
    //                 break;
    //     case '*': cout<<a*b;
    //                 break;
    //     case '/': cout<<a/b;
    //                 break;
    //     case '%': cout<<a%b;
    //                 break;
    //     default: cout<<"Wrong Input";
    // }

    // int m,ans;
    // cin>>m;
    // switch(1){
    //     case 1: ans=m/100;
    //             m=m%100;
    //             cout<<ans<<" 100 Rs note."<<endl;
    //     case 2: ans=m/50;
    //             m=m%50;
    //             cout<<ans<<" 50 Rs note."<<endl;
    //     case 3: ans=m/20;
    //             m=m%20;
    //             cout<<ans<<" 20 Rs note."<<endl;
    //     case 4: ans=m/10;
    //             m=m%10;
    //             cout<<ans<<" 10 Rs note."<<endl;
    //     case 5: ans=m/1;
    //             m=m%1;
    //             cout<<ans<<" 1 Rs note."<<endl;
    // }
}