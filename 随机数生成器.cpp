#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int a;
	//srand(time(0));
	a=rand()%(100-2+1)+2;
	cout<<a;
}
