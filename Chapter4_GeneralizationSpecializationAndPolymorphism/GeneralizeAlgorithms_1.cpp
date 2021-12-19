//Template method design pattern
//Strategy design pattern

//object-oriented programming environmet like Microsoft Visual C++ or C++ Builder
//often use template method design pattern
//to build application framework
//to maximumly support developers 

#include <iostream>

class Figure {
public:
    Figure() {

    }

    virtual void input(std::istream& inDev) = 0;

    virtual void output(std::ostream& outDev) = 0;

    virtual bool isValid() = 0;

    virtual char* className() = 0;
    virtual Figure* clone() = 0;
};

class ProgramFrame {
protected:
    virtual void startMessage(std::ostream& outDev) {
        outDev << "Welcome, entering data: \n";
    }

    virtual void input(std::istream& inDev) = 0;

    virtual bool isValidData() = 0;

    virtual void errorMessage(std::ostream& outDev) {
        outDev << "Input data error!\n";
    }

    virtual void output(std::ostream& outDev) = 0;

    virtual void processing() {

    }

    virtual bool askToContinue(std::istream& inDev, std::ostream& outDev) {
        char ch;
        outDev << "Press 'Y' to continue, other key to stop...\n";
        inDev >> ch;

        return (ch == 'Y' || ch == 'y');
    }

public:
    void run(std::istream& inDev, std::ostream& outDev) {
        bool toContinue;

        do {
            startMessage(outDev);
            input(inDev);
            if (isValidData()) {
                processing();
                output(outDev);
                toContinue = askToContinue(inDev, outDev);
            } else {
                errorMessage(outDev);
            }
            toContinue = askToContinue(inDev, outDev);
        } while (toContinue);
    }
};

class FigureTest : public ProgramFrame {
private:
    Figure* mFig;

public:
    FigureTest(Figure* pFig) {
        this->mFig = pFig;
    }

    void input(std::istream& inDev) {
        if (this->mFig != nullptr) {
            mFig->input(inDev);
        }
    }

    void output(std::ostream& outDev) {
        if (mFig == nullptr) {
            return;
        }

        outDev << mFig->className() << "\n";
    }

    bool isValidData() {
        if (mFig == nullptr) {
            return false;
        }
        
        return mFig->isValid();
    }

    void startMessage(std::ostream& outDev) {
        outDev << "Entering data for " << mFig->className() << ": \n";
    }
};