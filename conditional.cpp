/* boiler plate of c++
#include<iostream>
using namespace std;
int main(){


    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    cout<<"ankit"<< endl <<"kumar";
    
}*/

/*#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter a age";  // for print 
    cin>>age;  //take input
    cout<<"your age is "<<age<<endl;
    return 0;
}*/
   
/*#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=2;
    int sum =a+b;
    cout <<"sum is "<<(a+b)<<endl;
    cout <<"subtreact"<<(a-b)<<endl;
    cout<<"multiply is "<<(a*b)<<endl;
    cout<<"divide is"<<(a/b)<<endl;
    
        return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int a,b;
cout<<"enter a number a";
cin>>a;
cout<<"enter a number b";
cin>>b;
int sum=a+b;
cout<<"sum is"<<sum ;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int a;
   cout<<"enter a number\n";
    cin>>a;
    if(a>=18){
        cout<<"you can vote";
    }else{
    cout<<"you can not vote";
    }
    return 0;
}*/
//odd even check
/*#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number";
    cin>>a;
    if(a%2==0){
        cout<<"a is even number";
    }else{
        cout<<"a is odd number";
    }
    return 0;
}*/
//grade check
/*#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter a number";
    cin>>marks;
    if(marks>=90){
        cout<<"A";
    } else if (marks>=80&&marks<90){
        cout<<"B";
    } else{
        cout<<"C";
    }
    return 0;
}*/
//find character lowercase and upper case
/*#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if('a'<=ch&&'z'>=ch){
        cout<<"lowercase";
         }else{
            cout<<"highercase";
    }
}*/
//ternary statement
/*#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    cout<<(a>10?"true":"false");
    return 0;
}*/
//while loop Qs. print number 1 to 5
/*#include<iostream>
using namespace std;
int main(){
   int i=1;
   while (i<=5){
    cout<< i<< "\n";
    i++;
   }
return 0;
} */

// for loop | for(initialisation;condition;updation){ work}
/*#include<iostream>
using namespace std;
int main(){
    int a=10;
    int sum=1;
    for(int i=1;i<=a;i++){
       // cout<<i<<"\n";
       sum=sum*i;
       if(i==5)
       break;
    }
    cout<<sum;
    return 0;
}*/
// find the sum of odd number 1 to N
/*#include<iostream>
using namespace std;
int main(){
    int a=10,i,sum=0;
for(i=1;i<=a;i++){
    if(i%2!=0){
        cout<<i<<"\n";
sum+=i;
    }
}
cout<<"sum is "<<sum ;
    return 0;
}*/
// do while loop 
/*#include<iostream>
using namespace std;
int main(){
    int a=10;
    int i=1;
   do {
    cout<<"hello ankit\n";
     i++;
   } while (i<=a);
  
}*/
//check the number is prime or not
/*#include<iostream>
using namespace std;
int main(){
    int n,i;
    bool prime =true;
    cout<<"enter a number";
    cin>>n;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
        if(prime==true){
            cout<<"is prime number";
        }
        else{
            cout<<"not prime number";
        
        }
}*/
/*#include<iostream>
using namespace std;
int main(){
    int n=5;
    for( int i=1;i<=n;i++){
     int m=10;
     for(int j=1;j<=m;j++){
        cout<<"*";
     }
     cout <<"\n"; 
    }
}*/
// sum of all the number 1 to n which are divisible by 3.
/*#include<iostream>
using namespace std;
int main(){
    int i,sum=0;
    int n=10;
    for(i=1;i<=n;i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
     cout<<sum;
}*/
//print factorial of number
/*#include<iostream>
using namespace std;
int main(){
    int i;
    int factorial=1;
    int n=5;
    for(i=1;i<=n;i++){
    factorial=factorial*i;
}
cout<<factorial;
}*/
//pattern printing
/*#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=5;
    for(i=1;i<=n;i++){
       char ch='A'; 
         for (j=1;j<=n;j++){
           cout<<ch;
           ch=ch+1;
        }
        cout<<"\n";
    }
    
}*/
/*#include<iostream>
using namespace std;
int main(){
    int n=3;
    int i,j;
    int x=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
         cout<<x;
         x++;
        }

        cout<<"\n";
    }
}*/

/*#include<iostream>
using namespace std;
int main(){
    int i=1,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
cout<<"\n";
    }
}*/
/*#include<iostream>
using namespace std;
int main(){
    int i,x=4,j;
    char  n='A';
    for(i=1;i<=x;i++){
        for(j=1;j<=i;j++){
            cout<<n;
        }
        n=n+1;
        cout<<"\n"
    }
*/
/*#include<iostream>
using namespace std;
int main(){
    int i,x=4,j;
        int n=1;
    for(i=1;i<=x;i++){
        for(j=i;j>=1;j--){
            cout<<j;
            // n=n+1;
        }
       
        cout<<"\n";
    }
}*/
/*#include<iostream>
using namespace std;
int main(){
    int i,j,n=4;
    char x='A';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        
        cout<<x;
     x=x+1;    
}
    cout<<"\n";
}
}*/
/*#include<iostream>
using namespace std;
int main(){
    int i,j,n=4;
    int x=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        cout<<x;
    x++;    
}
    cout<<"\n";
}
return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int i,j;
    int x=4;
    for(i=0;i<x;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
for(j=0;j<x-i;j++){
   cout<<i+1;
}
cout<<"\n";
    }
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int x=4;
    int i,j;
    char ch='A';
    for(i=0;i<x;i++){
        for(j=i;j<i;j++){
            cout<<(" ");
        }
        for(j=0;j<x-i;j++){
            
         cout<<ch;
        }
        ch=ch+1;
        cout<<"\n";
    }
}*/
/*#include<iostream>
using namespace std;
int main(){
    int i,j;
    int x=4;
    for(i=0;i<x;i++){
        for(j=0;j<x-i-1;j++){
         cout<<" ";
        }
            for(j=1;j<=i+1;j++){
                cout<<j;
            }
             for(j=i;j>0;j--){
                cout<<j;
        }
        cout<<"\n";
    }
}*/                  
                            //FUNCTION.

