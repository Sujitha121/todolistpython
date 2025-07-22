todo_list = []

def show_menu():
	print("\n--- To-Do List Menu ---")
    print("1. Add Task")
    print("2. View Tasks")
	print("3. Remove Task")
    print("4. Exit")

while True:
    show_menu()
    choice = input("Enter your choice (1-4): ")
    if choice == '1':
        task = input("Enter a new task: ")
        todo_list.append(task)
        print("Task added.")
    elif choice == '2':
        print("\nYour Tasks:")
        if not todo_list:
            print("No tasks yet!")
        else:
