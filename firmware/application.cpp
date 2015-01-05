/*
 * This is a minimal example for using a relay for controlling appliances.
 * The idea is to control a set of lights and maybe some music to set some mood
 * but this project can be used for anything, really.
 */

// name the pins
int dev1 = D0;
int dev2 = D1;
int dev3 = D2;
int dev4 = D3;

// we set all the devices states to 0 (off)
int dev1_state = 0;
int dev2_state = 0;
int dev3_state = 0;
int dev4_state = 0;

void setup() 
{
    Spark.function("switcher", switcher); // this makes your function public
    
    // set the pins to output mode
    pinMode(dev1, OUTPUT); 
    pinMode(dev2, OUTPUT);
    pinMode(dev3, OUTPUT);
    pinMode(dev4, OUTPUT);
}

void loop()
{
  // this loops forever
}

// this is the function that we're going to call from our web panel
int switcher(String command)
{
  if(command == "dev1")
  {
    digitalWrite(dev1, (dev1_state) ? HIGH : LOW);
    dev1_state = !dev1_state;
    return 1;
  } else if(command == "dev2")
  {
    digitalWrite(dev2, (dev2_state) ? HIGH : LOW);
    dev2_state = !dev2_state;
    return 1;
  } else if(command == "dev3")
  {
    digitalWrite(dev3, (dev3_state) ? HIGH : LOW);
    dev3_state = !dev3_state;
    return 1;
  } else if(command == "dev4")
  {
    digitalWrite(dev4, (dev4_state) ? HIGH : LOW);
    dev4_state = !dev4_state;
    return 1;
  } else if(command == "turnoff")
  {
    digitalWrite(dev1, LOW); 
    digitalWrite(dev2, LOW); 
    digitalWrite(dev3, LOW); 
    digitalWrite(dev4, LOW); 
    return 1;
  } else if(command == "turnon")
  {
    digitalWrite(dev1, HIGH); 
    digitalWrite(dev2, HIGH); 
    digitalWrite(dev3, HIGH); 
    digitalWrite(dev4, HIGH); 
    return 1;
  }
  else return -1;
}