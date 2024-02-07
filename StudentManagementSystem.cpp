#include <iostream>
using namespace std;

// these arrays to store student details
// arr1 -> name of all students
// arr2 -> roll no, of students
// arr3 -> course taken by that student
// arr4 -> class of that student
// arr5 -> contact no. of students
string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int total = 0;

void enter()
{
    int choice;
    cout << "How many students do you want to enter: ";
    cin >> choice;

    if (total == 0)
    { // if else isliye hai ki agar ek bar value enter kiya toh usko consider krke crct student no. aane ke liye
        total += choice;
        for (int i = 0; i < choice; i++)
        {
            cout << "Enter data of Student " << (i + 1) << ": "
                 << "\n";
            cout << "Enter name: ";
            cin >> arr1[i];
            cout << "\n";
            cout << "Enter roll no: ";
            cin >> arr2[i];
            cout << "\n";
            cout << "Enter course: ";
            cin >> arr3[i];
            cout << "\n";
            cout << "Enter class: ";
            cin >> arr4[i];
            cout << "\n";
            cout << "Enter contact: ";
            cin >> arr5[i];
            cout << "\n";
        }
    }
    else
    {
        for (int i = total; i < total + choice; i++)
        {
            cout << "Enter data of Student " << (i + 1) << ": "
                 << "\n";
            cout << "Enter name: ";
            cin >> arr1[i];
            cout << "\n";
            cout << "Enter roll no: ";
            cin >> arr2[i];
            cout << "\n";
            cout << "Enter course: ";
            cin >> arr3[i];
            cout << "\n";
            cout << "Enter class: ";
            cin >> arr4[i];
            cout << "\n";
            cout << "Enter contact: ";
            cin >> arr5[i];
            cout << "\n";
        }
        total += choice;
    }
}

void show()
{
    if (total == 0)
    {
        cout << "No data is entered..."
             << "\n";
    }
    else
    {
        for (int i = 0; i < total; i++)
        {
            cout << "Data of Student " << i + 1 << ": "
                 << "\n\n";
            cout << "Name: " << arr1[i] << "\n";
            cout << "Roll No.: " << arr2[i] << "\n";
            cout << "Course: " << arr3[i] << "\n";
            cout << "Class: " << arr4[i] << "\n";
            cout << "Contact: " << arr5[i] << "\n";
        }
    }
}

void search()
{
    if (total == 0)
    {
        cout << "No data is entered..."
             << "\n";
    }
    else
    {
        string rollno;
        cout << "Enter roll no. of student which you want to search: ";
        cin >> rollno;
        for (int i = 0; i < total; i++)
        {
            if (rollno == arr2[i])
            {
                cout << "Data of Student " << i + 1 << ": "
                     << "\n\n";
                cout << "Name: " << arr1[i] << "\n";
                cout << "Roll No.: " << arr2[i] << "\n";
                cout << "Course: " << arr3[i] << "\n";
                cout << "Class: " << arr4[i] << "\n";
                cout << "Contact: " << arr5[i] << "\n";
            }
        }
    }
}

void update()
{
    if (total == 0)
    {
        cout << "No data is entered..."
             << "\n";
    }
    else
    {
        string rollno;
        cout << "Enter roll no. of student which you want to update: ";
        cin >> rollno;
        for (int i = 0; i < total; i++)
        {
            if (rollno == arr2[i])
            {
                cout << "Previous data: "
                     << "\n";
                cout << "Data of Student " << i + 1 << ": "
                     << "\n\n";
                cout << "Name: " << arr1[i] << "\n";
                cout << "Roll No.: " << arr2[i] << "\n";
                cout << "Course: " << arr3[i] << "\n";
                cout << "Class: " << arr4[i] << "\n";
                cout << "Contact: " << arr5[i] << "\n\n";
                cout << "Enter new data: "
                     << "\n\n";
                cout << "Enter Name: ";
                cin >> arr1[i];
                cout << "Enter Roll no: ";
                cin >> arr2[i];
                cout << "Enter Course: ";
                cin >> arr3[i];
                cout << "Enter Class: ";
                cin >> arr4[i];
                cout << "Enter Contact: ";
                cin >> arr5[i];
            }
        }
    }
}

void deleterecord()
{
    if (total == 0)
    {
        cout << "No data is entered..."
             << "\n";
    }
    else
    {
        int a;
        cout << "Press 1 to delete full record"
             << "\n";
        cout << "Press 2 to delete specific record"
             << "\n";
        cin >> a;
        if (a == 1)
        {
            total = 0;
            cout << "All record is deleted."
                 << "\n";
        }
        else if (a == 2)
        {
            string rollno;
            cout << "Enter roll no. which you want to delete: ";
            cin >> rollno;
            for (int i = 0; i < total; i++)
            {
                if (rollno == arr2[i])
                {
                    for (int j = i; j < total; j++)
                    { // agli wali index current wali(jise delete) krna hai use overrride krte jayegi
                        arr1[j] == arr1[j + 1];
                        arr2[j] == arr2[j + 1];
                        arr3[j] == arr3[j + 1];
                        arr4[j] == arr4[j + 1];
                        arr5[j] == arr5[j + 1];
                    }
                    total--;
                    cout << "Your required record is deleted..."
                         << "\n";
                }
            }
        }
    }
}

int main()
{
    int value;
    while (true)
    {
        cout << "Press 1 to enter data: "
             << "\n";
        cout << "Press 2 to show data: "
             << "\n";
        cout << "Press 3 to search data: "
             << "\n";
        cout << "Press 4 to update data: "
             << "\n";
        cout << "Press 5 to delete data: "
             << "\n";
        cout << "Press 6 to exit data: "
             << "\n";

        cin >> value;

        switch (value)
        {
        case 1:
            enter();
            break;
        case 2:
            show();
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            deleterecord();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "Invalid Input"
                 << "\n";
            break;
        }
    }

    return 0;
}