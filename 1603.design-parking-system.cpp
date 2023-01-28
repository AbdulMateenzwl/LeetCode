class ParkingSystem
{
public:
    vector<int> vtr{0, 0, 0};
    ParkingSystem(int big, int medium, int small)
    {
        vtr[0] = big;
        vtr[1] = medium;
        vtr[2] = small;
    }

    bool addCar(int carType)
    {
        if (--vtr[--carType] >= 0)
            return true;
        return false;
    }
};