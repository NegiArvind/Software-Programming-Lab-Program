#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
   int count=0,commentCount=0,countOpenBraces=0;
   string filename,line;
   cout<<"Enter filename\n";
   cin>>filename;
   ifstream file("input.txt");
   while(getline(file,line))
   {
     cout<<line<<"\n";
       for(int i=0;i<line.size();i++)
       {
          if(line[i]!=' ')
          {
		  if(line[i]=='{')
		  countOpenBraces++;
		  else if(line[i]=='/' && line[i+1]=='/')
		  commentCount++;
		  else
		  count++;
		  break;
          }
       }
     //cout<<count<<"\n";
   }
   cout<<"Number of open curly braces ="<<countOpenBraces<<"\n";
   cout<<"Number of lines commented ="<<commentCount<<"\n";
   cout<<"Number of lines un commented ="<<count<<"\n";
   cout<<"total Number of lines ="<<2*countOpenBraces+commentCount+count<<"\n";
}

