#include<iostream>
#include<math.h>
using namespace std;

int main(){
    // char a=255;
    // cout<<a;

    // unsigned int a=-6;
    // cout<<a;

    // int a;
    // a=cin.get();
    // cout<<a;

    // char b;
    // b=cin.get();
    // cout<<b;

    // int num,flag=0,i=2;
    // cin>>num;
    // if(num==1){
    //     flag=1;
    // }
    // while(i<num/2){
    //     if(num%i==0){
    //         flag=1;
    //     }
    //     i++;
    // }
    // if(flag==1){
    //     cout<<("NOT PRIME");
    // }
    // else{
    //     cout<<("PRIME");
    // }

//     int i=1,j=1,n;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         while(j<=n){
//             cout<<"* ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

//     int i=1,j=1,n;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         while(j<=n){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// 11111
// 22222
// 33333
// 44444
// 55555

//     int i=1,j=1,n;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         while(j<=n){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// 12345
// 12345
// 12345
// 12345
// 12345

//     int i=1,j=1,n;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         while(j<=n){
//             cout<<n-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// 54321
// 54321
// 54321
// 54321
// 54321

//     int i=1,j=1,n;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         while(j<=n){
//             cout<<n-i+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// 55555
// 44444
// 33333
// 22222
// 11111

//     int i=1,j=1,n,k=1;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         while(j<=n){
//             cout<<k<<" ";
//             j++;
//             k++;
//         }
//         cout<<endl;
//         i++;
//     }
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

//     int i=1,j=1,n,k=1;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         while(j<=i){
//             cout<<"* ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// // *
// // * *
// // * * *
// // * * * *

//     int i=1,j=1,n,k=1;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         while(j<=i){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// 1
// 22
// 333
// 4444

//     int i=1,j=1,n,k=1;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         while(j<=i){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// 1
// 12
// 123
// 1234

//     int i=1,j=1,n,k=1;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         while(j<=i){
//             cout<<k<<" ";
//             k++;
//             j++;
//         }        
//         cout<<endl;
//         i++;
//     }
// 1
// 2 3
// 4 5 6
// 7 8 9 10

//     int i=1,j=1,n,k;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         k=i;
//         while(j<=i){
//             cout<<k;
//             j++;
//             k++;
//         }        
//         cout<<endl;
//         i++;
//     }
// 1
// 23
// 345
// 4567
// 56789

//     int i=1,j=1,n,k;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         k=i;
//         while(j<=i){
//             cout<<k;
//             j++;
//             k--;
//         }        
//         cout<<endl;
//         i++;
//     }
// 1
// 21
// 321
// 4321

//     int i=1,j=1,n;
//     char ch='A';
//     cin>>n;
//     while(i<=n){
//         j=1;
//         while(j<=n){
//             cout<<ch;
//             j++;
//         }        
//         cout<<endl;
//         ch++;
//         i++;
//     }
// AAAA
// BBBB
// CCCC
// DDDD

//     int i=1,j=1,n;
//     cin>>n;
//     while(i<=n){
//         char ch='A';
//         j=1;
//         while(j<=n){
//             cout<<ch;
//             j++;
//             ch++;
//         }        
//         cout<<endl;
//         i++;
//     }
// ABCD
// ABCD
// ABCD
// ABCD

//     int i=1,j=1,n;
//     cin>>n;
//     char ch='A';
//     while(i<=n){
//         j=1;
//         while(j<=n){
//             cout<<ch;
//             j++;
//             ch++;
//         }
//         cout<<endl;
//         i++;
//     }
// ABCD
// EFGH
// IJKL
// MNOP

//     int i=0,j=0,n;
//     cin>>n;
//     char ch='A';
//     while(i<n){
//         j=0;
//         char ch='A'+i;
//         while(j<n){
//             cout<<ch;
//             j++;
//             ch++;
//         }
//         cout<<endl;
//         i++;
//     }
//     int i=1,j=1,n;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         while(j<=n){
//             char ch='A'+i+j-2;
//             cout<<ch;
//             j++;
//             ch++;
//         }
//         cout<<endl;
//         i++;
//     }
// ABCD
// BCDE
// CDEF
// DEFG

//     int i=1,j=1,n;
//     char ch='A';
//     cin>>n;
//     while(i<=n){
//     j=1;
//     while(j<=i){
//         cout<<ch;
//         j++;
//     }
//     cout<<endl;
//     i++;
//     ch++;
//     }
// A
// BB
// CCC
// DDDD

//     int i=1,j=1,n;
//     cin>>n;
//     while(i<=n){
//     j=1;
//     char ch='A'+n-i;
//     while(j<=i){
//         cout<<ch;
//         j++;
//         ch++;
//     }
//     cout<<endl;
//     i++;
//     }
// D
// CD
// BCD
// ABCD

//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//     int j=1;
//     int k=n-i;
//     while(k>0){
//         cout<<" ";
//         k--;
//     }
//     while(j<=i){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
//     }
//    *
//   **
//  ***
// ****

//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//     int j=1;
//     while(j<=n-i+1){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
//     }
// ****
// ***
// **
// *

//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//     int j=1;
//     int k=i-1;
//     while(k>0){
//         cout<<" ";
//         k--;
//     }
//     while(j<=n-i+1){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
//     }
// ****
//  ***
//   **
//    *

//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//     int j=1;
//     int k=n-i;
//     while(k>0){
//         cout<<" ";
//         k--;
//     }
//     while(j<=i){
//         cout<<j;
//         j++;
//     }
//     j=1;
//     int l=i;
//     while(j<=i-1){
//         cout<<l-1;
//         l++;
//         j++;
//     }
//     cout<<endl;
//     i++;
//     }
//      1
//     121
//    12323
//   1234345
//  123454567
// 12345656789

//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//     int j=1;
//     while(j<=n-i+1){
//         cout<<j;
//         j++;
//     }
//     int k=i-1;
//     while(k>0){
//         cout<<"**";
//         k--;
//     }
//     j=1;
//     int l=n-i+1;
//     while(j<=n-i+1){
//         cout<<l;
//         l--;
//         j++;
//     }
//     cout<<endl;
//     i++;
//     }
// 123456654321
// 12345**54321
// 1234****4321
// 123******321
// 12********21
// 1**********1

//     int i=1,j=1,n;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         while(j<=n-i+1){
//             cout<<"*";
//             j++;
//         }
//         j=1;
//         if(i==1){
//             while(j<=n-1){
//                 cout<<"*";
//                 j++;
//             }
//         }
//         j=1;
//         if(i>1){
//             j=1;
//             while(j<=(i-1)*2-1){
//                cout<<" ";
//                 j++;
//             }
//             j=1;
//             while(j<=n-i+1){
//                 cout<<"*";
//                 j++;
//             }
//         }
//         cout<<endl;
//         i++;
//     }
// *********
// **** ****
// ***   ***
// **     **
// *       *

    // int sum=0,product=1,n,a,b;
    // cin>>n;
    // for(int i=10; ;i=i*10){
    //     a=n%i;
    //     b=a/(i/10);
    //     if(b==0){
    //         break;
    //     }
    //     // cout<<a<<endl<<b<<endl;
    //     sum=sum+b;
    //     product=product*b;
    // }
    // cout<<sum<<endl<<product;

    // int sum=0,product=1,num;
    // cin>>num;
    // while(num){
    //     int digit=num%10;
    //     num=num/10;
    //     sum=sum+digit;
    //     product=product*digit;
    // }
    // cout<<sum<<endl<<product<<endl;
    // int ans=product-sum;
    // cout<<ans;

    // int n;
    // int count=0;
    // cin>>n;
    // while(n){
    //     int b=n%2;
    //     n=n/2;
    //     if(b==1){
    //         count++;
    //     }
    // }
    // cout<<count;

    // int n;
    // int count=0;
    // cin>>n;
    // while(n){
    //     int b=n%2;
    //     n=n>>1;
    //     if(b==1){
    //         count++;
    //     }
    // }
    // cout<<count;

    // int n,rev=0;
    // cin>>n;
    // int i=1;
    // int b=n;
    // while(b){
    //     i=i*10;
    //     b=b/10;
    // }
    // i=i/10;
    // while(n){
    //     rev=rev+(n%10)*i;
    //     i=i/10;
    //     n=n/10;
    // }
    // cout<<rev;

    // int n,rev=0;
    // cin>>n;
    // while(n){
    //     rev=rev*10+(n%10);
    //     n=n/10;
    // }
    // cout<<rev;

    // int n;
    // int a=0,b=1;
    // int c=0;
    // cin>>n;
    // cout<<a<<endl<<b<<endl;
    // for(int i=1;i<=n-2;i++){
    //     c=a+b;
    //     a=b;
    //     b=c;
    //     cout<<c<<endl;
    // }

    // int n,b=0;
    // cin>>n;
    // int i=1;
    // while(n){
    //     int a=n%2;
    //     b=b+a*i;
    //     i=i*10;
    //     n=n/2;
    // }
    // cout<<b;

    // int n,bit,binary=0;
    // cin>>n;
    // int i=1;
    // while(n){
    //     bit=n&1;
    //     binary=bit*i+binary;
    //     i=i*10;
    //     n=n>>1;
    // }
    // cout<<binary;

    // int n,bit,binary=0;
    // cin>>n;
    // int i=0;
    // while(n){
    //     bit=n&1;
    //     binary=binary+bit*pow(10,i);
    //     i++;
    //     n=n>>1;
    // }
    // cout<<binary;   //Right code wrong output with this compiler

    // int n,ans=0,_1scomp=0;
    // cin>>n;
    // int i=0;
    // while(n){
    //     int bit=(n&1);
    //     _1scomp=_1scomp+(!bit)*pow(10,i);
    //     ans=ans+(!bit)*pow(2,i);
    //     i++;
    //     n=n>>1;
    // }
    // cout<<_1scomp<<endl<<ans;    //pow not working correctly

    // int n,mask=0;
    // cin>>n;
    // int num=n;
    // while(n){
    //     mask=(mask<<1)|1;
    //     n=n>>1;
    // }
    // cout<<(mask&(~num));

    // int n;
    // cin>>n;
    // for(int i=31;i>=0;i--){
    //     int a=n>>i;
    //     int bit=a&1;
    //     cout<<bit;
    // }

    // int n,ans=0,i=0;
    // cin>>n;
    // while(n){
    //     int digit=n%10;
    //     ans=ans+digit*pow(2,i);
    //     i++;
    //     n=n/10;
    // }
    // cout<<ans;

    // int a,b;
    // cin>>a>>b;
    // int a1=a;
    // while(b>1){
    //     a=a*a1;
    //     b--;
    // }
    // cout<<a;

    // int num,ans=0;
    // cin>>num;
    // int i=1;
    // while(num>0){
    //     num=num-i;
    //     if(num<0){
    //         break;
    //     }
    //     // cout<<num<<" "<<i<<" "<<count<<endl;
    //     ans++;
    //     i=i+2;
    // }
    // cout<<ans;   //sqrt int value

    // int n,ans=0;
    // cin>>n;
    // while(n){
    //     ans=ans*10+n%10;
    //     n=n/10;
    // }
    // cout<<ans;

    // int n;
    // cin>>n;
    // for(int i=0;pow(2,i)<=n;i++){
    //     if(n==pow(2,i)){
    //         cout<<"POWER OF 2";
    //         break;
    //     }
    // }

    // int n,m=1;
    // cin>>n;
    // for(int i=0;pow(2,i)<=n;i++){
    //     if(n==m){
    //         cout<<"POWER OF 2";
    //         break;
    //     }
    //     m=m*2;
    // }
}