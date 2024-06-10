#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
int divide(int a, int b){
    return a/b;
}

int main(){
    cout<<"*******SIMPLE CALCULATOR********"<<endl;
    cout<<"     ***************      "<<endl;
    bool conti = true;
    char ask;
    int a, b;
    char op;
    while(conti){
    cout<<"enter operation to perform (+, -, *, /): ";
    cin>>op;
    cout<<"Enter two number : ";
    cin>>a>>b;
    if(op=='+') cout<<"the sum of " <<a<<" "<<b<<" is "<<add(a,b);
    else if(op=='-') cout<<"the subtract of " <<a<<" "<<b<<" is "<<sub(a,b);
    else if(op=='*') cout<<"the multiplication of " <<a<<" "<<b<<" is "<<mul(a,b);
    else if (op=='/'){
      if(b!=0) cout<<"the division of " <<a<<" "<<b<<" is "<<divide(a,b)<<" and reminder is "<<(a%b);
      else cout<<"Number is not divisible by 0 : ";
      
    } 
    else cout<<"You Enter a Invalid operatoin !";

    cout<<endl<<"DO you Want to continue (y/n): ";
    cin>>ask;
    if(ask == 'n' || ask=='N') conti = false;
    else conti=true;
    }

    cout<<"Thank you for using this calculator "<<endl<<"Have a nice day!";
    return 0;
}