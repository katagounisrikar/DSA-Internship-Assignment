students = {}

while True:
    print("\n----- Student Database -----")
    print("1. Add Student")
    print("2. Search Student")
    print("3. Update Student")
    print("4. Delete Student")
    print("5. Display All Students")
    print("6. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        roll = int(input("Enter Roll Number: "))
        name = input("Enter Name: ")
        marks = int(input("Enter Marks: "))

        students[roll] = {
            "name": name,
            "marks": marks
        }

        print("Student Added Successfully")

    elif choice == 2:
        roll = int(input("Enter Roll Number: "))

        if roll in students:
            print("Name:", students[roll]["name"])
            print("Marks:", students[roll]["marks"])
        else:
            print("Student Not Found")

    elif choice == 3:
        roll = int(input("Enter Roll Number: "))

        if roll in students:
            name = input("Enter New Name: ")
            marks = int(input("Enter New Marks: "))

            students[roll]["name"] = name
            students[roll]["marks"] = marks

            print("Student Updated Successfully")
        else:
            print("Student Not Found")

    elif choice == 4:
        roll = int(input("Enter Roll Number: "))

        if roll in students:
            del students[roll]
            print("Student Deleted Successfully")
        else:
            print("Student Not Found")

    elif choice == 5:
        if not students:
            print("No Records Found")
        else:
            print("\nStudent Records:")
            for roll, details in students.items():
                print("Roll:", roll,
                      "Name:", details["name"],
                      "Marks:", details["marks"])

    elif choice == 6:
        print("Exiting Program...")
        break

    else:
        print("Invalid Choice")