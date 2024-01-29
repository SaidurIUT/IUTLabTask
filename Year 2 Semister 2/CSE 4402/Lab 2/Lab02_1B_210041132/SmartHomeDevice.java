package Lab02_1B_210041132;

import java.util.ArrayList;
import java.util.List;

class SmartHomeDevice extends ElectronicDevice {
    private List<ElectronicDevice> connectedDevices;

    public SmartHomeDevice(String name, double price, String modelNumber) {
        super(name, price);
        this.connectedDevices = new ArrayList<>();
    }

    public void connectDevice(ElectronicDevice device) {
        connectedDevices.add(device);
    }

    public void listDevices() {
        System.out.println("Connected devices:");
        for (ElectronicDevice device : connectedDevices) {
            System.out.println("- " + device.getName() + " (" + device.getModelNumber() + ")");
        }
    }
}

