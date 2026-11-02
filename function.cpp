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

// calculate the sum of n1 to n number.
/*#include<iostream>
using namespace std;
int sum(int n){
    int sum=0;
for(int i=1;i<=n;i++){
    sum=sum+i;
}
   return sum;
}
int main(){
 int sum1=sum(5);
cout<<sum1;
}*/

// factorial of n number.
/*#include<iostream>
using namespace std;
 int  fact1=1;
int fact(int n){
    for(int i=1;i<=n;i++){
   fact1=fact1*i;
    }
return fact1;
}
int main(){
   cout<< fact(5);
}*/

//pass by values
/*#include<iostream>
using namespace std;
int sum(int a,int b){
    int sum1=a+b;
    return sum1;
}
int main(){
    int x=5,y=4;
 int  sum1=  sum(x,y);
cout<<sum1;
}*/

//calculate the sum of digit.
/*#include<iostream>
using namespace std;
int sum(){
    int x=11,a,b,c,d,e,f; 
   a= x%10;
   b=x/10;
   c=b%10;
   d=c/10;
   return a+c;
}
int main(){
    cout<<sum();
}
*/ 
//or
/*#include<iostream>
using namespace std;
int main(){                                       
    int sum=0,x,num1;
    cout<<"enter your number: ";
    cin>>x;
    while(x>0){
        num1=x%10;
        x=x/10;
        sum+=num1;
        }
        cout<<sum;
}*/