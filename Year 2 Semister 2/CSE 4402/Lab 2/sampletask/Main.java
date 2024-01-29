package sampletask;


public class Main{
    public static void main(String[] args){
       Coffee bev1 = new Coffee("Cold", 12.5f, true);

       Tea bev2 = new Tea("Rong" , 78.3f , false );

       Cup cup1 = new Cup(120.5f, "Glass" , bev1);

       Cup cup2 = new Cup(150.5f , "Glass" , bev2);

       cup1.drink();
       cup2.drink();
       System.out.println(Cup.cupCount);

    }
}