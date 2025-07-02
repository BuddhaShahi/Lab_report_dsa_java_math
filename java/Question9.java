
// 9. Write a program to list out all the interfaces.


package java;

public class Question9 {
    public static void main(String[] args) {
        Class<?> c = java.util.ArrayList.class;

        System.out.println("Interfaces implemented by ArrayList:");
        Class<?>[] interfaces = c.getInterfaces();

        for (Class<?> i : interfaces) {
            System.out.println(i.getName());
        }
    }
}


