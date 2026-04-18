//solve the sum of digits of number
#include<iostream>
using namespace std;
int isnum(int num){
    int isdigit=0;
    while (num>0){
        int lastdigit=num%10;
        num/=10;
        isdigit+= lastdigit;
    }
    return isdigit;
}
int main(){
    int num;
    cout<< isnum(1234);
    return 0;
}
