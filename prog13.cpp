#include<iostream>
#include<string>
using namespace std;

//Prototype
void input(string &word, char &letter);
int count(string word, char letter);
void output(string word, char letter, int count);

int main(){
    string word;
    char letter;
    int result;

    //Call input function
    input(word, letter);
    //Call count function
    result=count(word, letter);
    //Call output function
    output(word, letter, result);

    return 0;
}

//Definition of the input function
void input(string &word, char &letter){
    cout<<"Please enter a word:";
    cin>>word;
    cout<<"Please enter a letter:";
    cin>>letter;
}

//Definition of the count function
int count(string word, char letter){
    int count=0;
    for(int i=0; i<word.length(); i++){
        if(word[i]==letter){
            count++;
        }
    }
    return count;
}

//Definition of the output function
void output(string word, char letter, int count){
    cout<<"\n";
    cout<<"The word is: "<<word<<endl;
    cout<<"The letter is: "<<letter<<endl;
    cout<<"It appears "<<count<<" time(s) in the word."<<endl;
}