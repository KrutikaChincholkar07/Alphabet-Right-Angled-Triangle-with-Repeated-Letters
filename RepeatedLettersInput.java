import java.util.Scanner;

public class AlphabetTriangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an uppercase letter: ");
        char ch = sc.next().toUpperCase().charAt(0);

        int n = ch - 'A' + 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print((char)('A' + i) + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}
