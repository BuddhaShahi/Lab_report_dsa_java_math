
// 8. Write a java program to sort a numeric array and a string array .

package java;
import java.util.Arrays;

public class Question8 {
    public static void main(String[] args) {
        // Numeric array
        int[] numbers = {5, 2, 9, 1, 3};
        Arrays.sort(numbers);
        System.out.print("Sorted numbers: ");
        for (int num : numbers) {
            System.out.print(num + " ");
        }

        // String array
        String[] names = {"Ram", "Sita", "Hari", "Gita"};
        Arrays.sort(names);
        System.out.print("\nSorted names: ");
        for (String name : names) {
            System.out.print(name + " ");
        }
    }
}
