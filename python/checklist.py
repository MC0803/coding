#checklist = [
#   {"task": "Exercise", "completed": True},
#   {"task": "Write report", "completed": False},
#    {"task": "Attend meeting", "completed": True},
#    {"task": "Buy groceries", "completed": False}
#]

#completed_tasks = []
#incomplete_tasks = []


#for item in checklist:
#    if item["completed"]:
#        completed_tasks.append(item["task"])
#    else:
#        incomplete_tasks.append(item["task"])

#print("Completed Tasks:", completed_tasks)
#print("Incomplete Tasks:", incomplete_tasks)

checklist ={"Exercise":"Complete",
             "Report":"Complete","Meeting":"Incomplete",
             "Cooking":"Complete"}
completed =[]
incompleted = []
for item in checklist:
    if checklist[item] =="Complete":
       completed.append(item)
    else:
        incompleted.append(item)   

print("completed items:",completed)
print("Incompleted items:",incompleted)    