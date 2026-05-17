#include<iostream>
#include<string>
using namespace std;
int main(){
	int Score[3];
	int Sid;
	string n;
	float aver,sum=0;
	
	
	cout<<"Please enter your name:";
	cin>>n;
	cout<<"Please enter your Student ID:";
	cin>>Sid;
	cout<<"Please enter your Chinese score:";
	cin>>Score[0];
	cout<<"Please enter your English score:";
	cin>>Score[1];
	cout<<"Please enter your Math score:";
	cin>>Score[2];
	
	cout<<"\n"<<endl;
	cout<<"Name:"<<n<<endl;
	cout<<"Student ID:"<<Sid<<endl;
	cout<<"Here are your scores:"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Chinese:"<<Score[0]<<endl;
	cout<<"English:"<<Score[1]<<endl;
	cout<<"Math:"<<Score[2]<<endl;
	cout<<"---------------------"<<endl;
	for (int i=0; i<3; i++){
		sum += Score[i];
	}
	aver=sum/3;
	cout<<"Total score:"<<sum<<endl;
	cout<<"Average:"<<aver<<endl;
	
	return 0;
}
