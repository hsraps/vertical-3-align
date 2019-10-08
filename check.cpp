#include <bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
int flag=0;
using namespace std;
class verticalStack
{
public:

	int top;
	char a[6];
	verticalStack()
	{
		a[0]=a[1]=a[2]=a[3]=a[4]=a[5]={' '};
		top=-1;
	}
	void pop()
	{
		a[top--]=' ';
	}
	void push(char c)
	{
		top++;
		if(top<=5)
			a[top]=c;
		else
			flag=-1;
	}
	bool checkAndDelete()
	{
		char temp_top=top;
		char x=a[temp_top--];
		//getchar();
		if(x==a[temp_top--])
		{
			if(x==a[temp_top])
			{
				pop();
				pop();
				pop();
				return true;
			}
			else
				return false;
		}
		else
			return false;
	}
};


void layout(char c, int score, verticalStack* s1, verticalStack* s2, verticalStack* s3, verticalStack* s4);
int main()
{
w:
    flag=0;
    verticalStack *s1=new verticalStack();
	verticalStack *s2=new verticalStack();
	verticalStack *s3=new verticalStack();
	verticalStack *s4=new verticalStack();
    int r, game;
	int ip;
	time_t t;
    srand((unsigned) time(&t));
    int score=0;
	while(1)
	{
	    system("cls");
		r=35+(rand()%8);
		char b=r;
		layout(b,score,s1,s2,s3,s4);
		cout<<endl<<"----------------------------------------------------------------------->>>>>  Enter Stack number: ";
		cin>>ip;
		if(ip==1)
		{
			s1->push(b);
			if(flag==-1)break;
			if(s1->checkAndDelete())
				score+=15;
		}
		else if(ip==2)
		{
			s2->push(b);
			if(flag==-1)break;
			if(s2->checkAndDelete())
				score+=15;
		}
		else if(ip==3)
		{
			s3->push(b);
			if(flag==-1)break;
			if(s3->checkAndDelete())
				score+=15;
		}
		else if(ip==4)
		{
			s4->push(b);
			if(flag==-1)break;
			if(s4->checkAndDelete())
				score+=15;
		}
	}
	system("cls");
	cout<<"GAME OVER!!! XoX, your Score is: "<<score<<" \nTo play again press 1 or 0 to exit--->> ";
	cin>>game;
	if(game==1)
		goto w;
	return 0;

}
void layout(char c, int score, verticalStack* s1, verticalStack* s2, verticalStack* s3, verticalStack* s4)
{
	cout<<"    _________________________________________________________\n";
	cout<<"    |    _______       _______       _______       _______  |\n";
	cout<<"    |                                                       |\n";
	cout<<"    |      "<<s1->a[5]<<"             "<<s2->a[5]<<"             "<<s3->a[5]<<"             "<<s4->a[5]<<"      |\n";
	cout<<"    |                                                       |\n";
	cout<<"    |    _______       _______       _______       _______  |                          _________\n";
	cout<<"    |                                                       |                         |         |\n";
	cout<<"    |      "<<s1->a[4]<<"             "<<s2->a[4]<<"             "<<s3->a[4]<<"             "<<s4->a[4]<<"      |                         |         |\n";
	cout<<"    |                                                       |                         |    "<<c<<"    |\n";
	cout<<"    |    _______       _______       _______       _______  |                         |         |\n";
	cout<<"    |                                                       |                         |_________|\n";
	cout<<"    |      "<<s1->a[3]<<"             "<<s2->a[3]<<"             "<<s3->a[3]<<"             "<<s4->a[3]<<"      |\n";
	cout<<"    |                                                       |\n";
	cout<<"    |    _______       _______       _______       _______  |                       >> SCORE = "<<score<<" <<"<<endl;
	cout<<"    |                                                       |\n";
	cout<<"    |      "<<s1->a[2]<<"             "<<s2->a[2]<<"             "<<s3->a[2]<<"             "<<s4->a[2]<<"      |\n";
	cout<<"    |                                                       |\n";
	cout<<"    |    _______       _______       _______       _______  |\n";
	cout<<"    |                                                       |\n";
	cout<<"    |      "<<s1->a[1]<<"             "<<s2->a[1]<<"             "<<s3->a[1]<<"             "<<s4->a[1]<<"      |\n";
	cout<<"    |                                                       |\n";
	cout<<"    |    _______       _______       _______       _______  |\n";
	cout<<"    |                                                       |\n";
	cout<<"    |      "<<s1->a[0]<<"             "<<s2->a[0]<<"             "<<s3->a[0]<<"             "<<s4->a[0]<<"      |\n";
	cout<<"    |                                                       |\n";
	cout<<"    |___________|_____________|_____________|_______________|\n";
	cout<<"          1             2            3              4        \n";

}
