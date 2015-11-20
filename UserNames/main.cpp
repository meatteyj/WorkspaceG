#include <QCoreApplication>
#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

//takes file input lastname firstname and creates usernames

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
ifstream fin;
string file;
char lastname;



fin.open("C:/Users/meatteyj/Documents/WorkspaceG/UserNames/data.txt");
if (fin.fail()){
    cout << "The file could not be opened!" << endl;
    exit(1);
}
fin.get(lastname);
while (! fin.eof()){
cout << lastname;
fin.get(lastname);
}
fin.putback(lastname);

    return a.exec();
}

