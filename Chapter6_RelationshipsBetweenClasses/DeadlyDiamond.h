class WaveDevice {
private:
    //attributes
public:
    //methods
};

class Sender : public virtual WaveDevice {
private:
    //attributes

public:
    //methods
};

class Receiver : public virtual WaveDevice {
private:
    //attributes

public:
    //methods
};

class WirelessRouter : public Sender, public Receiver {
private:
    //attributes

public:
    //methods
};