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
    int num;
    cout<<"enter num"<<endl;
    cin>>num;

    for(int i=1; i<=10; i++){
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }

    return 0;
}