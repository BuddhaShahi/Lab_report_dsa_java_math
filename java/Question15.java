// 15. Differentiate between encapsulation and Inheritance with an example.

package java;


// Encapsulation Example
class Student {
    private String name;  // private = encapsulated

    public void setName(String name) {  // setter
        this.name = name;
    }

    public String getName() {          // getter
        return name;
    }
}

// Inheritance Example
class CollegeStudent extends Student {
    private String college;

    public void setCollege(String college) {
        this.college = college;
    }

    public void showDetails() {
        System.out.println("Name: " + getName());
        System.out.println("College: " + college);
    }
}

public class Question15 {
    public static void main(String[] args) {
        CollegeStudent cs = new CollegeStudent();
        cs.setName("Buddha");           // using encapsulated method
        cs.setCollege("Nirvana College");
        cs.showDetails();               // inherited + own method
    }
}
