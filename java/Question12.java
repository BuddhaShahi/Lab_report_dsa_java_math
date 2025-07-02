
// 12. Differentiate between method overloading and method overriding in java.
// | Aspect                                 | Method Overloading                                           | Method Overriding                                                                       |
// | -------------------------------------- | ------------------------------------------------------------ | --------------------------------------------------------------------------------------- |
// | **Definition**                         | Same method name, different parameters in the **same class** | Same method name, same parameters, but in **subclass (child class)** to change behavior |
// | **Purpose**                            | To perform **similar tasks** with different inputs           | To provide **specific implementation** of a method in subclass                          |
// | **Parameters**                         | Must differ in number, type, or order                        | Must be exactly the same                                                                |
// | **Return Type**                        | Can be same or different                                     | Must be the same or covariant                                                           |
// | **Inheritance**                        | Not required                                                 | Required (between superclass and subclass)                                              |
// | **Compile-time/Run-time Polymorphism** | Compile-time (static binding)                                | Run-time (dynamic binding)                                                              |
// | **Access Modifier**                    | Can vary                                                     | Cannot reduce visibility (must be same or more visible)                                 |
// | **Example Location**                   | Within a single class                                        | Between superclass and subclass                                                         |




package java;


class Animal {
    void sound() {
        System.out.println("Animal makes sound");
    }
}

class Dog extends Animal {
    @Override
    void sound() {
        System.out.println("Dog barks");
    }
}

class Calculator {
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
}

public class Question12 {
    public static void main(String[] args) {
        // Overloading
        Calculator c = new Calculator();
        System.out.println("Add 2: " + c.add(5, 10));
        System.out.println("Add 3: " + c.add(1, 2, 3));

        // Overriding
        Animal a = new Animal();
        Dog d = new Dog();
        a.sound();
        d.sound();
    }
}
