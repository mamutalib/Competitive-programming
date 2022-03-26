#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int t,sz,i,odd;
	cin>>t;
	while(t--)
	{
		cin>>s;
		odd=0;
		int ev=0;
		sz=s.size();
		int ck=sz/2;
		if(sz%2!=0)
			cout<<"NO"<<endl;
		else
		{
			for(i=0;i<sz;i+=2)
			{
				if(s[i]=='(' || s[i]=='?')
					odd++;
			}
			for(i=1;i<sz;i+=2)
			{
				if(s[i]==')' || s[i]=='?')
					ev++;
			}
			if(odd==ck && ev==ck)
				{
					cout<<"YES"<<endl;
				}
			else
				{
					odd=ev=0;
					for(i=0; i<ck;i++)
					{
						if(s[i]=='(' || s[i]=='?')
							odd++;
					}
					for(i=ck; i<sz;i++)
					{
						if(s[i]==')' || s[i]=='?')
						ev++;
					}
					if(odd==ck && ev==ck)
						cout<<"YES"<<endl;
					else
						cout<<"NO"<<endl;
				}

		}
	}
	return 0;
}