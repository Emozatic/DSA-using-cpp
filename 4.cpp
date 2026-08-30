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
    int num, ans=0;
    cout<<"enter a number for reverse"<<endl;
    cin>>num;

    while(num>0){
        int div= num/10;
        int rem= num%10;
        ans= ans*10+rem;
        num=div;
    }
    cout<<ans<<endl;



    return 0;
}