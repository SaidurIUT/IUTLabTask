package Lab02_1B_210041132;

public class Lab02_1B_210041132 {

    public static void main(String[] args) {
        Smartphone smartphone = new Smartphone("Phone", 499.99, "phone-1");
        smartphone.setPhoneNumber("123-456-7890");

        Smartwatch smartwatch = new Smartwatch("Watch", 199.99, "watch-1");

        SmartHomeDevice smartHomeDevice = new SmartHomeDevice("HomeDevice", 299.99, "home-1");

        smartHomeDevice.connectDevice(smartphone);
        smartHomeDevice.connectDevice(smartwatch);

        smartphone.powerOn();
        smartphone.call("987-654-3210");
        smartphone.powerOff();

        smartwatch.powerOn();
        smartwatch.checkVitals();
        smartwatch.powerOff();

        smartHomeDevice.powerOn();
        smartHomeDevice.listDevices();
        smartHomeDevice.powerOff();
    }

}
