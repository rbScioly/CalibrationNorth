int Vo = 5, R1 = 10000, R2;
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Vo = analogRead(A0);
    R2 = R1 * (1023.0 / (float)Vo - 1.0);
    Serial.println("Temp = ");
    Serial.println(R2);
    Serial.println(" F");
}