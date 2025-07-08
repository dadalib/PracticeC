#include <iostream> /*use the cost*/
class FireSignal
{
private: /*private attributes*/
    int color;
    int position;
    static double height;

public:/*public constructor and methods*/
    FireSignal(int colorInit)
    {
        color = colorInit;
        position = 0;
    }
    FireSignal(int colorInit, int positionInit) : color(colorInit), position(positionInit)
    {
        /* The constructor initi*/
    }
    void setHeight(double newHeight)
    {
        height = newHeight;
    }
    void changeColor(int newColor)
    {
        color = newColor;
        std::cout << "My color it is" << color << std::endl;
        /*Print in cpp*/
    }
    void getHeight()
    {
        std::cout << "The height of the fire is" << height << std::endl;
        /* Print height*/
    }
    void blinkFire(){
        std::cout << "First Blink" << height << std::endl;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++)
                std::cout<<"I am off"<<std::endl;
            for(int k=0;k<2;k++)
                std::cout<<"I am on"<<std::endl;
        }
    }
    void blinkFire(int a){
        std::cout << "Second Blink"<< std::endl;
        for(int i=0;i<2;i++){
            for(int j=0;j<a;j++)
                std::cout<<"I am off"<<std::endl;
            for(int k=0;k<a;k++)
                std::cout<<"I am on"<<std::endl;
        }
    }
    int blinkFire(int a, int b){
        std::cout << "Third Blink" << std::endl;

        for(int i=0;i<2;i++){
            for(int j=0;j<a;j++)
                std::cout<<"I am off"<<std::endl;

            for(int k=0;k<b;k++)
                std::cout<<"I am on"<<std::endl;
        }
        return b;
    }
};
double FireSignal::height = 3.5;
/* reset height attribute*/
int main(int argc,char* argv[]){
    /* We create un object in the battery that is an hybradation example*/
    FireSignal oneFire(1,3);
    /* Create an "new" objet in the memory pile*/
    FireSignal *anotherFire = new FireSignal(1);
    oneFire.changeColor(3);
    oneFire.setHeight(8.9);
    /*invoque static method in the class*/
    FireSignal:: getHeight;
    anotherFire->setHeight(10.6);
    /*Arrow for the one on the pile*/
    anotherFire->getHeight();
    std::cout<<"******Blink******"<< std::endl;
    oneFire.blinkFire();
    oneFire.blinkFire(3);
    int b = oneFire.blinkFire(2,3);
    return 0;
