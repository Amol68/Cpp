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
  
  player (string name, string club, string position, int appr, int goals)
  {
  	this->name=name;
  	this->club=club;
  	this->position=position;
  	this->appr=appr;
  	this->goals=goals;
  }
  
  void display()
  {
  	cout<<"Player: "<<name<<endl;
  	cout<<"Club: "<<club<<endl;
  	cout<<"Position: "<<position<<endl;
  	cout<<"Appearances: "<<appr<<endl;
  	cout<<"Goals: "<<goals<<endl<<endl;
  	
  	
  }
  	
};


int main()
{
	player p1("Haaland", "Borussia Dortmund", "Striker", 32, 33);
	p1.display();
	
	player p2("Camavinga", "Real Madrid", "CDM", 18, 3);
	p2.display();
	
	
}

