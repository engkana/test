#include<stdio.h>
#include<iostream>

int main(){
	float x=1.;
	float y=1.;
	std::cin >> x >> y;
	std::cout << (0.15*x-100.0) << ":" << (-0.3*y+100.0) << std::endl;
	return 0;
}
