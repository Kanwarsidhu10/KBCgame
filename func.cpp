#include"header.h"
using namespace std;

void kbc :: displayfirst()
{
	cout<<endl<<endl;
	cout<<"===================================================="<<endl;
	cout<<"===================================================="<<endl;
	cout<<"===================================================="<<endl;
	cout<<"===================="<<"    KBC    "<<"====================="<<endl;
	cout<<"===================================================="<<endl;
	cout<<"===================================================="<<endl;
	cout<<"===================================================="<<endl;
	cout<<endl<<endl;
}
void kbc :: questionfunc(string &ques,ifstream &inq)
{
	for(int i=1;i<=5;i++)
	{
		getline(inq>>ws,ques);
		cout<<ques<<endl;
	}
}
void kbc :: answerfunc(string &ans,ifstream &ina)
{
	for(int i=1;i<=1;i++)
	{
		getline(ina>>ws,ans);
		cout<<ans<<endl;
	}
}
