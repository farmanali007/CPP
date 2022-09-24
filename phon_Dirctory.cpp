#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class phoneDirectory
{
private:
    char Name[20];
    int SerialNumber;
    char MobileNumber[20];

public:
    phoneDirectory()
    {
        int SerialNumber = 0;
        strcpy(MobileNumber, "No NUmber ");
        strcpy(Name, "no name");
    }
    void getData()
    {
        cout << "Serial Number";
       
        cin >> SerialNumber;
        cout << "Enter  Name " << endl;
        cin.ignore();
        cin.getline(Name, 19);
        cout << "Enter Mobile Number " << endl;
        cin.getline(MobileNumber, 15);
    }
    void ShowData()
    {
        char q[] = "\t\t\t\t";
        char h[] = "\t\t";
        //cout<<"NAME"<<P<<"MOBILE NUMBER"<<endl;
        cout << SerialNumber;
        cout << q << Name;
        cout << h << MobileNumber << endl;
    }
    int storeData();
    void viewData();
    void searchData(char *);
    void DeleteData(char *);
    void UpdateData(char *);
};

void phoneDirectory::searchData(char *t)
{
    fstream fin;
    int counter = 0;
    fin.open("phoneBook.txt", ios::in | ios::binary);
    if (!fin)
        cout << "\n File is empty";
    else
    {
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            if (!strcmp(t, Name))
            {
                char P[] = "\t\t\t";
                cout << "Serial No." << P << "NAME" << P << "MOBILE NUMBER\n";
                ShowData();
                counter++;
            }
            fin.read((char *)this, sizeof(*this));

            if (counter == 0)
            {
                cout << "No record is found!";
            }
            fin.close();
        }
    }
}
    void phoneDirectory::DeleteData(char *t)
    {
        fstream fin;
        fstream fout;
        fin.open("phoneBook.txt", ios::in | ios::binary);
        if (!fin)
        {
            cout << "no such file found! ";
        }
        else
        {
            fout.open("tempfile.txt", ios::out | ios::binary);
            fin.read((char *)this, sizeof(*this));
            while (!fin.eof())
            {
                if (strcmp(t, Name))
                    fout.write((char *)this, sizeof(*this));
                fin.read((char *)this, sizeof(*this));
            }
            fout.close();
            fin.close();
            remove("phoneBook.txt");
            rename("tempfile.txt", "phoneBook.txt");
            cout << "deletion complete ";
        }
    }
    void phoneDirectory::viewData()
    {
        fstream fin;
        fin.open("phoneBook.txt", ios::in | ios::binary);
        fin.read((char *)this, sizeof(*this));
        if (!fin)
        {
            cout << "NO such file is found\n";
        }
        char P[] = "\t\t\t";
        cout << "Serial No." << P << "NAME" << P << "MOBILE NUMBER\n";
        while (!fin.eof())
        {
            cout << "=======================================================================\n";
            ShowData();
            fin.read((char *)this, sizeof(*this));
        }
        cout << "======================================================================\n";
        fin.close();
    }

    int phoneDirectory::storeData()
    {
        if (MobileNumber == 0 && SerialNumber == 0)
        {
            cout << "\n No initialization" << endl;
            return 0;
        }
        fstream fout;
        fout.open("phoneBook.txt", ios::app | ios::binary);
        fout.write((char *)this, sizeof(*this));
        fout.close();
        cout << "contact save sucessfully";
        return 0;
    }
    void fun1();
    void fun1()
    {
        cout << "\n\n\n\n\n\n\t\t\t\t\t";
    }
    void getch();
    void getch()
    {
        char a[1];
        cout << "\n\nPRESS ANY KEY ";
        cin >> a;
    }
    char z[] = "\n\n\t\t\t\t\t\t";
    int main()
    {
        while (1)
        {
            system("clear");
            char name[20];
            char MobileNumbehttps://www.google.com/chrome/?&brand=CHWL&utm_campaign=en&utm_sou-bubble&utm_medium=etr[20];
            int choice;
            phoneDirectory u1;
            fun1();
            cout << "=====================================\n";
            cout << "\t\t\t\t\t  ****WELLCOME TO PHONE BOOK****\n";
            cout << "\t\t\t\t\t=====================================\n";
            cout << z << "1.ADD A NUMBER";
            cout << z << "2.VIEW ALL NUMBERS";
            cout << z << "3.SEARCH A NUMBER";
            cout << z << "4.DELETE A NUMBER";
            cout << z << "5.EXIT";
            cout << z << "Enter Your choice ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                u1.getData();
                u1.storeData();
                break;
            case 2:
                u1.viewData();
                break;
            case 3:
                cout << "Enter Name: ";
                cin.ignore();
                cin.getline(name, 19);
                u1.searchData(name);
                break;
            case 4:
                cout << "Enter Name";
                cin.ignore();
                cin.getline(name, 19);
                u1.DeleteData(name);
                break;
            case 5:
                cout << "THANKS FOR USING PHONE BOOK " << z;
                exit(1);

            default:
                cout << "Invalid choice ";
                break;
            }
            getch();
        }
        return 0;
    }