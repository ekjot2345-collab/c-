#include<iostream>
using namespace std;
int main(){
    /* int n;
    cin>>n;
     cout<<"the value of n is:"<<n<<endl;
    //if n is positive
    if(n>0){
        cout<<"the value of n is positive"<<endl;
    }
    else{
        cout<<"the value of n is negative"<<n<<endl;
    }





   int a,b;
//    cin>> a>> b;

a=cin.get(); // forspaces tab and enter key are also considered as input




//    cout<<"the value of a and b is "<<a <<" "<< b <<endl;
cout<<"the value of a is "<<a<<endl;*/
//a='9' ascii value is 57



/*int a,b;
cout<<"enter the value of a and b:"<<endl;
cin>>a>>b;
if(a>b){
    cout<<"a is greater than b"<<endl;
}
else if(a<b){
    cout<<"b is greater than a"<<endl;
}
else{
    cout<<"a and b are equal"<<endl;
}
*/


//Q : to find the sum of first n natural numbers using while loop

/*
int n;
cin>>n;

int i=1;
int sum=0;

 
while(i<=n){
    sum=sum+i;
    i=i+1;
}
cout<<"the sum of first "<<n<<" natural numbers is: "<<sum<<endl;
}
*/


//Q : to check whether a number is prime or not??

int n;
cin>>n;
int i=2;
while(i<n){
    //divide hogya  to n is not prime
    if(n%i==0){
        cout<<"not prime"<<endl;
        return 0;
    }
    else{
        cout<<"prime"<<endl;
    }
    i=i+1;
}
// cout<<"the number is prime"<<endl;
}




