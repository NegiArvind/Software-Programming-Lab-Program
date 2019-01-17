#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
   int count=0;
   string filename,line;
   cout<<"Enter filename\n";
   cin>>filename;
   ifstream file("input.txt");
   while(getline(file,line))
   {
     cout<<line<<"\n";
     count++;
     cout<<count<<"\n";
   }
   cout<<"Number of lines ="<<count<<"\n";
}

