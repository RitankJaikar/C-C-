#include<iostream>
#include<algorithm>
#include<limits.h>
#include<math.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;


void show(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


// int binarysearch(int arr[],int n,int key){
//     sort(arr,arr+n);
//     int start=0;
//     int end=n-1;
//     // int mid=(start+end)/2;
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]<key){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         // mid=(start+end)/2;
//         mid=start+(end-start)/2;
//     }
//     return -1;
// }

// int main(){
//     int a[]={10,5,3,7,4,32,7,3,8,2};
//     int size=sizeof(a)/sizeof(int);
//     int foundindex=binarysearch(a,size,7);
//     show(a,size);
//     cout<<endl;
//     if(foundindex==-1){
//         cout<<"NOT FOUND!";
//     }
//     else{
//         cout<<"FOUND! at Index(in sorted array):"<<foundindex;
//     }
// }


// void FirstAndLastPosition(int arr[],int n,int k){
//     sort(arr,arr+n);
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//     int L,R;
//     while(start<=end){
//         L=mid-1,R=mid+1;
//         if(arr[mid]==k){
//             while(arr[L]==k){
//                 L--;
//             }
//             while(arr[R]==k){
//                 R++;
//             }
//             cout<<(L+1)<<" "<<(R-1);
//             break;
//         }
//         else if(arr[mid]<k){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
// }

// int main(){
//     int a[]={1,2,3,3,3,3,3,3,4,5,5,5,6};
//     int size=sizeof(a)/sizeof(int);
//     show(a,size);
//     cout<<endl;
//     FirstAndLastPosition(a,size,3);
// }


// void totaloccurance(int arr[],int n,int k){
//     sort(arr,arr+n);
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//     int L,R;
//     int count=0;
//     while(start<=end){
//         L=mid-1,R=mid+1;
//         if(arr[mid]==k){
//             count++;
//             while(arr[L]==k){
//                 count++;
//                 L--;
//             }
//             while(arr[R]==k){
//                 count++;
//                 R++;
//             }
//             cout<<count;
//             break;
//         }
//         else if(arr[mid]<k){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
// }


// int FirstOccurance(int arr[],int n,int k){
//     sort(arr,arr+n);
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==k){
//             ans=mid;
//             end=mid-1;
//         }
//         else if(arr[mid]<k){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return ans;
// }

// int LastOccurance(int arr[],int n,int k){
//     sort(arr,arr+n);
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==k){
//             ans=mid;
//             start=mid+1;
//         }
//         else if(arr[mid]<k){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return ans;
// }

// void FirstAndLastOccurance(int arr[],int n,int k){
//     cout<<FirstOccurance(arr,n,k)<<" "<<LastOccurance(arr,n,k)<<endl;;
// }

// void TotalOccurance(int arr[],int n,int k){
//     if(LastOccurance(arr,n,k)+FirstOccurance(arr,n,k)==-2){
//         cout<<-1<<endl;;
//     }
//     else{
//         int totaloccurance=LastOccurance(arr,n,k)-FirstOccurance(arr,n,k)+1;
//         cout<<totaloccurance<<endl;
//     }
// }

// int main(){
//     int a[]={1,2,3,3,3,3,3,3,4,5,5,5,6};
//     int size=sizeof(a)/sizeof(int);
//     show(a,size);
//     cout<<endl;
//     FirstAndLastOccurance(a,size,8);
//     TotalOccurance(a,size,8);
// }


// int PeakIndex(int arr[],int n){
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//     while(start<end){
//         if(arr[mid]<arr[mid+1]){
//             start=mid+1;
//         }
//         else{
//             end=mid;
//         }
//         mid=start+(end-start)/2;
//     }
//     return mid;
// }

// int main(){
//     int a[]={1,2,3,4,6,7,8,5,3,2};
//     int size=sizeof(a)/sizeof(int);
//     show(a,size);
//     cout<<endl;
//     cout<<PeakIndex(a,size);
// }


// int arraySum(int arr[],int start,int end){
//     int ans=0;
//     for(int i=start;i>=start && i<=end;i++){
//         ans=ans+arr[i];
//     }
//     return ans;
// }

// int PivotIndex(int arr[],int n){//not for some negatives cases
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         cout<<arraySum(arr,0,mid-1)<<" "<<arraySum(arr,mid+1,n-1)<<endl;
//         if(arraySum(arr,0,mid-1)==arraySum(arr,mid+1,n-1)){
//             return mid;
//         }
//         else if(arraySum(arr,0,mid-1)<arraySum(arr,mid+1,n-1)){
//             start=mid+1;
//             cout<<"// "<<endl;
//         }
//         else{
//             end=mid-1;
//             cout<<"/ "<<endl;
//         }
//         mid=start+(end-start)/2;
//         cout<<mid<<endl;
//     }
//     return -1;
// }

// int main(){
//     int a[]={-1,-1,-1,-1,0,1};
//     int size=sizeof(a)/sizeof(int);
//     show(a,size);
//     cout<<endl;
//     cout<<PivotIndex(a,size);
// }


// int PivotEle(int arr[],int n){//for sorted and rotated array
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//     while(start<end){ 
//         if(arr[mid]>=arr[0]){
//             start=mid+1;
//         }
//         else{
//             end=mid;            
//         }
//         mid=start+(end-start)/2;
//     }
//     return mid;
// }

// int main(){
//     int a[]={6,7,9,12,43,35,234,1,2,3,4,5};
//     int size=sizeof(a)/sizeof(int);
//     show(a,size);
//     cout<<endl;
//     cout<<PivotEle(a,size);
// }


// int binarysearch(int arr[],int a,int b,int key){
//     int start=a;
//     int end=b;
//     // int mid=(start+end)/2;
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]<key){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         // mid=(start+end)/2;
//         mid=start+(end-start)/2;
//     }
//     return -1;
// }

// int SearchInRotated(int arr[],int n,int k){//for sorted and rotated array
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//     while(start<end){ 
//         if(arr[mid]>=arr[0]){
//             start=mid+1;
//         }
//         else{
//             end=mid;            
//         }
//         mid=start+(end-start)/2;
//     }
//     if(arr[mid]<=k && k<=arr[n-1]){     
//         return binarysearch(arr,mid,n-1,k);
//     }
//     else{
//         return binarysearch(arr,0,mid-1,k);
//     }
// }

// int main(){
//     int a[]={6,7,9,12,43,35,234,1,2,3,4,5};
//     int size=sizeof(a)/sizeof(int);
//     show(a,size);
//     cout<<endl;
//     cout<<SearchInRotated(a,size,35);
// }


// int sqrtIntVal(int n){
//     int start=0;
//     int end=n;
//     int mid=start+(end-start)/2;
//     int ans;
//     while(start<=end){
//         if(mid*mid==n){
//             return mid;
//         }
//         else if(mid*mid>n){
//             end=mid-1;
//         }
//         else{
//             ans=mid;
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return ans;
// }

// double sqrtFloat(int IntVal,int uptoDecimal,int n){
//     // double ans=IntVal,sqre=IntVal*IntVal;
//     // double precision=1;
//     // for(int i=1;i<=uptoDecimal;i++){
//     //     precision=precision/10;
//     // }
//     // for(double i=precision;sqre<n;i=i+precision){
//     //     sqre=(IntVal+i)*(IntVal+i);
//     //     if(sqre<n){
//     //         ans=IntVal+i;
//     //     }
//     // }   //time complexity is large, Worst Case 10^uptoDigits

//     double ans=IntVal;
//     double precision=1;
//     for(int i=1;i<=uptoDecimal;i++){
//         precision=precision/10;
//         for(double j=ans;j*j<n;j=j+precision){
//             ans=j;
//         }
//     }   //better time complexity, Worst case: uptoDigits*10
//     return ans;
// }

// int main(){
//     int num=50;
//     cout<<sqrtIntVal(num)<<endl;
//     cout<<sqrtFloat(sqrtIntVal(num),4,num)<<endl;   
// }


// bool isPossible(int pages[],int n,int b,int m){
// 	int studentCount=1;
// 	int pageSum=0;
// 	for(int i=0;i<n;i++){
// 		if(pages[i]>m){
// 			return false;
// 		}
// 		if(pageSum+pages[i]<=m){
// 			pageSum=pageSum+pages[i];
// 		}
// 		else{
// 			studentCount++;
// 			cout<<studentCount<<" ";
// 			if(studentCount>b){
// 				cout<<" f"<<endl;
// 				return false;
// 			}
// 			pageSum=pages[i];
// 		}
// 	}
// 	cout<<" t"<<endl;
// 	return true;
// }

// int allocateBooks(int pages[], int n, int b)
// {
// 	int sum=0;
// 	int ans=-1;
// 	for(int i=0;i<n;i++){
// 		sum=sum+pages[i];
// 	}
// 	// if(n<b){
// 	// 	return ans;
// 	// }
// 	cout<<sum<<endl;

// 	int s=0;
// 	int e=sum;
// 	int m=s+(e-s)/2;

// 	while(s<=e){
// 		cout<<m<<" ";
// 		if(isPossible(pages,n,b,m)){
// 			ans=m;
// 			if(ans==0){
// 				return -1;
// 			}
// 			e=m-1;
// 		}
// 		else{
// 			s=m+1;
// 		}
// 		m=s+(e-s)/2;
// 	}
// 	return ans;
// }

// int main(){
//     int a[]={1,2,3,4,5};
//     int size=sizeof(a)/sizeof(int);
//     cout<<allocateBooks(a,size,6);
// }


// bool isPossible(int tree[],int n,int M,int mid){
// 	int sum=0;
// 	for(int i=0;i<n;i++){
// 		if((tree[i]-mid)<=0){
// 			break;
// 		}
// 		sum=sum+tree[i]-mid;
// 	}
// 	if(sum>=M){
// 		return true;
// 	}
// 	else{
// 		return false;
// 	}
// }

// int lumberjack(int tree[],int n,int M){
// 	sort(tree,tree+n,greater<int>());

// 	int maxi=tree[0];
// 	for(int i=0;i<n;i++){
// 		maxi=max(maxi,tree[i]);
// 	}

// 	int s=0;
// 	int e=maxi;
// 	int mid=s+(e-s)/2;
// 	int ans=-1;

// 	while(s<=e){
// 		if(isPossible(tree,n,M,mid)){
// 			ans=mid;
// 			s=mid+1;
// 		}
// 		else{
// 			e=mid-1;
// 		}
// 		mid=s+(e-s)/2;
// 	}
// 	return ans;
// }

// int main(){
// 	int tree[]={4,42,40,26,46};
// 	int size=sizeof(tree)/sizeof(int);
// 	cout<<lumberjack(tree,size,20);
// }


// bool isPossible(int rank[], int n, int M, int mid){
//     int dish=0;
//     int time;
//     for(int i=0;i<n;i++){
//         time=rank[i];
//         int j=2;
//         while(time<=mid){               //decides dish can be cooked or not
//             dish++;
// 			time=time+rank[i]*j;
//             j++;
//         }
//         if(dish>=M){
//             return true;
//         }
//     }
//     return false;
// }

// int minCookTime(int rank[], int n, int M)
// {
//     sort(rank,rank+n);

//     int s=0;
//     int e=rank[0]*(M*(M+1)/2);
//     int m=s+(e-s)/2;
//     int ans=-1;

//     while(s<=e){
//         if(isPossible(rank,n,M,m)){
//             ans=m;
//             e=m-1;
//         }
//         else{
//             s=m+1;
//         }
//         m=s+(e-s)/2;
//     }
//     return ans;
// }

// int main(){
// 	int rank[]={10};
// 	int size=sizeof(rank)/sizeof(int);
// 	cout<<minCookTime(rank,size,1);
// }


//Selection Sort

// void SelectionSort(int arr[],int n){
// 	for(int i=0;i<(n-1);i++){
// 		for(int j=i+1;j<n;j++){
// 			if(arr[i]>=arr[j]){
// 				swap(arr[i],arr[j]);
// 			}
// 		}
// 	}
// }

// void SelectionSort(int arr[],int n){
// 	for(int i=0;i<(n-1);i++){
// 		int minIndex=i;
// 		for(int j=i+1;j<n;j++){
// 			if(arr[minIndex]>arr[j]){
// 				minIndex=j;
// 			}
// 		}
// 		swap(arr[minIndex],arr[i]);
// 	}
// }

// int main(){
// 	int a[]={10,2,1,3,4,6};
// 	int size=sizeof(a)/sizeof(int);
// 	SelectionSort(a,size);
// 	show(a,size);
// }


// int totalSteps(int n, int k, int flowers[]){      //binary search not needed
//     int steps=1;
//     int bucket=k;
//     for(int i=0;i<n-1;i++){
//         steps++;
//         bucket=bucket-flowers[i];
//         if(bucket<flowers[i+1]){
//             steps=steps+2*(i+1);
//             bucket=k;
//        	}
//     }
// 	return steps;
// }

// int main(){
// 	int a[]={1,1,2};
// 	int size=sizeof(a)/sizeof(int);
// 	cout<<totalSteps(size,3,a);
// }


// void BubbleSort(int arr[],int n){
// 	for(int i=n-1;i>=1;i--){
// 		for(int j=0;j<i;j++){
// 			if(arr[j]>arr[j+1]){
// 				swap(arr[j],arr[j+1]);
// 			}
// 		}
// 	}
// }

// int main(){
// 	int a[]={10,2,1,3,4,6,2,32,125,4,0};
// 	int size=sizeof(a)/sizeof(int);
// 	BubbleSort(a,size);
// 	show(a,size);
// }


//Reverse Array
// int main(){
//     int a[]={2,4,2,6,4,72,1,3,123};
//     int size=sizeof(a)/sizeof(int);
//     for(int i=0;i<size/2;i++){
//         swap(a[i],a[size-i-1]);
//     }
//     show(a,size);
// }

//merge two array in third array
// int main(){
//     int a[]={1,2,3};
//     int b[]={4,5,8,9,10};
//     int size_a=sizeof(a)/sizeof(int);
//     int size_b=sizeof(b)/sizeof(int);
//     sort(a,a+size_a);
//     sort(b,b+size_b);
//     int size_c=size_a+size_b;
//     int c[size_c];
//     // for(int i=0;i<size_c;i++){
//     //     if(i<size_a){
//     //         c[i]=a[i];
//     //     }
//     //     else{
//     //         c[i]=b[i-size_a];
//     //     }
//     // }
//     // sort(c,c+size_c);
//     int i=0,j=0;
//     int k=0;
//     while(k<size_c){
//         if(a[i]<b[j]){
//             c[k]=a[i];
//             i++;
//         }
//         else{
//             c[k]=b[j];
//             j++;
//         }
//         k++;
//     }
//     show(c,size_c);
// }


// void rotate(int nums[],int n,int k){
//     int temp[n];
//     for(int i=0;i<n;i++){
//         temp[(i+k)%n] = nums[i];
//     }
//     for(int i=0;i<n;i++){
//         nums[i]=temp[i];
//     }
// }

// int main(){
//     int arr[]={32,1,4,63,6,3,6};
//     int size=sizeof(arr)/sizeof(int);
//     rotate(arr,size,3);
//     show(arr,size);
// }


//add two array
// int main(){
//     int a[]={1,2,3,4};
//     int b[]={7,8};
//     int n=sizeof(a)/sizeof(int);
//     int m=sizeof(b)/sizeof(int);
//     int p=0,q=0;
// 	for(int i=0;i<n;i++){
// 		p=p+a[i]*pow(10,n-i-1);
// 	}
//     for(int i=0;i<m;i++){
// 		q=q+b[i]*pow(10,m-i-1);
// 	}
//     cout<<p<<" "<<q<<endl;

//     int sum=p+q;
//     int digits=0,temp=sum;
//     while(temp!=0){
//         temp=temp/10;
//         digits++;
//     }
//     cout<<sum<<" "<<digits<<endl;
//     int ADD[digits];
//     for(int i=0;i<digits;i++){
//         ADD[digits-i-1]=sum%10;
//         sum=sum/10;
//     }
//     show(ADD,digits);
// }


// int main(){
//     char name[20];
//     cin>>name;
//     int length=0;
//     for(int i=0;name[i]!='\0';i++){
//         length++;
//     }
//     // for(int i=0;i<length/2;i++){
//     //     swap(name[i],name[length-i-1]);
//     // }
//     int s=0;
//     int e=length-1;
//     while(s<e){
//         swap(name[s++],name[e--]);
//     }
//     cout<<name;
// }


// string reverseString(string s) {    //original string did not change
//     int start=0;
//     int end=s.size()-1;
//     while(start<end){
//         swap(s[start++],s[end--]);
//     }
//     return s;
// }

// string ReverseInString(string s) {
//     int n=s.size();
//     string temp="";
//     string finalStr="";
//     for(int i=0;i<=n;i++){
//         if(s[i]!=' ' && s[i]!='\0'){
//             temp.push_back(s[i]);
//         }
//         else{
//             temp=reverseString(temp);
//             if(s[i]!='\0'){
//                 temp.push_back(' ');
//             }
//             int j=0;
//             while(j<temp.size()){
//                 finalStr.push_back(temp[j]);
//                 j++;
//             }
//             temp="";
//         }
//     }
//     return finalStr;
// }

// int main(){
//     string a="The Sky is Blue";
//     string b=ReverseInString(a);
//     cout<<b<<endl;
// }


// string reverseString(string s) {
//     int start=0;
//     int end=s.size()-1;
//     while(start<end){
//         swap(s[start++],s[end--]);
//     }
//     return s;
// }

// string ReverseWordsInString(string s) {
//     int n=s.size();
//     string temp="";
//     string finalStr="";
//     for(int i=0;i<=n;i++){
//         if(i!=n && s[n-i-1]!=' '){
//             temp.push_back(s[n-i-1]);
//         }
//         else{
//             if((n-i-1)==(n-1)){
//                 if(s[n-1]==' '){
//                     continue;
//                 } 
//             }
//             if(s[n-i]==' '){
//                 continue;
//             }
//             temp=reverseString(temp);
//             if(i!=n){
//                 temp.push_back(' ');
//             }
//             int j=0;
//             while(j<temp.size()){
//                 finalStr.push_back(temp[j]);
//                 j++;
//             }
//             temp="";
//         }
//     }
//     if(finalStr[finalStr.size()-1]==' '){
//         finalStr.pop_back();
//     }
//     return finalStr;
// }

// int main(){
//     string a="   Welcome   to   Coding      Ninjas   ";
//     string b=ReverseWordsInString(a);
//     cout<<b<<"/"<<endl;
// }


// bool checkEqual(int a[26],int b[26]){
//     for(int i=0;i<26;i++){
//         if(a[i]!=b[i]){
//             return 0;
//         }
//     }
//     return 1;
// }

// bool checkInclusion(string s1, string s2) {
//     int count1[26]={0};
//     for(int i=0;i<s1.length();i++){
//         int index=s1[i]-'a';
//         count1[index]++;
//     }
//     //show(count1,26);
//     int i=0;
//     int count2[26]={0};
//     while(i<s2.length()){
//         int k=i;
//         int j=0;
//         while(j<s1.length() && k<s2.length()){
//             int index=s2[k]-'a';
//             count2[index]++;
//             k++;
//             j++;
//         }
//         //show(count2,26);
//         //cout<<endl;
//         if(checkEqual(count1,count2) && j==s1.length()){
//             return 1;
//         }
//         for(int n=0;n<26;n++){
//             count2[n]=0;
//         }
//         i++;
//     }
//     return 0;
// }

// int main(){
//     string s1="ic";
//     string s2="bahbxcimb";
//     cout<<checkInclusion(s1,s2);
// }


// int compressALL(vector<char>& chars) {

//     int arr[128]={0};
//     for(int i=0;i<chars.size();i++){
//         int index=chars[i];
//         arr[index]++;
//     }
    
//     string s;
//     for(int i=0;i<128;i++){
//         if(arr[i]==1){
//             s.push_back(char(i));
//         }
//         else if(arr[i]>1){
//             s.push_back(char(i));
//             if(arr[i]/10==0){
//                 s.push_back(char(arr[i]+'0'));
//             }
//             else{
//                 int temp=arr[i];
//                 int NoOfdigit=0;
//                 while(temp){
//                     temp=temp/10;
//                     NoOfdigit++;
//                 }
//                 while(arr[i]){
//                     int p=pow(10,NoOfdigit-1);
//                     int digit=arr[i]/p;
//                     s.push_back(char(digit+'0'));
//                     arr[i]=arr[i]%p;
//                     NoOfdigit--;
//                 }
//             }
//         }
//     }

//     chars={};
//     for(int i=0;i<s.length();i++){
//         chars.push_back(s[i]);
//     }

//     return chars.size();
// }

// int main(){
//     vector<char> chars={'a','a','a','b','b','b','b','b','b','b','b','b','b','b','b','b','b','a','a','c','c','c'};
//     cout<<compressALL(chars)<<endl;
//     for(int i=0;i<chars.size();i++){
//         cout<<chars[i]<<" ";
//     }
// }


// void isFound(int a[][2],int target,int n,int m){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i][j]==target){
//                 cout<<"FOUND at "<<i<<","<<j;
//             }
//         }
//     }
// }

// void rowWiseSum(int a[][3],int row,int col){
//     for(int i=0;i<row;i++){
//         int sum=0;
//         for(int j=0;j<col;j++){
//             sum=sum+a[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }

// void colWiseSum(int a[][3],int row,int col){
//     for(int j=0;j<col;j++){
//         int sum=0;
//         for(int i=0;i<row;i++){
//             sum=sum+a[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }

// void largestRowSum(int a[][3],int row,int col){
//     int largest=INT_MIN;
//     int rowIndex;
//     for(int i=0;i<row;i++){
//         int sum=0;
//         for(int j=0;j<col;j++){
//             sum=sum+a[i][j];
//         }
//         if(sum>largest){
//             largest=sum;
//             rowIndex=i;
//         }
//     }
//     cout<<"Largest Row is at Index "<<rowIndex<<" which is "<<largest;
// }

// vector<int> spiralOrder(vector<vector<int>>& matrix) {
//     vector<int> ans;

//     int row=matrix.size();
//     int col=matrix[0].size();    //size of first row = size of every col

//     int count=0;                 //to count/check no. of elements printed
//     int totalElements=row*col;
//     int startingRow=0;
//     int endingCol=col-1;
//     int endingRow=row-1;
//     int startingCol=0;

//     while(count<=totalElements){
//         for(int i=startingRow,j=startingCol;j<=endingCol;j++){
//             ans.push_back(matrix[i][j]);
//             count++;
//         }
//         startingRow++;

//         for(int i=startingRow,j=endingCol;i<=endingRow;i++){
//             ans.push_back(matrix[i][j]);
//             count++;
//         }
//         endingCol--;

//         for(int i=endingRow,j=endingCol;j>=startingCol;j--){
//             ans.push_back(matrix[i][j]);
//             count++;
//         }
//         endingRow--;

//         for(int i=endingRow,j=startingCol;i>=startingRow;i--){
//             ans.push_back(matrix[i][j]);
//             count++;
//         }
//         startingCol++;
//     }
    
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }

