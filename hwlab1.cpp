#include<iostream>

using namespace std;

int main()
{
	int i;
	cin>>i;

	while(1)
	{
		if(i==1)
		{
			cout<<i<<' ';
			break;
		}

		if(i%2==0)
		{
			cout<<i<<' ';
			i=i/2;
		}

		else if(i%2==1)
		{
			cout<<i<<' ';
			i=3*i+1;
		}

	}

    system("pause");
	return 0;
}
:wq

