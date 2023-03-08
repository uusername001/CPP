#include <iostream.h>
using namespace std;
int main(){
    char symbol;
    int num1;
    int num2;
    int output;
    cout<<"enter the symbol for operation to be done";
    cin>>symbol;
    cout<<"enter the first number:";
    cin>>num1;
    cout<<"enter the second number:";
    cin>>num2;
    switch (symbol)
    {
    case '+':
    output=num1+num2;
    cout<<"the sum of the two numbers is:"<<output;
        
        break;
    case '-':
    output=num1-num2;
    cout<<"the difference of the two numbers is:"<<output;
        
        break;
     case '/':
    output=num1/num2;
    cout<<"the quotient of the two numbers is:"<<output;
        
        break;
     case '*':
    output=num1*num2;
    cout<<"the product of the two numbers is:"<<output;
        
        break;
     case '%':
    output=num1%num2;
    cout<<"the reminder of the two numbers is:"<<output;
        
        break;
    
    default:
    cout<<"wrong input, try again";
        break;
    }
}