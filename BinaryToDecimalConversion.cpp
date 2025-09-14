#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter Binary Number: "; // which convert in decimal
    cin>>num;
    int i=0;
    int result=0;
    while(num!=0){
        int Digit=num%10;
        if(Digit==1){
            result=result+pow(2,i);
        }
        i++;
        num=num/10;

    }
    cout<<"Decimal number is: "<<result;
    return 0;
    
}