class Food {
private:
    double mass;

public:
    double getMass() const {
        return mass;
    }
};

class Cat {
private:
    double energy;

public: 
    void eat(const Food& food) {
        //energy increases after eating
        energy += food.getMass() * 10;
    }
};