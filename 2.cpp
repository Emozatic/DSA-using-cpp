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
    // int num1, num2, num3;
    // cout<<"enter first num"<<endl;
    // cin>>num1;
    // cout<<"enter second num"<<endl;
    // cin>>num2;
    // cout<<"enter third num"<<endl;
    // cin>>num3;

    // if((num1==num2)&&(num1==num3)){
    //      cout<<"all numbers are equal"<<endl;
    // }
    // else if((num1==num2)||(num1==num3)){
    //     cout<<"two numbers are equal"<<endl;
    // }
    // else{
    //     cout<<"all different"<<endl;
    // }

    //activity5
    // int num1, num2, num3;
    // cout<<"enter first number"<<endl;
    // cin>>num1;
    // cout<<"enter second number"<<endl;
    // cin>>num2;
    // cout<<"enter third number"<<endl;
    // cin>>num3;
    // if(num1+num2>num3 && num1+num3>num2 && num2+num3>num1){
    //     cout<<"valid triangle"<<endl;
    // }
    // else{
    //     cout<<"invalid triangle"<<endl;
    // }

    //activity 6
    // int marks;
    // cout<<"enter marks"<<endl;
    // cin>>marks;
    // if(marks>=90 && marks<=100){
    //     cout<<"A"<<endl;
    // }
    // else if(marks>=75 && marks<90){
    //     cout<<"B"<<endl;
    // }
    // else if(marks>=60 && marks<75){
    //     cout<<"C"<<endl;
    // }
    // else if(marks>=40 && marks<60){
    //     cout<<"D"<<endl;
    // }
    // else if(marks>=0 && marks<40){
    //     cout<<"fail"<<endl;
    // }
    // else{
    //     cout<<"invalid marks"<<endl;
    // }

    //activity 7
    int unit ;
    cout<<"enter units"<<endl;
    cin>>unit;
    if(unit>=0 && unit<=100){
        cout<<unit*5<<"rs."<<endl;
    }
    else if(unit>100 && unit<=200){
        int startUnit= 100*5;
        int balUnit= unit-100;
        int calUnit= balUnit*7;
        cout<<startUnit+calUnit<<"rs."<<endl;

    }
    else if(unit > 200){
        int startUnit= 100*5;
        int secondUnit= 100*7;
        int balUnit= unit-200;
        int calUnit= balUnit*10;
        cout<<startUnit+secondUnit+calUnit<<"rs."<<endl;

    }
    else{
        cout<<"invalid"<<endl;
    }

    return 0;
}