//     return ans;
// }

// int main(){
//     int a[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
//     // rowWiseSum(a,2,3);
//     // colWiseSum(a,2,3);
//     //largestRowSum(a,2,3);
//     //wave output
//     // for(int j=0;j<3;j++){
//     //     if(j%2==0){
//     //         for(int i=0;i<4;i++){
//     //             cout<<a[i][j]<<" ";
//     //         }
//     //     }
//     //     else{
//     //         for(int i=4-1;i>=0;i--){
//     //             cout<<a[i][j]<<" ";
//     //         }
//     //     }

//     // }
//     vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     spiralOrder(matrix);
// }

// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     //90 degree
//     // for(int j=0;j<3;j++){
//     //     for(int i=3-1;i>=0;i--){
//     //         cout<<arr[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }

//     int row=3;
//     int col=3;

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(i==j){
//                 break;
//             }
//             swap(arr[i][j],arr[j][i]);
//         }
//     }

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(j==row/2){
//                 break;
//             }
//             swap(arr[i][j],arr[i][col-1-j]);
//         }
//     }

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// int countPrimes(int n) {
//     int num=2;
//     int count=1;
//     while(num<n){
//         for(int i=2;i<num;i++){
//             if(num%i==0){
//                 //cout<<num<<" ";
//                 break;
//             }
//             else if(i==num-1){
//                 cout<<num<<" ";
//                 count++;
//             }
//         }
//         num++;
//     }
//     return count;
// }

// int main(){
//     int n=10;
//     countPrimes(n);
// }


//GCD Eucliden Algo
// int GCD(int a, int b){
//     int ans;
//     do{
//         ans=b;
//         b=a%b;
//         a=ans;
//         cout<<ans<<" "<<a<<" "<<b<<endl;
//     }while(b!=0);
//     return ans;
// }

// //another method
// int GCD(int a, int b){

//     if(a==0)
//     return b;

//     if(b==0)
//     return a;

//     while(a!=b){
//         if(a>b){
//             a=a-b;
//         }
//         else{
//             b=b-a;
//         }
//     }
//     return a;
// }

// int main(){
//     cout<<GCD(125,35);
// }


