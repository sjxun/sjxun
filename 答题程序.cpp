#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int j1,j2,uans,ans,fen=0;
	for(int i=1;i<=10;i++)
	{
		srand(time(0));
		do
		{
			j1=rand()%100+1;
			j2=rand()%100+1;
		}while(j1+j2>100);
		cout<<j1<<"+"<<j2<<"=";
		ans=j1+j2;
		cin>>uans;
		if(uans==ans)
		   {
		      cout<<"����ˣ��������"<<endl;
		      fen++;
		   }
		 else
		 {
		 	cout<<"��ѽ������ˣ���һ������˼��Ŷ"<<endl; 
		   }  
	}
	cout<<"��ĵ÷��ǣ�"<<fen<<endl; 
}
