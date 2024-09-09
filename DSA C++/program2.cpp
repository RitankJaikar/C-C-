#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

// void EvenOdd(int a){
//     if((a&1)==0){
//         cout<<"Even Number";
//     }
//     else{
//         cout<<"Odd Number";
//     }
// }

// int main(){
//     int n=10;
//     cin>>n;
//     EvenOdd(n);
// }

// int factorial(int num){
//     int ans=1;
//     for(int i=1;i<=num;i++){
//         ans=ans*i;
//     }
//     return ans;
// }

// int combination(int n,int r){
//     if(n>r){
//         int ans=factorial(n)/(factorial(r)*factorial(n-r));
//         return ans;
//     }
//     else
//     return 0;
// }

// int main(){
//     int n,r;
//     cin>>n>>r;
//     cout<<combination(n,r);
// }

// int fibonacci(int n){
//     int a=0,b=1;
//     int ans=0;
//     if(n==1){
//         return a;
//     }
//     for(int i=2;i<=n;i++){
//         ans=a+b;
//         b=a;
//         a=ans;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fibonacci(n);
// }

// void largest(int arr[],int n){
//     int l=arr[0];
//     for(int i=0;i<n-1;i++){
//         if(l<arr[i+1]){
//             l=arr[i+1];
//         }
//     }
//     cout<<l<<" is the Largest.";
// }

// int main(){
//     int a[10]={1,43,75,21,7,2,45,123,23,432};
//     largest(a,10);
// }

// void MaxMin(int arr[],int n){
//     int max=INT_MIN, min=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"MAX:"<<max<<endl;
//     for(int i=0;i<n;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<"MIN:"<<min<<endl;
// }

// int main(){
//     int size;
//     cin>>size;
//     int num[100];
//     for(int i=0;i<size;i++){
//         cin>>num[i];
//     }
//     MaxMin(num,size);
// }

// int arraysum(int arr[],int n){
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans=ans+arr[i];
//     }
//     return ans;
// }

// int main(){
//     int size;
//     cin>>size;
//     int num[100];
//     for(int i=0;i<size;i++){
//         cin>>num[i];
//     }
//     cout<<arraysum(num,size);
// }

// bool search(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(key==arr[i]){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     int size,key;
//     cin>>size>>key;
//     int num[100];
//     for(int i=0;i<size;i++){
//         cin>>num[i];
//     }
//     bool found=search(num,size,key);
//     if(found){
//         cout<<"ELEMENT FOUND";
//     }
//     else{
//         cout<<"ELEMENT NOT FOUND";
//     }
// }

// void sort(int arr[],int n){
//     for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(arr[i]>arr[j]){
//                     swap(arr[i],arr[j]);
//                 }
//             }
//         }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int a[100]={1,6,3,9,2,7,3,6,0};
//     sort(a,9);
// }

// void reverse(int arr[],int n){
//     int temp;
//     for(int i=0;i<n/2;i++){
//         temp=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void reverse(int arr[],int n){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int a[100]={1,6,3,9,2,7,3,6,0};
//     reverse(a,9);
// }

// void swapalt(int arr[],int n){
//     // int temp;
//     // for(int i=0;i<n;i+=2){
//     //     temp=arr[i];
//     //     arr[i]=arr[i+1];
//     //     arr[i+1]=temp;
//     // }
//     for(int i=0;i<n;i+=2){
//         if(i+1<n){
//         swap(arr[i],arr[i+1]);
//        }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int a[100]={1,6,3,9,2,7,3,6,9};
//     swapalt(a,9);
// }

