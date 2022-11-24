#include <iostream>
#include <string>
using namespace std;
bool Include(const string s, const string cs)
{
	bool r = true;
	for (size_t i = 0; i < cs.length(); i++)
		r = r && (s.find(cs[i]) != -1);
	return r;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('w', pos)) != -1)
		if (s[pos + 1] == 'h')
			if (s[pos + 2] == 'i')
				if (s[pos + 3] == 'l')
					if (s[pos + 4] == 'e')
			s.replace(pos, 5, "**");
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	string cs = "while";
	if (Include(str, cs))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
		return 0;
}