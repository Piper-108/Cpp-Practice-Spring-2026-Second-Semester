#include<iostream>
#include<string>
using namespace std;
//Definition of the calculate function
float calculate(float n1, float n2, char op){
    float temp=0;
    if(op=='+') temp=n1+n2;
    else if(op=='-') temp=n1-n2;
    else if(op=='*') temp=n1*n2;
    else if(op=='/') temp=n1/n2;
    return temp;
}
void display(float n1, float n2, char op, float result){
    cout<<n1<<op<<n2<<"="<<result<<endl;
}
int main(){
    float a, b, result;
    char op;
    //Input the data
    cout<<"Please enter 2 numbers and a math symbol(num symbol num):";
    cin>>a>>op>>b;

    //Call out the calculation function
    float res=calculate(a, b, op);

    //Call out the output function
    display(a, b, op, res);
    return 0;
}