#include<iostream.h>
#include<conio.h>
int p;
class Student{
	int rollno;
	double mobtained,total_marks;
	public:
	void setdata()
	{
		cout<<"Enter the rollno of Student."<<endl;
		cin>>rollno;
		cout<<"Enter the marks obtained by student."<<endl;
		cin>>mobtained;
		cuot<<"Enter the total marks."<<endl;
		cin>>total_marks;
	}
	void percentage()
	{
		p=((mobtained*100)/total_marks);
	}
	void getdata()
	{
		cout<<"The rollno of stuent is:"<<rollno<<endl;
		cout<<"The marks obtained by student is:"<<mobtained<<endl;
		cout<<"The total marks is:"<<total_marks<<endl;
		cout<<"The percentage obtained by student is:"<<p<<endl;
	}
};
void main()
{
	clrscr();
	Student S1;
	S1.setdata();
	S1.percentage();
	S1.getdata();
	getch();
}
