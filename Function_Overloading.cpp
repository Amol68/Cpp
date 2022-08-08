#include<iostream>
using namespace std;

int area(int);
int area(int,int);
float area(float);

int area(int side)
{
	int a=side*side;
	return a;
}

int area(int length,int breadth)
{
	int a=length*breadth;
	return a;
}

float area(float radius)
{
  float a=3.14*radius*radius;
  return a;
}

int main()
{
	int a=area(2);
	cout<<"Area Of Square: "<<a<<endl;
	
	int b=area(3,4);
	cout<<"Area Of Rectangle: "<<b<<endl;
	
	float c=area((float)(3.6));
	cout<<"Circle Area:"<<c;
	
	
}
