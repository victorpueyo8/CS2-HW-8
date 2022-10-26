#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	string fileName;
	string word;
	fstream file;

	
	cout << "Enter the name of the file: Ex. (Name.txt): "; //File name "Myfile.txt"
	cin >> fileName;

	try
	{
		if (fileName == "Myfile.txt")
		{
			file.open(fileName, ios::in);
		}
		else
			throw string("Invalid File name.");
	}
	catch (string msgName)
	{
		cout << "ERROR: " << msgName;
	}

	try
	{
		if (file)
		{
			while (file)
			{
				cout << word;
				getline(file, word);
			}
			cout << endl;
			file.close();
		}
		else
			throw string("File could not open.");
	}
	catch (string msgFile)
	{
		cout << "ERROR: " << msgFile << endl;
	}

	system("pause");
	return 0;
}