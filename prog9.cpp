#include<iostream>
#include<string>
using namespace std;

//Prototype
void input(int scores[]);
float calculate(int scores[]);
void display(int scores[], float avg);

int main(){
    int scores[3];
    float avg;

    //Call input function
    input(scores);
    //Call calculate function
    avg=calculate(scores);
    //Call output function
    display(scores, avg);

    return 0;
}

//Input the scores
void input(int scores[]){
    cout<<"Please enter your Chinese score:";
    cin>>scores[0];
    cout<<"Please enter your English score:";
    cin>>scores[1];
    cout<<"Please enter your Math score:";
    cin>>scores[2];
}
float calculate(int scores[]){
    int sum=0;
    for (int i = 0; i < 3; i++) {
        sum += scores[i];
    }
    return (float)sum / 3;    
}
void display(int scores[], float avg){
	cout<<" "<<endl;
    cout<<"Chinese:"<<scores[0]<<endl;
    cout<<"English:"<<scores[1]<<endl;
    cout<<"Math:"<<scores[2]<<endl;
    cout<<"Average:"<<avg<<endl;
}