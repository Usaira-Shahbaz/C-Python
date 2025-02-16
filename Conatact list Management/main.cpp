#include <iostream>
#include <cstdlib>
using namespace std;

int index = 0;

void add(string name[], string phone[], string email[]) {
    string na, ph, em;
    cout << "Enter name: ";
    cin >> na;
    cout << "Enter phone: ";
    cin >> ph;
    cout << "Enter email: ";
    cin >> em;

    name[index] = na;
    phone[index] = ph;
    email[index] = em;
    index++;
    cout << "Contact List has been updated" << endl;
}

void edit(string name[], string phone[], string email[]) {
    int ch;
    cout << "1. Edit name in contact list\n"
            "2. Edit phone in contact list\n"
            "3. Edit email in contact list\n";
    cin >> ch;

    if (ch == 1) {
        string ename, eename;
        cout << "Enter the name you want to update: ";
        cin >> ename;
        for (int i = 0; i < index; i++) {
            if (name[i] == ename) {
                cout << "Enter new name: ";
                cin >> eename;
                name[i] = eename;
                cout << "Name is updated" << endl;
                return;
            }
        }
        cout << "Name not found in contact list" << endl;
    } else if (ch == 2) {
        string ephone, eephone;
        cout << "Enter the phone number you want to update: ";
        cin >> ephone;
        for (int i = 0; i < index; i++) {
            if (phone[i] == ephone) {
                cout << "Enter new phone number: ";
                cin >> eephone;
                phone[i] = eephone;
                cout << "Phone number is updated" << endl;
                return;
            }
        }
        cout << "Phone number not found in contact list" << endl;
    } else if (ch == 3) {
        string eemail, eeemail;
        cout << "Enter the email you want to update: ";
        cin >> eemail;
        for (int i = 0; i < index; i++) {
            if (email[i] == eemail) {
                cout << "Enter new email: ";
                cin >> eeemail;
                email[i] = eeemail;
                cout << "Email is updated" << endl;
                return;
            }
        }
        cout << "Email not found in contact list" << endl;
    } else {
        cout << "Invalid Input!" << endl;
    }
}

void show(string name[], string phone[], string email[]) {
    cout << "Name       Phone       Email" << endl << endl;
    for (int i = 0; i < index; i++) {
        cout << name[i] << "       " << phone[i] << "       " << email[i] << endl;
    }
}

void deletee(string name[], string phone[], string email[]) {
    int chc;
    cout << "1. Delete by name\n"
            "2. Delete by phone number\n"
            "3. Delete by email\n";
    cin >> chc;

    if (chc == 1) {
        string dname;
        cout << "Enter the name you want to delete: ";
        cin >> dname;
        for (int i = 0; i < index; i++) {
            if (dname == name[i]) {
                for (int j = i; j < index - 1; j++) {
                    name[j] = name[j + 1];
                    phone[j] = phone[j + 1];
                    email[j] = email[j + 1];
                }
                index--;
                cout << "Contact is deleted" << endl;
                return;
            }
        }
        cout << "Name not found in contact list" << endl;
    } else if (chc == 2) {
        string dphone;
        cout << "Enter the phone number you want to delete: ";
        cin >> dphone;
        for (int i = 0; i < index; i++) {
            if (dphone == phone[i]) {
                for (int j = i; j < index - 1; j++) {
                    name[j] = name[j + 1];
                    phone[j] = phone[j + 1];
                    email[j] = email[j + 1];
                }
                index--;
                cout << "Contact is deleted" << endl;
                return;
            }
        }
        cout << "Phone number not found in contact list" << endl;
    } else if (chc == 3) {
        string demail;
        cout << "Enter the email you want to delete: ";
        cin >> demail;
        for (int i = 0; i < index; i++) {
            if (demail == email[i]) {
                for (int j = i; j < index - 1; j++) {
                    name[j] = name[j + 1];
                    phone[j] = phone[j + 1];
                    email[j] = email[j + 1];
                }
                index--;
                cout << "Contact is deleted" << endl;
                return;
            }
        }
        cout << "Email not found in contact list" << endl;
    } else {
        cout << "Invalid Input!" << endl;
    }
}

int main() {
    string name[5];
    string phone[5];
    string email[5];
    int choice;

    while (true) {
        cout << "1. Add to contact list\n"
                "2. Edit in contact list\n"
                "3. Delete from contact list\n"
                "4. Show contact list\n"
                "5. End program" << endl;
        cin >> choice;

        if (choice == 1) {
            add(name, phone, email);
        } else if (choice == 2) {
            edit(name, phone, email);
        } else if (choice == 3) {
            deletee(name, phone, email);
        } else if (choice == 4) {
            show(name, phone, email);
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid Input" << endl;
        }
    }
    return 0;
}
