int t = 20;
boolean passe = false;

void style2()
{
  //setColor(0, 0, 0);
  
  if(passe==false)
  {
    for(r=0;r<=255;r++)
    {
      setColor1(r,g,b);
      delay(t);
    }
    passe=true;
  }
  /*else
  {
    for(r=0;r<=255;r++)
    {
      setColor1(r,g,b);
      delay(t);
    }
  }*/
  
  for(g=0;g<=255;g++)
  {
    if(r>0)
    {
      r--;
    }
    setColor1(r,g,b);
    delay(t);
  }
  
  for(b=0;b<=255;b++)
  {
    if(g>0)
    {
      g--;
    }
    setColor1(r,g,b);
    delay(t);
  }
  
  for(b=255;b>0;b--)
  {
    if(r<=255)
    {
      r++;
    }
    setColor1(r,g,b);
    delay(t);
  }
  
  r=255;
  g=b=0;
  setColor1(r,g,b);
  delay(t*0.5);
  
}
