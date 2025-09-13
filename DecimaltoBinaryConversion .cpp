#include<iostream>
using namespace std;
void dectobinary(int n){ //function convert binary to decimal
    int storedigit[32]; // to store binary digit
    int i=0; // to cheak how many digit in binary number
    while(n>0){
        storedigit[i]=n%2;
       n=n/2;
       i++;
    }
    cout<<"Binary Number is : "<<endl;
    for(int j=i-1;j>=0;j--){
        cout<<storedigit[j];
    }

}
int main(){
    int n;
    cout<<"Enter Decimal Number";
    cin>>n;
    dectobinary(n);
    
}