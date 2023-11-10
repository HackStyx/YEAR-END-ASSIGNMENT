class Employee:
    def __init__(self, name, emp_id, department):
        self.name = name
        self.emp_id = emp_id
        self.department = department

# Create a list to store employee objects
employees = []
n=int(input("Enter the number of employees: "))
# Get user input for employee details
for i in range(n):  # Assuming a minimum of 10 employees
    name = input(f"Enter name for Employee {i}: ")
    emp_id = input(f"Enter ID for Employee {i}: ")
    department = input(f"Enter department for Employee {i}: ")

    # Create an Employee object and add it to the list
    employees.append(Employee(name, emp_id, department))

# Print employee details in a formatted table
print("{:<20} {:<10} {:>15}".format("Name", "ID", "Department"))
print("-" * 45)

for emp in employees:
    print("{:<20} {:<10} {:>15}".format(emp.name, emp.emp_id, emp.department))
