#include "LedControl.h"
#include "binary.h"

LedControl lc=LedControl(3,5,4,1);
const int pingPin = 7;
const int echoPin = 8;

int smooth = 0;
int value_array[20];
int average_sum = 0;

 long duration;
 int distance;
int number_display = 0;
int first_num = 0;
int second_num = 0;


 
void setup() {
  // put your setup code here, to run once:
lc.shutdown(0,false);
  // Set brightness to a medium value
  lc.setIntensity(0,8);
  // Clear the display
  lc.clearDisplay(0);

 Serial.begin(9600);
    pinMode(pingPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.01330 / 2;
    
    //Serial.println(distance);

  if (smooth < 20) {
    value_array[smooth] = distance;
    smooth++;
    //Serial.print("hi");
  }
  else {
    
    for (int i = 0; i < 20; i++) {
      average_sum = average_sum + value_array[i];
    }
    number_display = average_sum/20;
    Serial.print(" Distance: "); 
    Serial.println(number_display);
    average_sum = 0;
    smooth = 0;
    value_array[20];
  
  
  //first_num = number_display/10;
  second_num = number_display%10;

  if (second_num<10){
    second_num=0;
  }

  
  if (number_display < 10) {
    zero(0);
    
    
        if (number_display == 0) {
          zero(5);
          
        }
      
        else if (number_display == 1){
          one(5);
          Serial.println("1");
        }
      
        else if (number_display == 2){
          two(5);
          Serial.println("1");
        }
      
        else if (number_display == 3){
          three(5);
          Serial.println("1");
        }
      
        else if (number_display == 4){
          four(5);
          Serial.println("1");
        }
      
        else if (number_display == 5){
          five(5);
          Serial.println("1");
        }
      
        else if (number_display == 6){
          six(5);
          Serial.println("6");
        }
      
        else if (number_display == 7){
          seven(5);
          Serial.println("1");
        }
      
        else if (number_display == 8){
          eight(5);
          Serial.println("8");
        }
      
        else if (number_display == 9){
          nine(5);
          Serial.println("9");
        }
  }



  else if (number_display < 20){
    one(0);
        if (second_num == 0) {
          zero(5);
        }
      
        else if (second_num == 1){
          one(5);
        }
      
        else if (second_num == 2){
          two(5);
        }
      
        else if (second_num == 3){
          three(5);
        }
      
        else if (second_num == 4){
          four(5);
        }
      
        else if (second_num == 5){
          five(5);
        }
      
        else if (second_num == 6){
          six(5);
        }
      
        else if (second_num == 7){
          seven(5);
        }
      
        else if (second_num == 8){
          eight(5);
        }
      
        else if (second_num == 9){
          nine(5);
        }
  }

  else if (number_display < 30){
    two(0);
        if (second_num == 0) {
          zero(5);
        }
      
        else if (second_num == 1){
          one(5);
        }
      
        else if (second_num == 2){
          two(5);
        }
      
        else if (second_num == 3){
          three(5);
        }
      
        else if (second_num == 4){
          four(5);
        }
      
        else if (second_num == 5){
          five(5);
        }
      
        else if (second_num == 6){
          six(5);
        }
      
        else if (second_num == 7){
          seven(5);
        }
      
        else if (second_num == 8){
          eight(5);
        }
      
        else if (second_num == 9){
          nine(5);
        }
  }

  else if (number_display < 40){
    three(0);
        if (second_num == 0) {
          zero(5);
        }
      
        else if (second_num == 1){
          one(5);
        }
      
        else if (second_num == 2){
          two(5);
        }
      
        else if (second_num == 3){
          three(5);
        }
      
        else if (second_num == 4){
          four(5);
        }
      
        else if (second_num == 5){
          five(5);
        }
      
        else if (second_num == 6){
          six(5);
        }
      
        else if (second_num == 7){
          seven(5);
        }
      
        else if (second_num == 8){
          eight(5);
        }
      
        else if (second_num == 9){
          nine(5);
        }
  }

  else if (number_display < 50){
    four(0);
        if (second_num == 0) {
          zero(5);
        }
      
        else if (second_num == 1){
          one(5);
        }
      
        else if (second_num == 2){
          two(5);
        }
      
        else if (second_num == 3){
          three(5);
        }
      
        else if (second_num == 4){
          four(5);
        }
      
        else if (second_num == 5){
          five(5);
        }
      
        else if (second_num == 6){
          six(5);
        }
      
        else if (second_num == 7){
          seven(5);
        }
      
        else if (second_num == 8){
          eight(5);
        }
      
        else if (second_num == 9){
          nine(5);
        }
  }

  else if (number_display < 60){
    five(0);
        if (second_num == 0) {
          zero(5);
        }
      
        else if (second_num == 1){
          one(5);
        }
      
        else if (second_num == 2){
          two(5);
        }
      
        else if (second_num == 3){
          three(5);
        }
      
        else if (second_num == 4){
          four(5);
        }
      
        else if (second_num == 5){
          five(5);
        }
      
        else if (second_num == 6){
          six(5);
        }
      
        else if (second_num == 7){
          seven(5);
        }
      
        else if (second_num == 8){
          eight(5);
        }
      
        else if (second_num == 9){
          nine(5);
        }
  }

  else if (number_display < 70){
    six(0);
        if (second_num == 0) {
          zero(5);
        }
      
        else if (second_num == 1){
          one(5);
        }
      
        else if (second_num == 2){
          two(5);
        }
      
        else if (second_num == 3){
          three(5);
        }
      
        else if (second_num == 4){
          four(5);
        }
      
        else if (second_num == 5){
          five(5);
        }
      
        else if (second_num == 6){
          six(5);
        }
      
        else if (second_num == 7){
          seven(5);
        }
      
        else if (second_num == 8){
          eight(5);
        }
      
        else if (second_num == 9){
          nine(5);
        }
  }

  else if (number_display < 80){
    seven(0);
        if (second_num == 0) {
          zero(5);
        }
      
        else if (second_num == 1){
          one(5);
        }
      
        else if (second_num == 2){
          two(5);
        }
      
        else if (second_num == 3){
          three(5);
        }
      
        else if (second_num == 4){
          four(5);
        }
      
        else if (second_num == 5){
          five(5);
        }
      
        else if (second_num == 6){
          six(5);
        }
      
        else if (second_num == 7){
          seven(5);
        }
      
        else if (second_num == 8){
          eight(5);
        }
      
        else if (second_num == 9){
          nine(5);
        }
  }

  else if (number_display < 90){
    eight(0);
         if (second_num == 0) {
          zero(5);
        }
      
        else if (second_num == 1){
          one(5);
        }
      
        else if (second_num == 2){
          two(5);
        }
      
        else if (second_num == 3){
          three(5);
        }
      
        else if (second_num == 4){
          four(5);
        }
      
        else if (second_num == 5){
          five(5);
        }
      
        else if (second_num == 6){
          six(5);
        }
      
        else if (second_num == 7){
          seven(5);
        }
      
        else if (second_num == 8){
          eight(5);
        }
      
        else if (second_num == 9){
          nine(5);
        }
  }

  else if (number_display < 100){
    nine(0);
        if (second_num == 0) {
          zero(5);
        }
      
        else if (second_num == 1){
          one(5);
        }
      
        else if (second_num == 2){
          two(5);
        }
      
        else if (second_num == 3){
          three(5);
        }
      
        else if (second_num == 4){
          four(5);
        }
      
        else if (second_num == 5){
          five(5);
        }
      
        else if (second_num == 6){
          six(5);
        }
      
        else if (second_num == 7){
          seven(5);
        }
      
        else if (second_num == 8){
          eight(5);
        }
      
        else if (second_num == 9){
          nine(5);
        }
       
  }
  delay(1000);
  lc.clearDisplay(0);
  second_num = 0;
  number_display = 0;
  }
  
delay(50);


}

void zero(int x){
  lc.setLed(0, 0, 0+x, 1);
  lc.setLed(0, 0, 1+x, 1);
  lc.setLed(0, 0, 2+x, 1);

  lc.setLed(0, 4, 0+x, 1);
  lc.setLed(0, 4, 1+x, 1);
  lc.setLed(0, 4, 2+x, 1);

  lc.setLed(0, 1, 0+x, 1);
  lc.setLed(0, 2, 0+x, 1);
  lc.setLed(0, 3, 0+x, 1);

  lc.setLed(0, 3, 2+x, 1);
  lc.setLed(0, 2, 2+x, 1);
  lc.setLed(0, 1, 2+x, 1);


}

void one(int x){
  lc.setLed(0, 0, 2+x, 1);
  lc.setLed(0, 3, 2+x, 1);
  lc.setLed(0, 2, 2+x, 1);
  lc.setLed(0, 1, 2+x, 1);
 lc.setLed(0, 4, 2+x, 1);
}

void two(int x){
  lc.setLed(0, 0, 0+x, 1);
  lc.setLed(0, 0, 1+x, 1);
  lc.setLed(0, 0, 2+x, 1);

  lc.setLed(0, 4, 0+x, 1);
  lc.setLed(0, 4, 1+x, 1);
  lc.setLed(0, 4, 2+x, 1);

  lc.setLed(0, 2, 1+x, 1);
  lc.setLed(0, 2, 0+x, 1);
  lc.setLed(0, 3, 0+x, 1);

  lc.setLed(0, 2, 2+x, 1);
  lc.setLed(0, 1, 2+x, 1);
  
}

void three(int x){
  lc.setLed(0, 0, 0+x, 1);
  lc.setLed(0, 0, 1+x, 1);
  lc.setLed(0, 0, 2+x, 1);

  lc.setLed(0, 4, 0+x, 1);
  lc.setLed(0, 4, 1+x, 1);
  lc.setLed(0, 4, 2+x, 1);

  lc.setLed(0, 2, 1+x, 1);
  lc.setLed(0, 2, 0+x, 1);
  lc.setLed(0, 3, 2+x, 1);

  lc.setLed(0, 2, 2+x, 1);
  lc.setLed(0, 1, 2+x, 1);
  
}

void four(int x){
  lc.setLed(0, 0, 2+x, 1);
  lc.setLed(0, 3, 2+x, 1);
  lc.setLed(0, 2, 2+x, 1);
  lc.setLed(0, 1, 2+x, 1);
 lc.setLed(0, 4, 2+x, 1);

 lc.setLed(0, 2, 1+x, 1);
 lc.setLed(0, 2, 0+x, 1);
  lc.setLed(0, 1, 0+x, 1);
   lc.setLed(0, 0, 0+x, 1);
 
}

void five(int x){
  lc.setLed(0, 0, 0+x, 1);
  lc.setLed(0, 0, 1+x, 1);
  lc.setLed(0, 0, 2+x, 1);

  lc.setLed(0, 4, 0+x, 1);
  lc.setLed(0, 4, 1+x, 1);
  lc.setLed(0, 4, 2+x, 1);

  lc.setLed(0, 1, 0+x, 1);
  lc.setLed(0, 2, 0+x, 1);
  lc.setLed(0, 2, 1+x, 1);

  lc.setLed(0, 3, 2+x, 1);
  lc.setLed(0, 2, 2+x, 1);

}

void six(int x){
  lc.setLed(0, 0, 0+x, 1);
  lc.setLed(0, 0, 1+x, 1);
  lc.setLed(0, 0, 2+x, 1);

  lc.setLed(0, 4, 0+x, 1);
  lc.setLed(0, 4, 1+x, 1);
  lc.setLed(0, 4, 2+x, 1);

  lc.setLed(0, 1, 0+x, 1);
  lc.setLed(0, 2, 0+x, 1);
  lc.setLed(0, 2, 1+x, 1);

  lc.setLed(0, 3, 2+x, 1);
  lc.setLed(0, 2, 2+x, 1);

  lc.setLed(0, 3, 0+x, 1);//extra

}

void seven(int x){
  lc.setLed(0, 0, 2+x, 1);
  lc.setLed(0, 3, 2+x, 1);
  lc.setLed(0, 2, 2+x, 1);
  lc.setLed(0, 1, 2+x, 1);
 lc.setLed(0, 4, 2+x, 1);

  lc.setLed(0, 0, 0+x, 1);
   lc.setLed(0, 0, 1+x, 1);
}

void eight(int x){
  lc.setLed(0, 0, 0+x, 1);
  lc.setLed(0, 0, 1+x, 1);
  lc.setLed(0, 0, 2+x, 1);

  lc.setLed(0, 4, 0+x, 1);
  lc.setLed(0, 4, 1+x, 1);
  lc.setLed(0, 4, 2+x, 1);

  lc.setLed(0, 1, 0+x, 1);
  lc.setLed(0, 2, 0+x, 1);
  lc.setLed(0, 3, 0+x, 1);

  lc.setLed(0, 3, 2+x, 1);
  lc.setLed(0, 2, 2+x, 1);
  lc.setLed(0, 1, 2+x, 1);

  lc.setLed(0, 2, 1+x, 1);
}

void nine(int x){
   lc.setLed(0, 0, 0+x, 1);
  lc.setLed(0, 0, 1+x, 1);
  lc.setLed(0, 0, 2+x, 1);

  //lc.setLed(0, 4, 0+x, 1);
 // lc.setLed(0, 4, 1+x, 1);
  lc.setLed(0, 4, 2+x, 1);

  lc.setLed(0, 1, 0+x, 1);
  lc.setLed(0, 2, 0+x, 1);
  //lc.setLed(0, 3, 0, 1);

  lc.setLed(0, 3, 2+x, 1);
  lc.setLed(0, 2, 2+x, 1);
  lc.setLed(0, 1, 2+x, 1);

  lc.setLed(0, 2, 1+x, 1);
}
