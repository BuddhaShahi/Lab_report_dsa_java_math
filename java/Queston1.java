
// 1. Write a program to create and use java package.





    // File: Message.java
// Package file inside folder named `mypackage`

package java;

public class Message {
    public void show() {
        System.out.println("Hello from the mypackage!");
    }
}


// File: TestPackage.java

// import mypackage.Message;

public class TestPackage {
    public static void main(String[] args) {
        Message msg = new Message();
        msg.show();  // calling method from package
    }
}


// Hello from the mypackage!