//  void unique(int arr[],int n){
//         if(n==1){
//             return arr[0];
//         }
//      for(int i=0;i<n;i++){
//         int flag=1;
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 continue;
//             }
//             if(arr[i]==arr[j]){
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag==1){
//             cout<<arr[i]<<endl;
//         }
//      }
// }

// int main(){
//     int a[100]={6,2,3,9,2,7,3,6,0};
//     unique(a,9);
// }

// void duplicate(int arr[],int n){
//     // for(int i=0;i<n;i++){
//     //     int flag=1;
//     //     for(int j=0;j<n;j++){
//     //         if(i==j){
//     //             continue;
//     //         }
//     //         if(arr[i]==arr[j]){
//     //             flag=0;
//     //             break;
//     //         }
//     //     }
//     //     if(flag==0){
//     //         cout<<arr[i]<<" ";
//     //     }
//     // }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cout<<arr[i]<<" ";
//                 break;
//             }
//         }
//     }
// }

// int main(){
//     int a[100]={6,2,3,9,2,7,3,6,0,9};
//     duplicate(a,10);
// }

// int main()
// {
//     int array1[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
//     int s1 = sizeof(array1)/sizeof(array1[0]);

//     cout << "Original array: ";
    
//     for (int i=0; i < s1; i++) 
//     cout << array1[i] <<" ";
    
//     cout <<"\nUnique elements of the said array: ";
//     for (int i=0; i<s1; i++)
//     {   int j;
//         for (j=0; j<i; j++){
//            if (array1[i] == array1[j])
//                break;
//         }
//         if (i == j)
//         cout << array1[i] << " ";
//     }
//     return 0; 
// }

// void intersection(int arr1[],int n1,int arr2[],int n2,int arr3[]){
//     int k=0;
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             if(arr1[i]==arr2[j]){
//                 arr3[k]=arr1[i];
//                 k++;
//                 break;
//             }
//         }
//     }
// }

// void intersection(int arr1[],int n1,int arr2[],int n2){
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<" ";
//                 arr2[j]=INT_MIN;
//                 break;
//             }
//         }
//     }
// }

// int main(){
//     int a[100]={1,5,3,7,8,63,0,5,0,63};
//     int b[100]={5,72,51,63,0,5};
//     // int c[100]={};      //entire array element becomes 0
//     intersection(a,10,b,6);
//     // int i=0;
//     // while(c[i]!=0){
//     //     cout<<c[i]<<" ";
//     //     i++;
//     // }
// }

// void pairsum(int arr[],int n,int sum){
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==sum){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//                 count++;
//             }
//         }
//     }
//     cout<<"TOTAL:"<<count;
// }

// int main(){
//     int a[100]={1,5,3,7,8,63,0,5,2,5};
//     pairsum(a,10,10);
// }

// void tripletsum(int arr[],int n,int sum){
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 if(arr[i]+arr[j]+arr[k]==sum){
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//                 count++;
//                 }
//             }
//         }
//     }
//     cout<<"TOTAL:"<<count;
// }
// int main(){
//     int a[100]={10,2,2,5,5,5,2,2};
//     tripletsum(a,8,12);
// }

// void sort_0_1(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]!=arr[j]){
//                 swap(arr[i],arr[j]);
//                 break;
//             }
//         }
//     }
// }

// void sort_0_1(int arr[],int n){
//     int count_0=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             count_0++;
//         }
//     }
//     for(int i=0;i<count_0;i++){
//         arr[i]=0;
//     }
//     for(int i=count_0;i<n;i++){
//         arr[i]=1;
//     }
// }

// void sort_0_1(int arr[],int n){
//     int i=0,j=n-1;
//     while(i<j){
//         if(arr[i]==0){
//             i++;
//         }
//         else if(arr[j]==1){
//             j--;
//         }
//         // else if(arr[i]==1 && arr[j]==0){
//         else{
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
// }

// void sort_0_1(int arr[],int n){
//     int i=0,j=n-1;
//     while(i<j){
//         while(arr[i]==0){
//             i++;
//         }
//         while(arr[j]==1){
//             j--;
//         }
//         if(i<j){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
// }

// int main(){
//     int a[]={0,0,1,1,1,0,0,0,1,1,0,0,1,0,1,0,0,0,1};
//     int size=sizeof(a)/sizeof(int);
//     sort_0_1(a,size);
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//     }
// }

// int findUnique(int arr[], int size){
//         for (int i=0;i<size;i++){
//             int count=0;
//             for(int j=0;j<size;j++){
//                 if(arr[i]==arr[j]){
//                     count++;
//                 }
//             }
//             if(count==1){
//                 cout<<arr[i];
//                 break;
//             }
//         }
// }

// int main(){
//     int a[]={0,1,2,3,2,3,5,6,6,5,1};
//     findUnique(a,11);
// }

// int findUnique(int arr[], int size){
//         int e=0;
//         for (int i=0;i<size;i++){
//             e=e^arr[i];
//         }
//         cout<<e;
// }

// int main(){
//     int a[]={5,1,2,3,2,3,5,6,6,9,1};
//     findUnique(a,11);
//     // cout<<endl<<(2^4);
//     // cout<<endl<<(6^3);
//     // cout<<endl<<(5^2);
//     // cout<<endl<<(7^4);
//     // cout<<endl<<(2^4^3^2^4);
// }

// bool uniqueOccurrences(int arr[],int n){
//     int COUNT[]={},c=0;
//     for (int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(j<i && arr[i]==arr[j]){
//                 break;
//             }
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//             // if((arr[i]^arr[j])==0){
//             //     count++;
//             // }
//         }
//         if(count>0){
//             COUNT[c]=count;
//             c++;
//         }
//     }
//     // for (int i=0;COUNT[i];i++){
//     //     cout<<COUNT[i]<<" ";
//     // }
//     for (int i=0;COUNT[i];i++){
//         for (int j=i+1;COUNT[j];j++){
//             if(COUNT[i]==COUNT[j]){
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// bool uniqueOccurrences(int* arr, int arrSize){
//     int a[1000]={0},c=0,flag=0;
//     for(int i=0;i<arrSize;i++){
//         if(arr[0]==arr[i]){
//             flag=1;
//         }
//         else{
//             flag=0;
//             break;
//         }
//     }
//     if(flag==1){
//         return true;
//     }
//     for(int i=0;i<arrSize;i++){
//         for(int j=i+1;j<arrSize;j++){
//             if(arr[i]>arr[j]){
//                 int t=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=t;
//             }
//         }
//     }
//     // arr[arrSize]={0};
//     for(int i=0;i<arrSize;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<arrSize-1;i++){
//         if(arr[i]==arr[i+1])c++;
//         else{
//             cout<<arr[i]<<" "<<c<<endl;
//             if(a[c]==1)return false;
//             a[c]=1;
//             c=0;
//         }
//     }
//     // if(arr[arrSize-2]!=arr[arrSize-1]){
//     //     if(a[c]==1)return false;
//     // }
//     for(int i=0;i<10;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     c=0;
//     for(int i=arrSize-1;i>=0;i--){
//         if(arr[i]==arr[i-1]){
//             c++;
//         }
//         else{
//             if(a[c]==1){
//                 return false;
//             }
//             return true;
//         }
//     }
//     return true;
// }

// int main(){
//     int a[]={8,8,8,9,9,9,8};
//     int size=sizeof(a)/sizeof(int);
//     bool b=uniqueOccurrences(a,size);
//     if(b==true){
//         cout<<"TRUE";
//     }
//     else{
//         cout<<"FALSE";
//     }
// }

// int findDuplicate(int arr[],int n) 
// {
//     int ans=0;
//     for(int i=0;i<n-1;i++){
//         ans=ans^arr[i]^(i+1);
//     }
//     ans=ans^arr[n-1];
//     return ans;
// }

// int main(){
//     int a[]={1,2,3,2,4};
//     cout<<findDuplicate(a,5);
// }

// void sort012(int *arr, int n)
// {
//    int count_0=0,count_1=0;
//    for(int i=0;i<n;i++){
//       if(arr[i]==0){
//          count_0++;
//       }
//    }
//    for(int i=0;i<n;i++){
//       if(arr[i]==1){
//          count_1++;
//       }
//    }
//    for(int i=0;i<count_0;i++){
//       arr[i]=0;
//    }
//    for(int i=count_0;i<(count_0+count_1);i++){
//       arr[i]=1;
//    }
//    for(int i=(count_0+count_1);i<n;i++){
//       arr[i]=2;
//    }
// }

// void sort012(int *arr, int n)
// {
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//         cout<<arr[i]<<" ";
//     }
// }

// void sort012(int *arr, int n){
//    int i=0,j=n-1,k;
//    while(i<j){
//       if(arr[i]==0){
//          i++;
//       }
//       else if(arr[j]==2){
//          j--;
//       }
//       else if(arr[i]==1 && arr[j]==0){
//          swap(arr[i],arr[j]);
//          i++;
//       }
//       else if(arr[i]==2 && arr[j]==0){
//          swap(arr[i],arr[j]);
//          i++;
//          j--;
//       }
//       else if(arr[i]==2 && arr[j]==1){
//          swap(arr[i],arr[j]);
//          j--;
//       }
//       else if(arr[i]==1 && arr[j]==1){
//          k=i+1;
//          while(k<j){
//             if(arr[i]!=arr[k]){
//                 break;
//             }
//             k++;
//          }
//          if(k==j){
//             break;
//          }
//          k=i+1;
//          while(k<j){
//             if(arr[k]==0){
//                swap(arr[i],arr[k]);
//                i++;
//                break;
//             }
//             else if(arr[k]==2){
//                swap(arr[j],arr[k]);
//                j--;
//                break;
//             }
//             k++;  
//          }
//       }
//    }
// }

// int main(){
//     int a[]={0,0,2,2,1,1,1,0,0,2,2,1,1};
//     int size=sizeof(a)/sizeof(int);
//     cout<<size<<endl;
//     sort012(a,size);
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//     }
// }