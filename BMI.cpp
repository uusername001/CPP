#include<iostream>
using namespace std;
int main(){
    float weight;
    int height;
    float bmi;
    float meters;
cout<<"please enter your weight:";
cin>>weight;
cout<<"please enter your height in centimeters:";
cin>>height;
meters=(float)height/100;
bmi=(weight/(meters*meters));
cout<<"your bmi is "<<bmi<<"kg/m^2"<<endl;
if(bmi<18.5){
    cout<<"underweight"<<endl;}
else if(bmi>=18.5 && bmi<25.0){
    cout<<"you have a healthy weight";}
else if(bmi>=25.0 && bmi<=29.9){
    cout<<"you are over weight";}
else{
    cout<<"you are obese";}
    return 0;
}
bmi  program