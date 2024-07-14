           // TASK 3
           // TO DO LIST
           
#include<iostream>
#include<vector>
#include<string>

using namespace std;

struct Task {
    string descript;
    bool completed;
    
    Task(string desc) : descript(desc), completed(false) {}
};

void addTask(vector<Task>& tasks)
 {
    string descript;
    cout << "Enter task description: ";
    cin.ignore();
    getline(cin, descript);
    tasks.push_back(Task(descript));
    
    cout << "Task added successfully!" << endl;
}

void viewTasks(const vector<Task>& tasks) 
{
    if (tasks.empty())
	 {
    
	    cout << "No tasks found." << endl;
        return;
    }
    
    for (size_t i = 0; i < tasks.size(); ++i) 
	{
       
	    cout << i + 1 << ". " << tasks[i].descript << " ["   << (tasks[i].completed ? "Completed" : "Pending") << "]" << endl;
    }
}

void markTaskComplete(vector<Task>& tasks) 
{
    size_t index;
    cout << "Enter task number to mark as completed: ";
    cin >> index;
   
    if (index == 0 || index > tasks.size()) 
	{
        
		cout << "Invalid task number." << endl;
    } 
	else
	 {
        tasks[index - 1].completed = true;
        cout << "Task marked as completed." << endl;
    }
}

void removeTask(vector<Task>& tasks)
 {
    size_t index;
    cout << "Enter task number to remove: ";
    cin >> index;
    
    if (index == 0 || index > tasks.size()) 
	{
        cout << "Invalid task number." << endl;
    }
	 else 
	 {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task removed successfully." << endl;
    }
}

int main()
 {
    vector<Task> tasks;
    int choice;
    
    while (true) 
	{
        cout << "1. Add Task \n";
        cout << "2. View Tasks \n";
        cout << "3. Mark Task as Completed \n";
        cout << "4. Remove Task \n";
        cout << "5. Exit \n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice)
		 {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                markTaskComplete(tasks);
                break;
            case 4:
                removeTask(tasks);
                break;
            case 5:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
                return 0;
        }
    }
}
	
	
