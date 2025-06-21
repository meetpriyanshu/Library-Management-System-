#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Library
{
public:
    int  id;
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
        cout << " Enter 1 to input details like id, name , author, price ,pages " << endl;
        cout << " Enter 2 to display details " << endl;
        cout << " Enter 3 to quit ";
        cin >> input;
        switch (input)
        {
        case 1:
        start:
            cout << "Enter book id " << endl;
            cin >> lib[count].id;
             cin.ignore(); 
            cout << " Enter Book name " << endl;
          //  cin >> lib[count].name;//
          cin.getline(lib[count].name, 100,'$');

            cout << "Enter Book Author" << endl;
            // cin >> lib[count].author;
            cin.getline(lib[count].author, 100, '$');   
            cout << " Enter student name " << endl;
            // cin >> lib[count].student;
            cin.getline(lib[count].student,100,'$');
            cout << "Enter Book price" << endl;
            cin >> lib[count].price;
            cout << "Enter Book pages " << endl;
            cin >> lib[count].pages;
            count++;
            break;
        case 2:
            for (int i = 0; i < count; i++)
            {
                cout << " Book id :" << lib[i].id << endl;
                cout << " Book Name :" << lib[i].name << endl;
                cout << " Book  author :" << lib[i].author << endl;
                cout << " student's name :" << lib[i].student << endl;
                cout << " Book's price :" << lib[i].price << endl;
                cout << " total number of  pages  :" << lib[i].pages << endl;
               exit(0); 
            }
            break;
        case 3:
            exit(0);
            break;

        default:
            cout << " You have entered the invalid key ";
            // goto start;
        }
    }
}