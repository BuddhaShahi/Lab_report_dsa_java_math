package java;
import java.util.Arrays;

public class Question2 {
    
    public static void main(String[] args) {
        // Step 1: Define an array of 5 city names
        String[] cities = {"Lalitpur", "Kathmandu", "Pokhara", "Biratnagar", "Dharan"};

        // Step 2: Sort the array in ascending order
        Arrays.sort(cities);

        // Step 3: Print sorted city names
        System.out.println("Cities in Ascending Order:");
        for (String city : cities) {
            System.out.println(city);
        }
    }

}
