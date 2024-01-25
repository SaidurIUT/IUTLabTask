import java.util.Scanner;

public class task2 {
    public static void main(String[] args) {
        int your_input , res=1; 
        Scanner sc = new Scanner(System.in);
        System.out.println("The number to compute factorial :");
        your_input= sc.nextInt();

        for(int i = 1 ;i <=your_input ;i++ ){
            res = i*res;
        }

        System.out.println(res);


    }
}
