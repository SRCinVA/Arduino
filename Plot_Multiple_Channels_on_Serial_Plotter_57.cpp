float sinVal;
float cosVal;
float j;
//float parab;

void setup() {
Serial.begin(9600);
}

void loop() {
    for(j=0,j<=2*3.14159265;j=j+.01){ //notice the tiny increment; this is to help create a smooth curve.
        sinVal=sin(j);
        cosVal=cos(j); // multiplying this would cause a much higher wave period.
        Serial.print(sinVal);
        Serial.print(",");     // use a de-limiter, just to make it easier to read.
    }
}

// Paul doesn't like how the resulting curves autoscale :)