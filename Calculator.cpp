#include <iostream>
using namespace std;

double Addition(double a, double b){
    return a+b;
}

double Subtraction(double a, double b){
    return a-b;
}

double Multiplication(double a, double b){
    return a*b;
}

double Division(double a, double b){
    if (b != 0){
        return a/b;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}


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
        cout<<"Result: "<<Addition(num1, num2)<<endl;
        cout<<"============"<<endl;
        break;
        case '-':
        cout<<"==Subtraction=="<<endl;
        cout<<"Result: "<<Subtraction(num1, num2)<<endl;
        cout<<"================="<<endl;
        break;
        case '*':
        cout<<"==Multiplication=="<<endl;
        cout<<"Result: "<<Multiplication(num1, num2)<<endl;
        cout<<"=================="<<endl;
        break;
        case '/':
        cout<<"==Division=="<<endl;
        cout<<"Result: "<<Division(num1, num2)<<endl;
        cout<<"============"<<endl;
        break;
        default:
        cout<<"Invalid operator. Please try again."<<endl;
    }

        cout<<endl;
    }
    return 0;
}
