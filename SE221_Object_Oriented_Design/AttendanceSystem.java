import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class AttendanceSystem {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the maximum number of students to manage: ");
        int maxStudents = scanner.nextInt();

        AttendanceManager attendanceManager = new AttendanceManager(maxStudents);

        int choose;

        do {
            clearScreen();
            System.out.println("\nWhat do you want to do?");
            System.out.println("1. Add Student");
            System.out.println("2. Take Attendance");
            System.out.println("3. Check Attendance");
            System.out.println("4. Remove Student");
            System.out.println("5. Exit");

            System.out.print("\nPlease choose any menu: ");
            choose = scanner.nextInt();
            scanner.nextLine();

            switch (choose) {
                case 1:
                    addStudents(attendanceManager, scanner);
                    break;
                case 2:
                    attendanceManager.takeAttendance(scanner);
                    break;
                case 3:
                    attendanceManager.checkAttendance(scanner);
                    break;
                case 4:
                    System.out.print("Enter student name to remove: ");
                    String studentToRemove = scanner.nextLine();
                    attendanceManager.removeStudent(studentToRemove);
                    break;
                case 5:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice. Try again.");
            }
        } while (true);
    }

    private static void addStudents(AttendanceManager attendanceManager, Scanner scanner) {
        System.out.print("Enter student names (comma-separated): ");
        String input = scanner.nextLine();
        String[] studentNames = input.split(",\\s*");
        attendanceManager.addStudents(studentNames);
    }

    private static void clearScreen() {
        try {
            if (System.getProperty("os.name").contains("Windows")) {
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            } else {
                System.out.print("\033[H\033[2J");
                System.out.flush();
            }
        } catch (IOException | InterruptedException e) {
            e.printStackTrace();
        }
    }
}

class Student {
    private String name;

    public Student(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }
}

class AttendanceRecord {
    private int presentCount;
    private int absentCount;

    public void markPresent() {
        presentCount++;
    }

    public void markAbsent() {
        absentCount++;
    }

    public int getPresentCount() {
        return presentCount;
    }

    public int getAbsentCount() {
        return absentCount;
    }
}

class AttendanceManager {
    private Student[] students;
    private AttendanceRecord[] attendanceRecords;
    private int indexNumber;

    public AttendanceManager(int capacity) {
        students = new Student[capacity];
        attendanceRecords = new AttendanceRecord[capacity];
        indexNumber = 0;
    }

    public void addStudents(String[] names) {
        for (String name : names) {
            addStudent(name);
        }
    }

    public void addStudent(String name) {
        if (indexNumber < students.length) {
            students[indexNumber] = new Student(name);
            attendanceRecords[indexNumber] = new AttendanceRecord();
            indexNumber++;
        } else {
            System.out.println("Cannot add more students. Reached maximum capacity.");
        }
    }

    public void takeAttendance(Scanner scanner) {
        for (int i = 0; i < indexNumber; i++) {
            System.out.print(i + 1 + ". " + students[i].getName() + " is present (Y/N): ");
            char ch = scanner.nextLine().charAt(0);

            if (ch == 'Y' || ch == 'y') {
                attendanceRecords[i].markPresent();
            } else if (ch == 'N' || ch == 'n') {
                attendanceRecords[i].markAbsent();
            } else {
                System.out.println("Invalid character. Try again.");
                i--;
            }
        }
    }

    public void checkAttendance(Scanner scanner) {
        System.out.println("\n    Total Present | Total Absent");

        for (int i = 0; i < indexNumber; i++) {
            System.out.printf("%s     %d           |   %d%n",
                    students[i].getName(), attendanceRecords[i].getPresentCount(), attendanceRecords[i].getAbsentCount());
        }
        System.out.println(); 
        scanner.nextLine();   
        System.out.print("Press Enter to continue...");
        scanner.nextLine();    
    }

    public void removeStudent(String name) {
        int studentIndex = findStudentIndex(name);
        if (studentIndex != -1) {
            students = removeElement(students, studentIndex);
            attendanceRecords = removeElement(attendanceRecords, studentIndex);
            indexNumber--;
            System.out.println(name + " student is removed");
        } else {
            System.out.println("Student not found");
        }
    }

    private int findStudentIndex(String name) {
        for (int i = 0; i < indexNumber; i++) {
            if (name.equals(students[i].getName())) {
                return i;
            }
        }
        return -1; 
    }

    private <T> T[] removeElement(T[] array, int index) {
        return Arrays.copyOfRange(array, 0, index);
    }
}
