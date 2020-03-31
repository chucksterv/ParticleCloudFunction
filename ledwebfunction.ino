int led_red = D4;
int led_yellow = D5;
int led_green = D6;

void setup() {
    
    pinMode(led_red, OUTPUT);
    pinMode(led_yellow, OUTPUT);
    pinMode(led_green, OUTPUT);
    
    Particle.function("traffic_light", lightToggle);
    
    digitalWrite(led_red, LOW);
    digitalWrite(led_yellow, LOW);
    digitalWrite(led_green, LOW);

}

void loop() {
}    


int lightToggle(String command)
{
    if (command == "red")
    {
        digitalWrite(led_red, HIGH);
        digitalWrite(led_yellow, LOW);
        digitalWrite(led_green, LOW);
    }
    else if (command == "yellow")
    {
        digitalWrite(led_red, LOW);
        digitalWrite(led_yellow, HIGH);
        digitalWrite(led_green, LOW);
    }
    else if (command == "green")
    {
        digitalWrite(led_red, LOW);
        digitalWrite(led_yellow, LOW);
        digitalWrite(led_green, HIGH);
    }
    else
    {
        return -1;
    }
}
