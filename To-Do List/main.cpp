#include <iostream>
#include <cstdlib>
using namespace std;

int index = 0;

void add(string task[]) {
    string na;
    cout << "Enter task: ";
    cin >> na;


    task[index] = na;

    index++;
    cout << "Task "<< na <<" has been updated" << endl;
}

void show(string task[]) {

    for (int i = 0; i < index; i++) {
            cout << "Task " << i+1 << ":" ;
        cout << task[i]<< endl;
    }
}

void deletee(string task[]) {
    string chc;
    cout << "Enter task name which you wants to delete: ";
    cin >> chc;


    for (int i = 0; i < index; i++) {
        if (chc == task[i]) {
            for (int j = i; j < index - 1; j++) {
                task[j] = task[j + 1];

            }
                index--;
                cout << endl << "Task "<<chc <<" is deleted" << endl;
                return;
            }
        }
        cout << "Task " << chc <<" not found" << endl;

}

int main() {
    string task[5];

    int choice;

    while (true) {
        cout << "1. Add new task\n"
                "2. Delete a task\n"
                "3. List tasks\n"
                "4. Quit" << endl;

        cin >> choice;

        if (choice == 1) {
            add(task);
        } else if (choice == 2) {
            deletee(task);
        } else if (choice == 3) {
            show(task);
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid Input" << endl;
        }
    }
    return 0;
}
