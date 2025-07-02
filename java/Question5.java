// 5. Write a Java program to demonstrate the concept of encapsulation using getter and setter methods.

//  What is Encapsulation?
// Encapsulation is the process of hiding the internal details of a class and restricting direct access to them. It is achieved in Java by:

// Declaring variables private

// Providing public getter and setter methods to access/update them

// Encapsulation is a core OOP principle that ensures data protection and control.

public class Question5 {
    // Private data member – cannot be accessed directly
    private String name;
    private int age;

    // Getter method for name
    public String getName() {
        return name;
    }

    // Setter method for name
    public void setName(String newName) {
        name = newName;
    }

    // Getter method for age
    public int getAge() {
        return age;
    }

    // Setter method for age
    public void setAge(int newAge) {
        if (newAge >= 0) {
            age = newAge;
        } else {
            System.out.println("Invalid age!");
        }
    }

    public static void main(String[] args) {
        Question5 person = new Question5();

        // Setting values using setters
        person.setName("Buddha Shahi");
        person.setAge(22);

        // Accessing values using getters
        System.out.println("Name: " + person.getName());
        System.out.println("Age: " + person.getAge());
    }
}
