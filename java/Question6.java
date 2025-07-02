// 6. Write a java program to create a simple JList.

// JList is a Swing component used to display a list of items. The user can select one or more items from it.



import javax.swing.*;

public class Question6 {
    public static void main(String[] args) {
        // Step 1: Create a frame
        JFrame frame = new JFrame("Simple JList Example");

        // Step 2: Create a list of cities
        String[] cities = {"Kathmandu", "Lalitpur", "Pokhara", "Biratnagar", "Dharan"};
        JList<String> cityList = new JList<>(cities);  // JList with string array

        // Step 3: Add the list to a scroll pane
        JScrollPane scrollPane = new JScrollPane(cityList);

        // Step 4: Add scroll pane to frame
        frame.add(scrollPane);

        // Step 5: Set frame properties
        frame.setSize(300, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}

// Kathmandu  
// Lalitpur  
// Pokhara  
// Biratnagar  
// Dharan
