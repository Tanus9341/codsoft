#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct Task {
    string name;
    bool completed;
};
vector<Task> tasks;
void addTask(const string& taskName) {
    Task newTask;
    newTask.name = taskName;
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added successfully!" << endl;
}
void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks found." << endl;
    } else {
        cout << "Tasks:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].name << " - " << (tasks[i].completed ? "Completed" : "Pending") << endl;
        }
    }
}
void markTaskAsCompleted(int taskIndex) {
    if (taskIndex >= 0 && taskIndex < tasks.size()) {
        tasks[taskIndex].completed = true;
        cout << "Task marked as completed successfully!" << endl;
    } else {
        cout << "Invalid task index." << endl;
    }
}
void removeTask(int taskIndex) {
    if (taskIndex >= 0 && taskIndex < tasks.size()) {
        tasks.erase(tasks.begin() + taskIndex);
        cout << "Task removed successfully!" << endl;
    } else {
        cout << "Invalid task index." << endl;
    }
}

int main() {
    while (true) {
        cout << "\nWelcome to the To-Do List Manager!" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string taskName;
                cout << "Enter the task name: ";
                cin.ignore(); 
                getline(cin, taskName);
                addTask(taskName);
                break;
            }
            case 2:
                viewTasks();
                break;
            case 3: {
                int taskIndex;
                cout << "Enter the index of the task to mark as completed: ";
                cin >> taskIndex;
                markTaskAsCompleted(taskIndex - 1); 
                break;
            }
            case 4: {
                int taskIndex;
                cout << "Enter the index of the task to remove: ";
                cin >> taskIndex;
                removeTask(taskIndex - 1); 
                break;
            }
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
