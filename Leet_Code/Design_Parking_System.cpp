class ParkingSystem {
private:
    map<int, int> carSlots;
public:
    ParkingSystem(int big, int medium, int small) {
        carSlots[1] = big;    
        carSlots[2] = medium;
        carSlots[3] = small;
    }
    
    bool addCar(int carType) {
        if (carSlots[carType] > 0){
            carSlots[carType]--;
            return true;
        }else{
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */