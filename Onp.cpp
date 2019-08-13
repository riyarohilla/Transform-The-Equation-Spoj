#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	char a;
	cin>>t;
	while(t--)
	{
		string s,str=" ";
		cin>>s;
		vector<char> op;
		for(int i=0;i<s.length();i++)
		{
			char c=s[i];
			if(c=='(' || c=='+' || c=='*' || c=='-' ||c=='/' || c=='^')
			op.push_back(c);
			
			else if(c>='a' && c<='z' || c>='A' && c<='Z')
			
			str+=c;
			if(c==')')
			{
				do
				{
					a=op.back();
					op.pop_back();
					str+=a;
					a=op.back();
					
				}while(a!='(');
				op.pop_back();
			}
		}
		cout<<str<<endl;
	}
}
