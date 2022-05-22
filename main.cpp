#include"header.h"
using namespace std;

int main()
{
	int choice,x;
	int totalQuestions=10;
	
	//Question  files open  and data types
	string ques;
	ifstream inq;
	inq.open("questions.txt");
	
	//Answers files open  and data types
	string ans;
	ifstream ina;
	ina.open("Ans.txt");
	
	kbc obj;
	obj.displayfirst();
	for(int i=1;i<=totalQuestions;i++)
	{
		cout<<endl<<"Question number "<<i<<" raha apke screen pe yeh raha :"<<endl<<endl;
		obj.questionfunc(ques,inq);
		cout<<endl<<"bateye kaun ka sahi jawab enme se "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<endl<<"Apne choose kiya Option :A"<<endl;
			break;
			case 2:cout<<endl<<"Apne choose kiya Option :B"<<endl;
			break;
			case 3:cout<<endl<<"Apne choose kiya Option :C"<<endl;
			break;
			case 4:cout<<endl<<"Apne choose kiya Option :D"<<endl;
			break;
			default:cout<<endl<<"Galat option choose kiya "<<endl;
		}
		cout<<"Sahi Utter hai :";
		obj.answerfunc(ans,ina);
		cout<<"===================================="<<endl;
	}
	cout<<"+=======THANKS FOR PLAYING============="<<endl;
}
