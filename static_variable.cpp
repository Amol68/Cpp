#include<iostream>
using namespace std;

class player
{
  public:
  string name;
  string club;
  string position;
  int appr;
  int goals;
  static int count;
  
  player (string name, string club, string position, int appr, int goals)
  {
      count++;
  	this->name=name;
  	this->club=club;
  	this->position=position;
  	this->appr=appr;
  	this->goals=goals;
  }
  
  	void display();
};

void player :: display()
{
    cout<<"This is Player No "<<count<<endl; //count variable displayed
  	cout<<"Player: "<<name<<endl;
  	cout<<"Club: "<<club<<endl;
  	cout<<"Position: "<<position<<endl;
  	cout<<"Appearances: "<<appr<<endl;
  	cout<<"Goals: "<<goals<<endl<<endl;
}

int player ::  count; //default value is 0
  

int main()
{
	player p1("Haaland", "Borussia Dortmund", "Striker", 32, 33);
	p1.display();
	
	player p2("Xavi", "PSV", "AMF", 3, 2);
	p2.display();

	player p3("Davies", "Bayern", "LB", 5, 12);
	p3.display();
	
}
