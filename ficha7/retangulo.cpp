class rectang {
private:
    float comp;
    float larg;

public:
    rectang() {
        comp = 4;
        larg = 5;
    }

    float getComp() {
    return comp;
    }

    float getLarg() {
    return larg;
    }
};

class cubo : public rectang {
private:
    float altura;

public:
    cubo() {
        altura = 3;
    }
};


int main() {   
   
    return 0;
}