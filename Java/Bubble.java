import java.util.Random;
import java.util.Scanner;

public class Bubble {

    static int[] num;
    static Random ran;

    public static void main(String[] args) {
        num = new int[20];
        ran = new Random();

        for (int i = 0; i < num.length; i++) {
            num[i] = ran.nextInt(101);
        }

        PrintArray();

        boolean done = false;
        boolean flag = false;

        while (!done) {
            flag = false;

            for (int i = 0; i < num.length; i++) {
                if (i < num.length - 1) {
                    if (num[i] > num[i + 1]) {
                        flag = true;
                        Swap(i, i + 1);
                    }
                }
            }

            PrintArray();

            if (!flag) {
                done = true;
                break;
            }
        }

        try { System.in.read(); } catch (Exception e) { }
    }

    private static void PrintArray() {
        for (int i = 0; i < num.length; i++) {
            System.out.print(num[i] + " ");
        }
        System.out.print("\n");
    }

    private static void Swap(int index, int sindex) {
        int x = num[index];
        int y = num[sindex];

        num[index] = y;
        num[sindex] = x;
    }
}