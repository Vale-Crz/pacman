class TazoDorado
{
    private: 
    bool flotando;

    public: 
    TazoDorado(){
        //Cuando se inicializa, flotando es falso
        this->flotando=false;
    }
~ TazoDorado() {
}

 void Inicializar(){
        //Cuando se inicializa, flotando es falso
        this->flotando=false;
        ~ TazoDorado() {
}

    }

void Flotar() {
    this->flotando=true;
}

    bool Flotando(){
        return this->flotando; 
    }

};