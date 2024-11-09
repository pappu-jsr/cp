

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class A_Doremy_s_Paint_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            int n = sc.nextInt();
            Map<Integer, Integer> m1 = new HashMap<>();
            int[] arr = new int[n];
            
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                m1.put(arr[i], m1.getOrDefault(arr[i], 0) + 1);
            }

            if (m1.size() == 1 || m1.size() == 2) {
                if (m1.size() == 2) {
                    boolean found = false;
                    for (int count : m1.values()) {
                        if (n % 2 == 0) {
                            if (count == n / 2) {
                                System.out.println("Yes");
                                found = true;
                                break;
                            }
                        } else {
                            if (count == n / 2 || count == n / 2 + 1) {
                                System.out.println("Yes");
                                found = true;
                                break;
                            }
                        }
                    }
                    if (!found) {
                        System.out.println("No");
                    }
                } else {
                    System.out.println("Yes");
                }
            } else {
                System.out.println("No");
            }
        }
        
        sc.close();
    }
}