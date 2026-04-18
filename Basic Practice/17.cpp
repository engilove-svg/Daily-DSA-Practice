//program to find prime numbers
#include<iostream>
using namespace std;


bool isprime(int n){
    if (n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
       if (n % i== 0) return false;

    }
    return true;

}
int main(){
    int n;
    cin>>n;
    cout<<"Is this a prime number:";
    if(isprime(n)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}