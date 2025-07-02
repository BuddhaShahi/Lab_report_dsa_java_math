// 11. What is the use of this keyword? Explain with suitable examples.
// this keyword in Java is a reference variable that refers to the current object — 
// the object whose method or constructor is being called.

// To refer to instance variables when they are shadowed by method or constructor parameters.

// To invoke current class methods.

// To invoke current class constructors (constructor chaining).

// To pass current object as a parameter to another method or constructor.

package java;


public class Student {
    int id;
    String name;

    Student(int id, String name) {
        this.id = id;         // 'this.id' refers to instance variable
        this.name = name;     // parameter 'name' assigned to instance variable 'name'
    }

    void display() {
        System.out.println("ID: " + this.id + ", Name: " + this.name);
    }

    public static void main(String[] args) {
        Student s = new Student(101, "Buddha");
        s.display();
    }
}
