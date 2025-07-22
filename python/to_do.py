def tasks():
    tasks = []
    print("Welcome to task manager")
    total_tasks = int(input(" Enter the number of tasks: "))
    for i in range(total_tasks):
        new_task = input("Task: ")
        tasks.append(new_task)
    while True:
        print()
        operation = int(input(f"\nEnter \n1 - new task \n 2- view tasks \n 3 - update task \n 4 delete task \n 5 - Exit \n")) 
        print()
        if operation == 1:
            new_task = input("Enter new task :")
            tasks.append(new_task)
            print(f"{new_task} successfully added")
        elif operation == 2:
            for item in tasks:
                print(item)
        elif operation == 3:
            task_to_update = input("Enter task to update")
            if task_to_update in tasks:
               new_task = input("Enter the new task")
               tasks[tasks.index(task_to_update)] = new_task
               print(f"{task_to_update} successfully updated to {new_task} ")
        elif operation ==4:
            task_to_delete = input("Ënter task to delete")
            if task_to_delete in tasks:
                tasks.remove(task_to_delete)
                print(f"{task_to_delete} deleted\n")    
        elif operation ==5 : 
            print("Exiting")
            break
        else:
            print("Invalid Input")

tasks()

