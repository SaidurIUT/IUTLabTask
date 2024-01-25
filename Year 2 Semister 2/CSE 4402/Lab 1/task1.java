import java.lang.Math;
import java.util.Scanner;

public class task1 {

    public static void main(String[] args) {
        int your_guess;
        int random_number = (int) (Math.random() * (6 - 1) + 1);
        Scanner sc = new Scanner(System.in);
        System.out.println("I have rolled a dice .");
        System.out.println("Your guess : ");

        your_guess = sc.nextInt();

        if(random_number==your_guess){
            System.out.println("Your are correct");
        }

        else{
            System.out.println("Wrong ! Correct answer is " + random_number +".");
        }


    }

}
