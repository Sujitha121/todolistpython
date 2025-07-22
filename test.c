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
	for idx, task in enumerate(todo_lsit, start=1):
                print(f"{idx}. {task}")
		elif choice == '3':
        task_num = int(input("Enter task nmuber to remove: "))
        if 1 <= task_num <= len(todo_list):
            removed = todo_list.pop(task_num - 1)
            print(f"Removed: {removed}")
	    else:
            print("Invalid task number!")
    elif choice == '4':
        print("Goodbye!")
        break
else:
        print("Invalid input!")
