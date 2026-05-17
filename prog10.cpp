#include<iostream>
#include<string>
using namespace std;

//Prototype
void input(int grades[], long &id);
float calculate(int grades[]);
void display(int grades[], long id, float avg);

int main(){
    int grades[3];
    long id;
    float avg;

    //Call input function
    input(grades, id);
    //Call calculate function
    avg=calculate(grades);
    //Call output function
    display(grades, id, avg);

    return 0;
}
//Input the grades
void input(int grades[], long &id){
    cout<<"Please enter your Student ID:";
    cin>>id;
    cout<<"Please enter your Chinese score:";
    cin>>grades[0];
    cout<<"Please enter your English score:";
    cin>>grades[1];
    cout<<"please enter you Math score:";
    cin>>grades[2];
}
//Calculation
float calculate(int grades[]){
    int sum=0;
    for(int i=0; i<3; i++){
        sum+=grades[i];
    }
    return sum/3.0;
}
//Output the results
void display(int grades[], long id, float avg){
    cout<<"\n"<<endl;
    cout<<"Student ID: "<<id<<endl;
    cout<<"Chinese: "<<grades[0]<<endl;
    cout<<"English: "<<grades[1]<<endl;
    cout<<"Math: "<<grades[2]<<endl;
    cout<<"------------------"<<endl;
    cout<<"Average: "<<avg<<endl;
}