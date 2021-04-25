static const auto fast = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    return 0;
}();

class ParkingSystem
{
public:
    int bigsize, mediumsize, smallsize;
    ParkingSystem(int big, int medium, int small)
    {
        bigsize = big;
        mediumsize = medium;
        smallsize = small;
    }

    bool addCar(int carType)
    {
        if (carType == 1 && bigsize > 0)
        {
            bigsize--;
            return true;
        }
        else if (carType == 2 && mediumsize > 0)
        {
            mediumsize--;
            return true;
        }
        else if (carType == 3 && smallsize > 0)
        {
            smallsize--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
