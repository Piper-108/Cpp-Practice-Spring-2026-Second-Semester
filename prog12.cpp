#include<iostream>
#include<string>
using namespace std;

//Prototype
void input(float &a, float &b, char &op);
float calculate(float a, float b, char op);
void display(float a, float b, char op, float result);

int main(){
    float a, b, result;
    char op;

    //Call input function
    input(a,b,op);
    //Call calculate function
    result=calculate(a,b,op);
    //Call output function
    display(a,b,op,result);

    return 0;
}

//Definition of the input function
void input(float &a, float &b, char &op){
    cout<<"Please enter two numbers and an operator(e.g., 5 3 *):";
    cin>>a>>b>>op;
}

//Definition of the calculate function
float calculate(float a, float b, char op){
    float result=0;
    if(op=='+'){
        result=a+b;
    }else if(op=='-'){
        result=a-b;
    }else if(op=='*'){
        result=a*b;
    }else if(op=='/'){
        result=a/b;
    }
    return result;
}

//Definition of the output function
void display(float a, float b, char op, float result){
    cout<<a<<op<<b<<"="<<result<<endl;
}