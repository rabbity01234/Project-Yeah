#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> x;
vector<string> y;
vector<int> p;
vector<int> c;
vector<float> in;
vector<float> ou;

int main()
{
	int i=0,j=0,N,M;
	float a,b;
	string s,t;
	int tax;
	
	char name[999];
	char format[]="%s %f %d";
	
	ofstream inc("income.txt");
	ofstream ot("outcome.txt");
	
	cout<<"Input your income"<<endl<<endl;
	while(s!="0")
		{
			cout<<"Income "<<"["<<i+1<<"] : ";
			getline(cin,s);
			sscanf(s.c_str(),format,&name,&a,&tax);
			
			x.push_back(name);
			in.push_back(a);
			p.push_back(tax);
			i++; 
		}
		N=i;
		
		cout<<endl;
		
		for(int i=0;i<N-1;i++)
		{
			cout<<x[i]<<" : "<<in[i]<<endl;
			inc<<x[i]<<" : "<<in[i]<<endl;
		}
		inc.close();
		
		cout<<endl;
		
		cout<<"Input your outcome"<<endl;
	
		while(t!="0")
		{
			cout<<"Outcome "<<"["<<j+1<<"] : ";
			getline(cin,t);
			
			sscanf(t.c_str(),format,&name,&b,&tax);
			
			y.push_back(name);
			ou.push_back(b);
			c.push_back(tax);
			j++; 
		}
		M=j;
		
		cout<<endl;
		
		for(int j=0;j<M-1;j++)
		{
			cout<<y[j]<<" : "<<ou[j]<<endl;
			ot<<y[j]<<" : "<<ou[j]<<endl;
		}
		ot.close();
		
		cout<<endl;
		
		int k;
		int sum1=0,sum2=0;
		
		cout<<"Use Tax Calculation?"<<endl<<"1 : Yes"<<endl<<"2 : No"<<endl;
		cout<<"Your Choice : ";
		cin>>k;
		if(k==1)
		{
			int vat;
			cout<<"Which tax type do you want to use"<<endl; 
			cout<<"1 : Vat 7%"<<"  "<<"Others : Coming Soon!!"<<endl;
			cin>>vat;
			if(vat==1)
			{
				for(int i=0;i<N-1;i++)
				{
					sum1=sum1+in[i];
				}
				for(int j=0;j<M-1;j++)
        		{
            		if(c[j]==1)
            		{
                		ou[j]=(ou[j])*(0.93);
            			sum2=sum2+ou[j];
            			continue;
					}
            		sum2=sum2+ou[j];
       			}
       			cout<<"Total income = "<<sum1<<endl;
				cout<<"Total outcome = "<<sum2<<endl;
				if(sum2>sum1) cout<<"Difference = "<<-(sum1-sum2)<<endl;
				else if(sum2<sum1) cout<<"Difference = "<<sum1-sum2<<endl;
			}
		}
		else if(k==2)
		{
			for(int i=0;i<N-1;i++)
			{
				sum1=sum1+in[i];
				sum2=sum2+ou[i];
			}
			cout<<"Total income = "<<sum1<<endl;
			cout<<"Total outcome = "<<sum2<<endl;
			if(sum2>sum1) cout<<"Difference = "<<-(sum1-sum2)<<endl;
			else if(sum2<sum1) cout<<"Difference = "<<sum1-sum2<<endl;
		}
	
    return 0;
}
