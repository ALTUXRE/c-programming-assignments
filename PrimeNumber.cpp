/*Q.1program to check whether a number is prime or not*/
#include <iostream>
using namespace std;
int main(){
int n,i=1,c=0;
cout<<"Enter a Number";
cin>>n;
while(i<=n){
	if(n%i==0)
	c++;
	i++;
}
if(c>2)
cout<<"Not Prime";
else
cout<<"Prime";

}

/*Q.2 Program to reverse the digts of a given number*/
#include<iostream>
using namespace std;
int main(){
int n,r,sum=0;
cout<<"Enter a Number: ";
cin>>n;
while(n>0){
	r=n%10;
	sum=sum*10+r;
	n=n/10;
}
cout<<sum;


}
