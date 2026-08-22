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
    // int unit ;
    // cout<<"enter units"<<endl;
    // cin>>unit;
    // if(unit>=0 && unit<=100){
    //     cout<<unit*5<<"rs."<<endl;
    // }
    // else if(unit>100 && unit<=200){
    //     int startUnit= 100*5;
    //     int balUnit= unit-100;
    //     int calUnit= balUnit*7;
    //     cout<<startUnit+calUnit<<"rs."<<endl;

    // }
    // else if(unit > 200){
    //     int startUnit= 100*5;
    //     int secondUnit= 100*7;
    //     int balUnit= unit-200;
    //     int calUnit= balUnit*10;
    //     cout<<startUnit+secondUnit+calUnit<<"rs."<<endl;

    // }
    // else{
    //     cout<<"invalid"<<endl;
    // }

    //activity 8
    // string username, password;
    // cout<<"enter username"<<endl;
    // cin>>username;
    // cout<<"enter password"<<endl;
    // cin>>password;
    // if(username=="admin" && password=="1234"){
    //     cout<<"valid"<<endl;
    // }
    // else if(username=="admin" && password!="1234"){
    //     cout<<"wrong password"<<endl;
    // }
    // else if(username!="admin" && password=="1234"){
    //     cout<<"wrong username"<<endl;
    // }
    // else{
    //     cout<<"invalid credentials"<<endl;
    // }

    //activity 9
    // int balance=1000, withdrawAmount, pin;
    // cout<<"enter pin"<<endl;
    // cin>>pin;

    // cout<<"enter withdraw Amount"<<endl;
    // cin>>withdrawAmount;

    // if(pin!=1234){
    //     cout<<"enter a valid pin"<<endl;
    // }
    // else if(withdrawAmount>balance){
    //     cout<<"insufficient balance"<<endl;
    // }
    // else if(pin==1234 && withdrawAmount<=balance){
    //     cout<<"successfull transict"<<endl;
    // }
    // else{
    //     cout<<"invalid approach";
    // }

    //activity 10
    // int day, month, year;
    // cout<<"enter day"<<endl;
    // cin>>day;
    // cout<<"enter month"<<endl;
    // cin>>month;
    // cout<<"enter year"<<endl;
    // cin>>year;

    // if((month >=1 && month<=12) && ((month==4 && month==6 && month==9 && month==11)>=30) && ((month==1 &&  month==3 && month==5 && month==7 &&month==8 && month==10 && month==12)>=31)){
    //     cout<<"valid date"<<endl;
    // }
    // else if((((year%4==0)||(year%400==0))&&(year%100!=0)) && (month==2 && day>=29)){
    //     cout<<"valid"<<endl;
    // }

    // else if((((year%4!=0)||(year%400!=0))&&(year%100==0)) && (month==2 && day>=28)){
    //     cout<<"valid"<<endl;
    // }
    // else{
    //     cout<<"invalid";
    // }

    //activity 11
    // int num;
    // cout<<"enter a number"<<endl;
    // cin>>num;

    // if(num>0 && num%2==0){
    //     cout<<"positive even"<<endl;
    // }
    // else if(num>0 && num%2!=0){
    //     cout<<"positive odd"<<endl;
    // }
    // else if(num<0 && num%2==0){
    //     cout<<"negative even"<<endl;
    // }
    // else if(num<0 && num%2!=0){
    //     cout<<"negative odd"<<endl;
    // }
    // else{
    //     cout<<"number is zero";
    // }

    //activity 12
    // int num1, num2, num3, num4;
    // cout<<"enter first number"<<endl;
    // cin>>num1;
    // cout<<"enter second number"<<endl;
    // cin>>num2;
    // cout<<"enter third number"<<endl;
    // cin>>num3;
    // cout<<"enter forth number"<<endl;
    // cin>>num4;

    // int largest =num1;
    // if(num2>largest){
    //     largest=num2;
    // }
    // if(num3>largest){
    //     largest = num3;
    // }
    // if(num4>largest){
    //     largest= num4;
    // }

    // cout<<largest;

    //activity 13
    // int num1, num2;
    // cout<<"enter first num"<<endl;
    // cin>>num1;

    // cout<<"enter second num"<<endl;
    // cin>>num2;

    // if(num1>0 && num2>0){
    //     cout<<"quadrent1"<<endl;
    // }
    // else if(num1<0 && num2>0){
    //     cout<<"quadrent2"<<endl;
    // }
    // else if(num1<0 && num2<0){
    //     cout<<"quadrent3"<<endl;
    // }
    // else if(num1>0 && num2<0){
    //     cout<<"quadrent4"<<endl;
    // }
    // else if(num1==0){
    //     cout<<"y axis"<<endl;
    // }
    // else if(num2==0){
    //     cout<<"x axis"<<endl;
    // }
    // else if(num1==0 && num2==0){
    //     cout<<"origin"<<endl;
    // }
    // else{
    //     cout<<"inavalid"<<endl;
    // }

    //activity 14
    // int amount; 
    // cout<<"enter amount"<<endl;
    // cin>>amount;

    // if(amount>10000){
    //     double discount= amount*(30.0/100);
    //     cout<<amount-discount<<endl;
    // }

    // else if(amount>5000 && amount<=10000){
    //     double discount= amount*(20.0/100);
    //     cout<<amount-discount<<endl;
    // }

    // else if(amount>1000 && amount<=5000){
    //     double discount= amount*(10.0/100);
    //     cout<<amount-discount<<endl;
    // }

    // else if(amount<=1000){
    //     cout<<amount<<endl;
    // }
    
    
    
    // else{
    //     cout<<"invalid";
    // }

    //activity 15
    int num1, num2, num3;
    cout<<"enter first side"<<endl;
    cin>>num1;

    cout<<"enter second side"<<endl;
    cin>>num2;

    cout<<"enter third side"<<endl;
    cin>>num3;

    if(num1+num2>num3 && num1+num3>num2 && num2+num3>num1){
        cout<<"valid triangle"<<endl;
        if(num1==num2 && num1==num3){
            cout<<"equilateral triangle"<<endl;
        }
        else if(num1 == num2 || num1==num3 || num2==num3){
            cout<<"isosceles traiangle"<<endl;
        }
        else if((num1!=num2 && num1!=num3) || (num2!=num1 && num2!=num3) || (num3!=num1 && num3!=num2)){
            cout<<"scalene triangle";
        }
        else{
            cout<<"don't know";
        }
    }
    else{
        cout<<"invalid triangle";
    }

    return 0;
}