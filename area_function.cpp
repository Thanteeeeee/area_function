#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void displaymenu();
float Area(float r);
float Area(float l,float w);
float Area(double b,double h);
float Area(float w1,float w2,float h);
int main()
{
	char choice ;
	bool flag = true ;
	do
	{
		displaymenu() ;
		cin >> choice ;
		if(choice == '1')
		{
			float r ;
			cout << "\nEnter radius : ";
			cin >> r ;
			cout << "Area of Circle = " << fixed;
			cout << setprecision(2) << Area(r) << endl;
		}
		else if(choice == '2')
		{
			float l,w;
			cout << "Enter length and width : ";
			cin >> l >> w;
			cout << "Area of Rectangle = " << fixed;
			cout << setprecision(2) << Area(l,w);
			cout << endl;
		}
		else if(choice == '3')
		{
			double b,h;
			cout << "Enter base and hight : ";
			cin >> b >> h;
			cout << "Area of Triangle = " << fixed;
			cout << setprecision(2) << Area(b,h);
			cout << endl;
		}
		else if(choice == '4')
		{
			float w1,w2,h;
			cout << "Enter upper base and lower base : ";
			cin  >> w1 >> w2;
			cout << "Enter hight :" ;
			cin  >> h ;
			cout << "Area of Trapezoid = " << fixed;
			cout << setprecision(2) << Area(w1,w2,h);
			cout << endl;
		}
		else if (choice == '5')
		{
			flag = false ;
		}
		else 
		{
		cout << "\nYou choose out of range is ";
		cout << "not process.\n";
		}
	}while (flag);
	cout << "\n . . . Exit Program . . .\n";
	system("pause") ;
	return(0);

}
float Area(float r)
{
	return(3.14159F * r * r);
}
float Area(float l, float w)
{
	return(l * w);
}
float Area(double b,double h)
{
	return(b * h * 0.5);
}
float Area(float w1, float w2,float h)
{
	return((w1+w2) * h * 0.5);
}
void displaymenu()
{
	cout << endl;
	cout << " Program Calculate Area " << endl;
	cout << " 1. Clrcle" << endl;
	cout << " 2. Rectangle" << endl;
	cout << " 3. Triangle" << endl;
	cout << " 4. Trapezoid" << endl;
	cout << " 5. Exit" << endl;
	cout << "Enter your choose number: ";
}
	