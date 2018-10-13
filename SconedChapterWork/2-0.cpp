#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;
int main()
{
	const int pad{2};
	const int rows{ pad*2 + 3};
	cout << "Please enter your first name :";
	string name;
	cin >> name;
	const string greeting="Hello, "+ name + "!";
	int r = 0;
	while(r != rows){
		string::size_type cols{greeting.size()+pad*2+2};
		string::size_type c{0};
		cout << endl;
		while (c != cols) {
			if(r==0||r==rows-1||c==0||c==cols-1) {
				cout<<"*";
				c++;
			}	
			else
			{
				if(r==pad+1&&c==pad+1)
				{
					cout<<greeting;
					c += greeting.size();
				}		
				else
				{
					cout<<" ";
					c++;
				}	
			}
		}
		r++;
	}
	cout<<endl;
	return 0;
}
