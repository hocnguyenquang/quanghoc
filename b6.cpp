#include<iostream.h>
#include<fstream.h>
int ktrasnt( int a)
{
	int dem=0;
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
		dem++;
	}
	if(dem==1)
	return 0;
}
void sapxep(int a[], int n)
{
	int tg;
	for (int i = 0; i < n; i ++ )
		for (int j = 0; j < i; j++)
			{
				if (a[i]>a[j])
					{
					tg = a[i];
					a[i] = a[j];
					a[j] = tg;
					}
			}
}
main()
{
	int n,dem=0;
	int a[100];
	fstream in("inb6.txt",ios::in);
	   if(in.fail())
	    {
		  cout<<" Loi mo file! "<<endl;
		  return -1;
	    }
    fstream out("outb6.txt",ios::out);
	   if(out.fail())
	   {
	   	 cout<<" Loi mo file! "<<endl;
	   	 return -1;
	   }
    in>>n;
    cout<<" \n So phan tu cua mang: "<<n;
    for(int i=0;i<n;i++)
    {
    	cout<<"\n a["<<i+1<<"]=";
    	in>>a[i];
    	cout<<a[i]<<" ";
    	if(ktrasnt(a[i])==0)
    	  dem++;
    }
    out<<" SO SNT TRONG MANG LA: "<<dem;
    sapxep(a, n);
    out << "\n Mang sau khi sap xep la : ";
	for (int i = 0;i<n;i++)
		{
		  out << a[i] << " ";
		}
    in.close();
    out.close();
    return 0;
    
	
}
