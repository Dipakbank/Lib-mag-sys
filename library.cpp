// This is the program for library management system

// scope for improvement

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Library
{
public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};

int main()
{
    Library lib[20];
    int input = 0;
    int count = 0;

    while (input != 3)
    {
    start:
        cout << "Enter 1 to input detals like id, name, author, student, price, pages " << endl;
        cout << "Enter 2 to desplay details " << endl;
        cout << "Enter 3 to quit" << endl;

        cin >> input;

        switch (input)
        {

        case 1:
            cout << "---------------------------------------------------" << endl;

            cout << "Enter Book id " << endl;
            cin >> lib[count].id;
            cout << "Enter Book Name " << endl;
            // cin >> lib[count].name;     // Will cause issue.
            cin.getline(lib[count].name , 100,'$');
            cout << "Enter Book Author " << endl;
            // cin >> lib[count].author;   // Will cause issue.
            cin.getline(lib[count].author , 100 , '$');
            cout << "Enter Book demanding student name " << endl;
            // cin >> lib[count].student; //  Will cause issue.
            cin.getline(lib[count].student , 100 , '$');
            cout << "Enter Book Pages " << endl;
            cin >> lib[count].pages;
            count++;
            cout << "---------------------------------------------------" << endl;

            break;
        case 2:
            cout << "---------------------------------------------------" << endl;
            for (int i = 0; i < count; i++)
            {
                cout << "Book id is " << lib[i].id << endl;
                cout << "Book Name is " << lib[i].name << endl;
                cout << "Book Author is " << lib[i].author << endl;
                cout << "Book demanding student name " << lib[i].student << endl;
                cout << "Book Pages are " << lib[i].pages << endl;
                cout << "---------------------------------------------------" << endl;
            }

            break;

        case 3:
            exit(0);
            break;

        default:
            cout << "You have entered the wrong value, please type again " << endl;
            goto start;
            break;
        }
    }

    // cout<<"Hello World";
    //     return 0;
}