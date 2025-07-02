
// 7. How do you check if two strings are equal in java?

public class Question7 {
    public static void main(String[] args) {
        String s1 = "hello";
        String s2 = "hello";
        String s3 = new String("Hello");

        // Using equals()
        System.out.println("s1 equals s2: " + s1.equals(s2));          // true
        System.out.println("s1 equals s3: " + s1.equals(s3));          // false (case-sensitive)

        // Using equalsIgnoreCase()
        System.out.println("s1 equalsIgnoreCase s3: " + s1.equalsIgnoreCase(s3)); // true

        // Using ==
        System.out.println("s1 == s2: " + (s1 == s2));                  // true (same literal)
        System.out.println("s1 == s3: " + (s1 == s3));                  // false (different object)
    }
}

// s1 equals s2: true  
// s1 equals s3: false  
// s1 equalsIgnoreCase s3: true  
// s1 == s2: true  
// s1 == s3: false
