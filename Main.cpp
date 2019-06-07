#include "GeometricObject.h"
#include "Ball.h"
#include "Cube.h"
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a, b;
	string c1, c2;
	cin >> a >> c1 >> b >> c2;


	Ball ball(a);
	ball.setColor(c1);
	ball.setFilled(false);
	cout << ball.toString() << endl
		<< "radius: " << fixed << setprecision(1) << ball.getRadius()
		<< ",area: " << fixed<<setprecision(1)<<ball.getArea()
		<< ",volume: " << fixed << setprecision(1)<<ball.getVolume()
		<< ",color: " << ball.getColor() << endl;

	Cube cube(b);
	cube.setColor(c2);
	cube.setFilled(true);
	cout << cube.toString() << endl
		<< "length: " << fixed << setprecision(1) << cube.getLength()
		<< ",area: " << fixed << setprecision(1) << cube.getArea()
		<< ",volume: " << fixed << setprecision(1) << cube.getVolume()
		<< ",color: " << cube.getColor() << endl;

	system("pause");
	return 0;

}