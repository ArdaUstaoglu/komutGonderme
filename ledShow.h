class Ledshow{
    String action="";
  public:
    void setup(){
      int i=0;
      for(i=2;i<=9;i++){
        pinMode(i,OUTPUT);
      }
    }
    void setAction(String a){
      action=a;
    }
    void show(){
      if(action=="flipflop")flipFlop();
      if(action=="disco")disco();
    }
    void flipFlop(){  
        turnOn();
        delay(200);
        turnOff();
        delay(200);
    }
    void disco(){
        turnOff();
        inside();
        turnOff();
        outside();
        
     }
  private:
    void ordered(){
      int i;
      for(i=2;i<=9;i++){
        digitalWrite(i,HIGH);
        delay(200);
      }
    }
    void turnOff(){
      int i;
      for(i=2;i<=9;i++){
        digitalWrite(i,LOW);
        delay(200);
      }
    }
    void turnOn(){
      int i;
      for(i=2;i<=9;i++){
       digitalWrite(i,HIGH);
       delay(200); 
      }
    }
    void inside(){
        int i;
        for(i=2;i<=5;i++){
          digitalWrite(i,HIGH);
          digitalWrite(11-i,HIGH);      
          delay(200);
     }
    }
    void outside(){
        int i;
        for(i=5;i>=2;i--){
          digitalWrite(i,HIGH);
          digitalWrite( i,HIGH);
          delay(200); 
     }
    }
};
