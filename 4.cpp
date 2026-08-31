#include<iostream>
using namespace std;
int main(){

    // for (int i=1; i<=10; i++ ){

    //     cout<<i<<endl;
    // }

    //activity 2
    // for(int i=0; i<=20; i++){
    //     if(i%2==0){
    //         cout<<i<<endl;
    //     }
    // }

    //activity 3
    // for(int i=20; i>=1; i--){
    //     cout<<i<<endl;
    // }
    
    //activity 4
    // int sum =0; 
    // for(int i=1; i<=10; i++){
    //     sum+=i;
    // }
    // cout<<sum<<endl;

    //activity 5
    // int mul=1;
    // for(int i=1; i<=5; i++){
    //     mul*=i;
    // }
    // cout<<mul<<endl;

    //activity 6
    // int count= 0; 
    // for(int i=0; i<=10; i++){
    //     count++;
    // }
    // cout<<count<<endl;

    //activity 7
    // int num, ans=0;
    // cout<<"enter a number for reverse"<<endl;
    // cin>>num;
    // int original=num;

    // while(num>0){
    //     int div= num/10;
    //     int rem= num%10;
    //     ans= ans*10+rem;
    //     num=div;
    // }
    // if(original==ans){
    //     cout<<"palindrome"<<endl;
    // }
    // else{
    //     cout<<"not pallindrome"<<endl;
    // }
    // cout<<ans<<endl;

    //activity 8: count numbers
    // int num, count=0;
    // cout<<"enter a number"<<endl;
    // cin>>num;
    // if(num==0){
    //     count=1;
    // }
    // while(num>0){
    //     num= num/10;
    //     count++;
    // }

    // cout<<count<<endl;

    //activity 9
    int num, count=0, pow=1, sum=0;
    cout<<"enter a number"<<endl;
    cin>>num;
    int num2= num;
    int checking= num;
    while(num>0){
        num=num/10;
        count++;
    }
    cout<<"count value is= "<<count<<endl;
    while(num2>0){
        int rem= num2%10;
       for(int i=0; i<count; i++){
        pow= rem*pow;
       }
       sum+=pow;
       num2=num2/10;
        pow=1;
    }
    cout<<"sum is="<<sum<<endl;
    if(sum==checking){
        cout<<"number is  armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }


    return 0;
}