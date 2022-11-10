#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>
#include <stdio.h>

using namespace std;

int recommend()
{
	string fname;
	//vector<vector<string> > content;
	vector<string> row;
	string line, word;

	fstream file;
	file.open("library.csv", ios::in);
	if (file.is_open())
	{
		while (getline(file, line))
		{
			row.clear();
			stringstream str(line);
			while (getline(str, word, ','))
				row.push_back(word);
			//content.push_back(row);
		}
	}
	else
	{
		cout << "Could not open the file\n";
	}

	string g, p, t, c, o;
	char ge, pe, te, ce, oe;
	cout << "What type of book are you looking for?" << endl;
	cout << "A)Action , B)Comedy , C)Drama , D)Romance" << endl;
	cout << "Enter genre: ";
	cin >> ge;

	if (ge == 'A' || ge == 'a')
	{
		g = "action";
	}
	else if (ge == 'B' || ge == 'b')
	{
		g = "comedy";
	}
	else if (ge == 'C' || ge == 'c')
	{
		g = "drama";
	}
	else if (ge == 'D' || ge == 'd')
	{
		g = "romance";
	}
	else
	{
		cerr << "Invalid Selection" << endl;
		return 0;
	}

	cout << "Do you preffer A) Male or B) Female protagonist?" << endl;
	cout << "Enter protagonist: ";
	cin >> pe;
	if (pe == 'A' || pe == 'a')
	{
		p = "male";
	}
	else if (pe == 'B' || pe == 'b')
	{
		p = "female";
	}
	else
	{
		cerr << "Invalid Selection" << endl;
		return 0;
	}

	cout << "What time frame would you like A) Past or B) Present?" << endl;
	cout << "Enter theme: ";
	cin >> te;
	if (te == 'A' || te == 'a')
	{
		t = "past";
	}
	else if (te == 'B' || te == 'b')
	{
		t = "present";
	}
	else
	{
		cerr << "Invalid Selection" << endl;
		return 0;
	}

	if (g == "Action" || g == "action")
	{
		cout << "What type of action would you like? \n A) Adventure, B) Spy, C) Intrigue" << endl;
		cout << "Enter category: ";
		cin >> ce;
		if (ce == 'A' || ce == 'a')
		{
			c = "adventure";
		}
		else if (ce == 'B' || ce == 'b')
		{
			c = "spy";
		}
		else if (ce == 'C' || ce == 'c')
		{
			c = "intrigue";
		}
		else
		{
			cerr << "Invalid Selection" << endl;
			return 0;
		}
	}
	else if (g == "Drama" || g == "drama")
	{
		cout << "What type of drama would you like? \n A) Comedy, B) Tragedy, C) Melodrama" << endl;
		cout << "Enter category: ";
		cin >> ce;
		if (ce == 'A' || ce == 'a')
		{
			c = "comedy";
		}
		else if (ce == 'B' || ce == 'b')
		{
			c = "tragedy";
		}
		else if (ce == 'C' || ce == 'c')
		{
			c = "melodrama";
		}
		else
		{
			cerr << "Invalid Selection" << endl;
			return 0;
		}
	}
	else if (g == "Comedy" || g == "comedy")
	{
		cout << "What type of comedy would you like? \n Dark-Comedy, Satirical, Romance-Comedy" << endl;
		cout << "Enter category: ";
		cin >> ce;
		if (ce == 'A' || ce == 'a')
		{
			c = "Dark-Comedy";
		}
		else if (ce == 'B' || ce == 'b')
		{
			c = "Satirical";
		}
		else if (ce == 'C' || ce == 'c')
		{
			c = "Romance-Comedy";
		}
		else
		{
			cerr << "Invalid Selection" << endl;
			return 0;
		}
	}
	else if (g == "Romance" || g == "romance")
	{
		cout << "What type of romance would you like? \n A) Love Triangle, B) No Love Triangle" << endl;
		cout << "Enter category: ";
		cin >> ce;
		if (ce == 'A' || ce == 'a')
		{
			c = "Love Triangle";
		}
		else if (ce == 'B' || ce == 'b')
		{
			c = "No Love Triangle";
		}
		else
		{
			cerr << "Invalid Selection" << endl;
			return 0;
		}
	}



	cout << "Would you like a A) Single or B) Multiple pov(point of view) book?" << endl;
	cout << "Enter Pov: ";
	cin >> oe;
	if (oe == 'A' || oe == 'a')
	{
		o = "one";
	}
	else if (oe == 'B' || oe == 'b')
	{
		o = "multiple";
	}
	else
	{
		cerr << "Invalid Selection" << endl;
		return 0;
	}

	int count = 0;


	for (int i = 0;i < row.size();i += 8)
	{
		if (row[i + 3] == g && row[i + 4] == p && row[i + 5] == t && row[i + 6] == c && row[i + 7] == o)
		{
			cout << row[i] << " ";
			count = 1;
			cout << endl;
		}

	}

	if (count == 0)
	{
		cout << "No record found: ";
	}

	file.close();
	return 0;
}