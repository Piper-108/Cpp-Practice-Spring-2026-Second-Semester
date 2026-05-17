#include<iostream>
#include<string>
using namespace std;

//Prototype
int inputGrades(int grades[]);
float calculateAverage(int grades[], int n);
void display(int grades[], int n, float avg);

int main(){
    int grades[30];
    int n;
    float avg;

    //Call input function
    n=inputGrades(grades);
    //Call calculate function
    avg=calculateAverage(grades,n);
    //Call output function
    display(grades,n ,avg);

    return 0;
}

//Function that read grades
int inputGrades(int grades[]){
    int n;
    cout<<"Enter number of grades(max 30):";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Grade "<<i+1<<":";
        cin>>grades[i];
    }
    return n;
}
//function that calculate average
float calculateAverage(int grades[], int n){
    float sum=0;
    for(int i=0; i<n; i++){
        sum+=grades[i];
    }
    return sum/n;
}
//Function that print results
void display(int grades[], int n, float avg){
    cout<<"\n"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Grade"<<i+1<<": "<<grades[i]<<endl;
    }
    cout<<"\nTotal numbers of grades: "<<n<<endl;
    cout<<"Average: "<<avg<<endl;
}