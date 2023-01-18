#include <IRremote.h>

IRrecv irrecv(11);

decode_results result;

void setup(){
Serial.begin(9600);
pinMode (11, OUTPUT);
irrecv.enableIRIn();
}

void loop(){
if (irrecv.decode(&results)) {
Serial.println(results.value, DEC);
irrecv.resume();
}
}
