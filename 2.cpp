#include<iostream>
using namespace std;
int main(){

    // int num= 32;
    // if(num>0){
    //     cout<<"positive"<<endl;
    // }
    // else if(num<0){
    //     cout<<"negative"<<endl;
    // }
    // else{
    //     cout<<"zero"<<endl;
    // }

    //activity 2
    // int num1= 1;
    // int num2= 5;
    // int num3= 3;
    // if(num1>num2 && num1>num3){
    //     cout<<num1<<endl;
    // }
    // else if(num2>num1 && num2>num3){
    //     cout<<num2<<endl;
    // }
    // else{
    //     cout<<num3<<endl;
    // }

    //activity 3
    // int year; 
    // cout<<"enter a year"<<endl;
    // cin>>year;

    // if(year % 400 == 0){
    //     cout<<"leap year";
    // }
    // else if(year % 4 ==0 && year %100!=0){
    //     cout<<"leap year"<<endl;
    // }
    // else{
    //     cout<<"not leap year"<<endl;
    // }

    //activity 4
    int num1, num2, num3;
    cout<<"enter first num"<<endl;
    cin>>num1;
    cout<<"enter second num"<<endl;
    cin>>num2;
    cout<<"enter third num"<<endl;
    cin>>num3;

    if((num1==num2)&&(num1==num3)){
         cout<<"all numbers are equal"<<endl;
    }
    else if((num1==num2)||(num1==num3)){
        cout<<"two numbers are equal"<<endl;
    }
    else{
        cout<<"all different"<<endl;
    }




    return 0;
}