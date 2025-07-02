// 13. Explain the difference between Frame and Panel in Java AWT with an example of how each is used.

// | Feature                         | `Frame`                           | `Panel`                              |
// | ------------------------------- | --------------------------------- | ------------------------------------ |
// | **Definition**                  | A top-level window with title bar | A container used to group components |
// | **Can display independently?**  | ✅ Yes                             | ❌ No (must be added to a Frame)      |
// | **Has minimize/close buttons?** | ✅ Yes                             | ❌ No (it's not a window)             |
// | **Used for**                    | Main window                       | Internal grouping of components      |
// | **Class**                       | `java.awt.Frame`                  | `java.awt.Panel`                     |





import java.awt.*;

public class Question13 {
    public static void main(String[] args) {
        Frame frame = new Frame("Frame Example");  // Creating a Frame
        frame.setSize(300, 200);
        frame.setLayout(null);

        Panel panel = new Panel();                 // Creating a Panel
        panel.setBounds(50, 50, 200, 100);
        panel.setBackground(Color.LIGHT_GRAY);

        Label label = new Label("Inside Panel");
        panel.add(label);                          // Adding Label to Panel

        frame.add(panel);                          // Adding Panel to Frame
        frame.setVisible(true);
    }
}

