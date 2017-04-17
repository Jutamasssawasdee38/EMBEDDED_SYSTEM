int led1 = A1;
int led2 = A2;
void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
}
void loop() {

Led1Delay1Sec();
Led1Delay1Sec();

Led1Delay05Sec();
Led1Delay05Sec();

delay(2000);
//2
LedDelay1Sec();
LedDelay1Sec();
//5
LedDelay05Sec();
LedDelay05Sec();
LedDelay05Sec();
LedDelay05Sec();
LedDelay05Sec();
//3
LedDelay1Sec();
LedDelay1Sec();
LedDelay1Sec();

}
void LedDelay1Sec()
{
digitalWrite(led2, 1);
delay(1000);
digitalWrite(led2, 0);
delay(1000);
}
void LedDelay05Sec()
{
digitalWrite(led2, 1);
delay(500);
digitalWrite(led2, 0);
delay(500);
}
void Led1Delay1Sec()
{
digitalWrite(led1, 1);
delay(1000);
digitalWrite(led1, 0);
delay(1000);
}
void Led1Delay05Sec()
{
digitalWrite(led1, 1);
delay(500);
digitalWrite(led1, 0);
delay(500);
}

