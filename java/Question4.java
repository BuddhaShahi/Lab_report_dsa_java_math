// Explain method overloading in Java with an example.

// Method Overloading in Java is a feature that allows a class to have more than one method with the same name but with different parameters (i.e., type, number, or order of parameters).
//  It is a type of compile-time polymorphism.

public class Question4 {
    // Method with 1 int parameter
    void display(int a) {
        System.out.println("Integer: " + a);
    }

    // Method with 2 int parameters
    void display(int a, int b) {
        System.out.println("Sum: " + (a + b));
    }

    // Method with 1 String parameter
    void display(String name) {
        System.out.println("Name: " + name);
    }

    public static void main(String[] args) {
        Question4 obj = new Question4();

        obj.display(10);            // calls first method
        obj.display(10, 20);        // calls second method
        obj.display("Buddha");      // calls third method
    }
}


// Integer: 10  
// Sum: 30  
// Name: Buddha

