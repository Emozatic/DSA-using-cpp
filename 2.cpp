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
    int num1= 1;
    int num2= 5;
    int num3= 3;
    if(num1>num2 && num1>num3){
        cout<<num1<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<num2<<endl;
    }
    else{
        cout<<num3<<endl;
    }



    return 0;
}