#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<vector>
#include<cctype>
#include<fstream>
using namespace std;
void upper(string x){
for(int i=0;i<x.size();i++){
    x[i]=toupper(x[i]);
    }
}

//bool menu(string x, vector<string> infor,vector<double> sm ){
  //  while(x != "stop"){
   //     getline(cin,x);


  //  }

int main(){
    vector<float> SM;
    vector<string> infor;
   float sm,sum=0,in;
    char format[]="%[^:]: %f";
    char binfr[999];
    string Allinf;
    cout << "input your saving :  ";
    getline(cin,Allinf);
    for(int i=0;i<Allinf.size();i++){
    Allinf[i]=toupper(Allinf[i]);
    }
   // upper(Allinf);
   // cout<<Allinf;
    while(Allinf !="STOP"){
    sscanf(Allinf.c_str(),format,binfr,&sm);
    
    infor.push_back(binfr);
    SM.push_back(sm);
    cout << "input your saving :  ";
    getline(cin,Allinf);
    }
    
    for(int i=0;i<SM.size();i++){
    	sum=sum+SM[i];
	}
	 cout <<"Your all money: " <<sum<<endl;
	 
cout << " Do you want more option";
string morop;
cin >> morop;
for(int i=0;i<morop.size();i++){
    morop[i]=toupper(morop[i]);
    }
    
    while(morop!="NO"){
	}
if(morop=="YES"){
cout << "What your option: Please Select number";
string opt;
cin >>opt ;
cout << " in put yor bank's interest : ";
cin >> in ;
cout << "your all money in bank is : "<<sum*(100.00+in)/100.00<<endl;
cout << " Do you want more option";
cin >> morop;
}
cout <<"Are you Loan Bank's money : "<<endl;

    return 0;








    
}