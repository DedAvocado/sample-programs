//Transpose of a matrix
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int a[3][3],t;
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<"\n Enter values";
		cin>>a[i][j];
	}

}
for(int k=0;k<3;k++)
{         for(int e=0;e<=k;e++) {if(e==k)cout<<" ";else cout<<" "<<a[k][e];}
	for(int l=k;l<3;l++)
	{
		t=a[k][l];
		a[k][l]=a[l][k];
		a[l][k]=t;
	cout<<a[k][l]<<" ";
	}     cout<<'\n';
}
return 0;
}