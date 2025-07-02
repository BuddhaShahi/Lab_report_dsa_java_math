// 10. Write a program to construct Login form and Signup Form using Swing.





import javax.swing.*;
import java.awt.*;

public class Question10 {
    public static void main(String[] args) {
        // Font for labels and text fields
        Font font = new Font("Arial", Font.BOLD, 14);

        // Login Form
        JFrame loginFrame = new JFrame("Login Form");
        loginFrame.setSize(350, 200);
        loginFrame.setLayout(new GridLayout(3, 2, 10, 10));

        JLabel userLabel = new JLabel("Username:");
        userLabel.setFont(font);
        JTextField userText = new JTextField();
        userText.setFont(font);

        JLabel passLabel = new JLabel("Password:");
        passLabel.setFont(font);
        JPasswordField passText = new JPasswordField();
        passText.setFont(font);

        JButton loginButton = new JButton("Login");
        loginButton.setFont(font);
        JButton signupButton = new JButton("Signup");
        signupButton.setFont(font);

        loginFrame.add(userLabel);
        loginFrame.add(userText);
        loginFrame.add(passLabel);
        loginFrame.add(passText);
        loginFrame.add(loginButton);
        loginFrame.add(signupButton);

//         loginFrame.setLocationRelativeTo(null);
//         loginFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//         loginFrame.setVisible(true);

//         // Signup Form
//         JFrame signupFrame = new JFrame("Signup Form");
//         signupFrame.setSize(350, 250);
//         signupFrame.setLayout(new GridLayout(4, 2, 10, 10));

//         JLabel newUserLabel = new JLabel("New Username:");
//         newUserLabel.setFont(font);
//         JTextField newUserText = new JTextField();
//         newUserText.setFont(font);

//         JLabel newPassLabel = new JLabel("New Password:");
//         newPassLabel.setFont(font);
//         JPasswordField newPassText = new JPasswordField();
//         newPassText.setFont(font);

//         JLabel emailLabel = new JLabel("Email:");
//         emailLabel.setFont(font);
//         JTextField emailText = new JTextField();
//         emailText.setFont(font);

//         JButton registerButton = new JButton("Register");
//         registerButton.setFont(font);

//         signupFrame.add(newUserLabel);
//         signupFrame.add(newUserText);
//         signupFrame.add(newPassLabel);
//         signupFrame.add(newPassText);
//         signupFrame.add(emailLabel);
//         signupFrame.add(emailText);
//         signupFrame.add(new JLabel());  // Empty cell
//         signupFrame.add(registerButton);

//         signupFrame.setLocationRelativeTo(null);
//         signupFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//         signupFrame.setVisible(true);
//     }
// }
       

        // Action for Signup Button (opens simple popup)
        signupButton.addActionListener(e -> {
            JOptionPane.showMessageDialog(null, "Signup form goes here...");
        });
        loginButton.addActionListener(e -> {
            JOptionPane.showMessageDialog(null, "login form goes here...");
        });

        // Final frame settings
        loginFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        loginFrame.setLocationRelativeTo(null); // center the frame
        loginFrame.setVisible(true);
    }
}

