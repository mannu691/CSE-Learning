# 🌟 Task Tracker CLI

**Task Tracker** is a command-line application for organizing and managing tasks directly from the terminal. Built in C++, this app allows you to add, update, and track tasks effortlessly in a JSON format.

---

### ⚙️ Usage

Run these commands to interact with your Task Tracker:

```zsh 
# ➕ Add a new task
task-cli add "Buy groceries"
# Output: Task added successfully (ID: 1)

# ✏️ Update an existing task
task-cli update 1 "Buy groceries and cook dinner"

# ❌ Delete a task
task-cli delete 1

# 🚧 Mark a task as in progress
task-cli mark-in-progress 1

# ✅ Mark a task as done
task-cli mark-done 1

# 📜 List all tasks
task-cli list

# 🔍 List tasks by status
task-cli list done
task-cli list todo
task-cli list in-progress
```
---

### 📚 Libraries Used
- **nlohmann/json**: JSON parsing and manipulation
