package sampletask;


public class Cup {
    float price;
    float volume;
    String material;
    boolean isFull;
    Baverage baverage;
    static int  cupCount=0 ;

    Cup(float price , String material , Baverage baverage){
        this.price = price;
        this.material = material;
        this.baverage = baverage;
        isFull = true;
        cupCount++;

       

    }

    void drink(){

        if(isFull){
           System.out.println(baverage.getName());
           isFull =false;
        }
        else{
            System.out.println("Nothing to drink");
        }

    }


    
}
