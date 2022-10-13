
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>
#include <stdio.h>

using namespace std;

int main()
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
	cout << "What type of book are you looking for?" << endl;
	cout << "Action , Comedy , Drama , Romance" << endl;
	cout << "Enter genre: ";
	cin >> g;

	cout << "Do you preffer male or female protagonist?" << endl;
	cout << "Enter protagonist: ";
	cin >> p;

	cout << "What time frame would you like past or present?" << endl;
	cout << "Enter theme: ";
	cin >> t;

	if (g == "Action" || g == "action")
	{
		cout << "What type of action would you like? \n Adventure, Spy, Intrigue" << endl;
		cout << "Enter category: ";
		cin >> c;
	}
	else if (g == "Drama" || g == "drama")
	{
		cout << "What type of drama would you like? \n Comedy, Tragedy, Melodrama" << endl;
		cout << "Enter category: ";
		cin >> c;
	}
	else if (g == "Comedy" || g == "comedy")
	{
		cout << "What type of comedy would you like? \n Dark-Comedy, Satirical, Romance-Comedy" << endl;
		cout << "Enter category: ";
		cin >> c;
	}
	else if (g == "Romance" || g == "romance")
	{
		cout << "What type of romance would you like? \n Love Triangle, No Love Triangle" << endl;
		cout << "Enter category: ";
		cin >> c;
	}



	cout << "Would you like a single or multiple pov(point of view) book?" << endl;
	cout << "Enter Pov: ";
	cin >> o;

	int count = 0;


	for (int i = 0;i < row.size();i+=8)
	{
		if (row[i+3]== g && row[i+4] == p && row[i+5] == t && row[i+6] == c && row[i+7] == o)
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