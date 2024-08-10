int buzzer = 11; //pin of buzzer 
#define do_ 261       //
#define re 294        //
#define mi 329        //
#define fa 349        //    notes
#define sol 392       //
#define la 440        //
#define si 493        //
#define DO_ 523       //
void setup(){
  pinMode(buzzer,OUTPUT);
}
void loop(){
 tone(buzzer, sol);
    delay(800);
    noTone(buzzer);
    tone(buzzer, sol);
    delay(200);
    noTone(buzzer);
    delay(50);
    tone(buzzer, sol);
    delay(200);
    noTone(buzzer);
    delay(50);
    tone(buzzer, sol);
    delay(200);
    noTone(buzzer);
    delay(50);
    tone(buzzer, la);
    delay(200);
    noTone(buzzer);
    delay(50);
    tone(buzzer, sol);
    delay(200);    
    noTone(buzzer);
    delay(50);    
    tone(buzzer, fa);
    delay(200);  
    noTone(buzzer);
    delay(50);
    tone(buzzer, mi);
    delay(800);   
    noTone(buzzer);
    delay(200);
    tone(buzzer, sol);
    delay(400); 
    noTone(buzzer);
    delay(50);
    tone(buzzer, do_);
    delay(400);   
    noTone(buzzer);
    delay(50);
    tone(buzzer, la);
    delay(200); 
    noTone(buzzer);
    delay(50);
    tone(buzzer, si);
    delay(400);  
    noTone(buzzer);
    delay(50);
    tone(buzzer, sol);
    delay(400);    
    noTone(buzzer);
    delay(50);
    tone(buzzer, fa);
    delay(600);  
    noTone(buzzer);
    delay(250);
    tone(buzzer, fa);
    delay(400);    
    noTone(buzzer);
    delay(50);  
    tone(buzzer, fa);
    delay(200);
    noTone(buzzer);
    delay(50);
    tone(buzzer, fa);
    delay(200);  
    noTone(buzzer);
    delay(50);
    tone(buzzer, fa);
    delay(200);  
    noTone(buzzer);
    delay(50);
    tone(buzzer, sol);
    delay(200);    
    noTone(buzzer);
    delay(50);
    tone(buzzer, fa);
    delay(200);  
    noTone(buzzer);
    delay(50);
    tone(buzzer, mi);
    delay(200);  
    noTone(buzzer);
    delay(50);
    tone(buzzer, re);
    delay(600);
    noTone(buzzer);
    delay(50);
    tone(buzzer, sol);
    delay(600);    
    noTone(buzzer);
    delay(50);
    tone(buzzer, si);
    delay(400); 
    noTone(buzzer);
    delay(50);
    tone(buzzer, sol);
    delay(200);   
    noTone(buzzer);
    delay(50);
    tone(buzzer, la);
    delay(400);
    noTone(buzzer);
    delay(50);
    tone(buzzer, si);
    delay(400);
    noTone(buzzer);
    delay(50);
    tone(buzzer, do_);
    delay(600);   
    noTone(buzzer);
    delay(50);   
    delay(300);   

noTone(buzzer);
delay(500);
}