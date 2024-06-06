<p>int Sinput = A1;        
{
  
</p><p>pinMode(Sinput, INPUT); 
pinMode(Buz, OUTPUT); 
void loop()  
{
 
   
    if(digitalRead(Sinput)==LOW)
     {
       delay (2000);   
  
       digitalWrite(Buz, HIGH);
     }
     else
      {
   
        if(digitalRead(Sinput)== HIGH)
            {
              
               digitalWrite(Buz, LOW);
           }
 
      }
   }</p>
