#include<iostream>
using namespace std;
int main(){

    //activity 1
    // int num;
    // cout<<"enter a number"<<endl;
    // cin>>num;
    // for(int i=1; i<=num; i++){
    //     cout<<i<<endl;
    // }

    //activity 2
    // int num, evenSum=0, oddSum=0;
    // cout<<"enter a number"<<endl;
    // cin>>num;

    // for(int i=1; i<=num; i++){
    //     if(i%2==0){
    //         evenSum+=i;
    //     }
    //     if(i%2!=0){
    //         oddSum+=i;
    //     }
    // }
    // cout<<evenSum<<endl;
    // cout<<oddSum<<endl;

    //activity 3
    // int num,fact=1;
    // cout<<"enter num"<<endl;
    // cin>>num;

    // for(int i=1; i<=num; i++){
    //     fact= fact*i;
    // }
    // cout<<fact<<endl;

    //activity 4
    // int num;
    // cout<<"enter num"<<endl;
    // cin>>num;

    // for(int i=1; i<=10; i++){
    //     cout<<num<<"*"<<i<<"="<<num*i<<endl;
    // }

    //activity 5
    // int num= 344, count=0;
    // while(num>0){
    //     int div= num/10;
    //     if(div>=0){
    //         count++;
    //     }
    //     num= div;
    // }
    // cout<<count;

    //activity 6
    // int num=121, rev=0;
    // while(num>0){
    //     int div= num/10;
    //     int rem= num%10;
    //     rev= rev*10+rem;
    //     num=div;
    //     cout<<"num="<<num<<endl;
    //     cout<<"rev="<<rev<<endl;
    // }
    // if(rev==num){
    //     cout<<"palindrome num"<<endl;
    // }
    // else{
    //     cout<<"not pallindrome"<<endl;
    // }

    //activity 7
    int num = 1234, sum=0;
    while(num>0){
        int div= num/10;
        int rem= num%10;
        sum+=rem;
        num=div;
        cout<<sum<<endl;
    }
    cout<<sum;

    return 0;
}