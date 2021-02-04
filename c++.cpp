#include<iostream>
#include<string>
using namespace std;
class person
{
	public:
		string name;
		string family;	
		void myName();
};
void person::myName()
{
	cout<< this->name +" "+family;
	}	
class student : public person
{
	public:
		string name;
		string family;
		int age;
};
class teacher : public person
{	
	public:
		string name;
		string family;
		int age;
};
int main()
{
	person personOne;
	personOne.name="ali";
	personOne.family="ahmadi";
	personOne.myName();
	return 0; 
	
}
