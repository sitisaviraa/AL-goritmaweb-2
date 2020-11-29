#include <iostream>
using namespace std;

const int nmaks = 100;
typedef int larikint[nmaks+1];

void bacalarik(larikint l, int n);
void cetaklarik(larikint l, int n);
void pengurutan(larikint l, int n);

void bacalarik(larikint l, int n)
{
	int i;
	for(i=1; i<=n; i++)
	{
		cout<<"Masukan nilai L["<<i<<"]:";cin>>l[i];
	}
}

void cetaklarik(larikint l, int n)
{
	int i;
	for (i=1; i<=n; i++)
	{
		cout<<"L["<<i<<"] = " <<l[i]<<endl;
	}
}

void pengurutan(larikint l, int n)
{
	int i, j, imin, temp;
	for(i=1; i<=n; i++)
	{
		imin = i;
		for(j=i+1; j<=n; j++)
		if (l[j]< l [imin])
		imin =  j;
		
		temp = l[imin];
		l[imin] = l[i];
		l[i] = temp;
	}
}

int main()
{
	larikint l;
	int n;
	cout<<"Berapa jumlah data (n) = ";cin>>n;
	cout<<"Baca data: "<<endl;
	bacalarik(l,n);
	
	cout<<"Urutkan data.."<<endl;
	pengurutan(l,n);
	
	cout<<"Cetak larik terurut: "<<endl;
	cetaklarik(l,n);
	
	cin.get();
	return 0;
}
