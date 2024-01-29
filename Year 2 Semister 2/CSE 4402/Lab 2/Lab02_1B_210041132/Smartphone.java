package Lab02_1B_210041132;

class Smartphone extends ElectronicDevice {
    private String phoneNumber;

    public Smartphone(String name, double price, String modelNumber) {
        super(name, price);
        this.phoneNumber = "Not Set";
    }

    public void setPhoneNumber(String phoneNumber) {
        this.phoneNumber = phoneNumber;
    }

    public void call(String phoneNumber) {
        System.out.println("Calling " + phoneNumber + " from " + this.phoneNumber);
    }
}