// 14. Why is multiple inheritance not supported by java? Explain with suitable examples.

// Multiple inheritance means a class inherits from more than one superclass.

// While this is allowed in C++, Java does not support multiple inheritance using classes to avoid ambiguity and complexity

// If two superclasses have the same method, and a subclass inherits both, the compiler won't 
// know which method to run — this is called the Diamond Problem.

interface A {
    void show();
}

interface B {
    void show();
}

class C implements A, B {
    public void show() {
        System.out.println("Implemented show() in C");
    }

    public static void main(String[] args) {
        C obj = new C();
        obj.show();
    }
}
