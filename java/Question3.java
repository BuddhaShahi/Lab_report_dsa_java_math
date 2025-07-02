// 3. Define JDBC. Write a program to display all records from a table of database.
//  Definition of JDBC:
// JDBC (Java Database Connectivity) is a Java API that enables Java programs to connect to and interact with databases. 
// It provides methods for querying and updating data in a relational database using SQL commands.

import java.sql.*;

public class Question3 {
    public static void main(String[] args) {
        // DB connection variables
        String url = "jdbc:mysql://localhost:3306/college";
        String user = "root";         // Change if needed
        String password = "yourpass"; // Change if needed

        try {
            // Step 1: Load MySQL JDBC Driver
            Class.forName("com.mysql.cj.jdbc.Driver");

            // Step 2: Connect to the database
            Connection con = DriverManager.getConnection(url, user, password);

            // Step 3: Create and execute SQL query
            Statement stmt = con.createStatement();
            ResultSet rs = stmt.executeQuery("SELECT * FROM students");

            // Step 4: Print all records
            System.out.println("ID\tName\t\tAge");
            System.out.println("----------------------------");
            while (rs.next()) {
                int id = rs.getInt("id");
                String name = rs.getString("name");
                int age = rs.getInt("age");

                System.out.println(id + "\t" + name + "\t\t" + age);
            }

            // Step 5: Close connections
            rs.close();
            stmt.close();
            con.close();

        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
