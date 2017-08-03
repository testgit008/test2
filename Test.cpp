#include <iostream>

using namespace std;

int main(int argc,char* argv[])
{
	cout<<"argc:"<<argc<<endl;
	for(int i=0;i<argc;i++)
	{
		cout<<argv[i]<<endl;
	}

	//动态分配二维数组
	double *p1=(double*)malloc(2*2*sizeof(double));
	double (*p)[2]=(double(*)[2])p1;
	if(p==NULL)
		cout<<"malloc error!"<<endl;

	p[0][0]=1.1;
	p[0][1]=2.1;
	p[1][0]=0.8;
	p[1][1]=0.9;

	cout<<p<<endl;
	cout<<sizeof(double)<<endl;
	for(int j=0;j<2;j++)
		for(int k=0;k<2;k++)
			cout<<p[j][k]<<" "<<&(p[j][k])<<endl;

 

	return 0;
}