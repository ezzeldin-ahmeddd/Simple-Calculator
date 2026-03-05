#include <iostream>
using namespace std;
int main(){
    double num1;
    double num2;
    char op=' ';
    cout<<"====Simple Calculator===="<<endl;
    while (op!='E'&&op!='e'){
        cout<<"Choose an operator (+, -, *, /) or 'E' to exit: ";
        cin>>op;
        if (op=='E'||op=='e'){
            cout<<"Exiting the calculator. Goodbye!";
            break;
        }
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
            switch(op){
        case '+':
        cout<<"==Addition=="<<endl;
        cout<<"Result: "<<num1+num2<<endl;
        cout<<"============"<<endl;
        break;
        case '-':
        cout<<"==Subtraction=="<<endl;
        cout<<"Result: "<<num1-num2<<endl;
        cout<<"================="<<endl;
        break;
        case '*':
        cout<<"==Multiplication=="<<endl;
        cout<<"Result: "<<num1*num2<<endl;
        cout<<"=================="<<endl;
        break;
        case '/':
        if (num2!=0){
            cout<<"==Division=="<<endl;
            cout<<"Result: "<<num1/num2<<endl;
            cout<<"============"<<endl;
        }
        else{
            cout<<"Error: Division by zero is not allowed.";
        }
        break;
        default:
        cout<<"Please choose a valid operator from the options provided.";

    }

        cout<<endl;
    }
    return 0;
}