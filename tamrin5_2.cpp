#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter N:";
	cin>>n;
	cout<<"enter M:";
	cin>>m;
	for(int i=1;i<=n;i++){
		cout<<"\n";
		for (int j=1;j<=m;j++){
			cout<<i*j<<setw(4);
		}
	}
}