//sum of n number.                      
/*#include<iostream>
using namespace std;
int sum(int a){
int sum=0;
for(int i=1;i<=a;i++){
    sum=sum+i;
}
return sum;
}
int main(){
cout<<sum(5);
} */ 

//Calculate N factorial.
/*#include<iostream>
using namespace std;
int factorial(int a){
    int x=1;
    for(int i=1;i<=a;i++){
    x=x*i;
}
return x;
}
int main(){
cout<<factorial(5);
}*/

/*#include<iostream>
using namespace std;
int sum(int a,int b){
   a=a+10;
   b=b+10;
   return a+b;
}
int main(){
int a=5;
int b=4;
cout<<sum(a,b);
cout<<"\n";
cout<<a;cout<<"\n";
cout<<b;
}*/

//sum of the digit.
/*#include<iostream>
using namespace std;
int sumofN(int num){
    int digitsum=0;
    while(num>0){
        int lastdigit=num%10;
        num/=10;
        digitsum=digitsum+lastdigit;
    }
    return digitsum;
}
int main(){
    cout<<sumofN(2356);
}*/

/*#include<iostream>
using namespace std;
int factorial(int n){
      int fact=1;
for(int i=1;i<=n;i++){
    fact*=i;
}
return fact ;
}
int ncr(int n,int r){
      int fact_n=factorial(n);
      int fact_r=factorial(r);
      int factnmr=factorial(n-r);
      return fact_n/(fact_r*factnmr);
}

int main(){
int x=8,y=2;
cout<<ncr(x,y);
return 0;
}*/

//check a number is prime or not and print all the prime no.2 to  N.
/*#include<iostream>
using namespace std; 
int prime(int n){
       
    int count=0;
for(int i=1;i<=n;i++){
        count=0; 

for(int j=1;j<=i;j++){
    if(i%j==0){
    count++;

}
}
  if(count==2){
    cout<<i<<"\n";
  }
}

}

int main()
{
 prime(10);
  
}*/

/*#include<iostream>
#include<climits>
using namespace std;
int main(){
    int  number[]={12,43,65,-5,45,7};
   int  smallestno = INT_MAX;
   int smallestindex=0;
   for(int i=0;i<6;i++){
    if(number[i]<smallestno){
        smallestno=number[i];
     smallestindex=i;
    }
   }
    cout<<smallestno<<"\n";
cout <<smallestindex;
}*/

//reverse of array 
/*#include<iostream>
using namespace std;
void reversearray(int arr[],int sz){
    int start=0,end= sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
    
    start ++;
    end --;
    }
}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int sz=9;
 reversearray(  arr, sz);
for(int i=0;i<sz;i++){
    cout<< arr[i]<<" ";
}
return 0;
}*/

//  FUNCTION
/*#include<iostream>
using namespace std;
int sum(int a,int b){
    int sum1=a+b;
    return sum1;
}
int main(){
    cout<<sum(1,2);
}*/

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    if(n%2==0){
        cout<<"even number";
    }
    else{
        cout<<"odd number";
    }
}*/

/*#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter a 1st number";
    cin>>x;
     cout<<"enter a 2nd number";
    cin>>y;
    if(x<y){
        cout<<"  greater number is"<<y;
    }
    else{
        cout<<" greater number is "<<x;
    }
} */

/*#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter a year";
    cin>>x;
    if((x%4==0 &&x%100!=0)||x%400==00){
       cout<<"year is a leap year";
        
    }
    else{
       cout<<"not leap year";
    }
}   */
/*#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number";
    cin>>x;
    if(x>0){
        cout<<"positive number";
    }else if(x==0){
        cout<<"zero";
    }else{
        cout<<"negative number";
    }
}*/
/*#include<iostream>
using namespace std;
int main()
{
int x,y;
cout<<"enter a number";
cin>>x;
if(x%5==0&&x%11==0){
    cout<<"yes";
}else{
    cout<<"no";
}
}*/
/*#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"enter a marks";
cin>>marks;
if(marks>=90){
    cout<<"grade A";
}else if(marks>=75&&marks<90){
    cout<<"Grade B";
}
else if(marks>=50&&marks<75){
    cout<<"Grade c";
}
else if(marks>=35&&marks<50){
    cout<<"Grade D";
}
else{
    cout<<"fails with limits";
}
}*/
/*#include<iostream>
using namespace std;
int main(){
int age;
cout<<"enter your age";
cin>>age;
if(age>=18){
    cout<<"you can vote";
}else {
    cout<<"you can't vote ";
}
}*/
/*#include<iostream>
using namespace std;
int main(){
int x,y,z;
cout<<"enter 1st number";
cin>>x;
cout<<"enter 2nd number";
cin>>y;
cout<<"enter 3rd number";
cin>>z;
if(x<y||y<z){
    cout<<z<<" is greater";
}
else if(x<y){
    cout<<y<<" is greater";
}
else{
    cout<<x<<" is greater";
}
}*/

/*#include<iostream>
using namespace std;
int main(){
    int x,y,z;
cout<<"enter 1st side";
cin>>x;
cout<<"enter 2nd side";
cin>>y;
cout<<"enter 3rd side";
cin>>z;
if(x==y&&y==z){
    cout<<"equilateral triangle";
}
else if(x==y||y==z){
    cout<<"isosceles";
}
else{
    cout<<"scalene";
}
}
*/

