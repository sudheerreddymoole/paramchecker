
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  int i =0,j=0;
  if(bpm < 70)
    i++;
  if(bpm > 150) 
    i++;
  if(i==2)
    return false;
  else if(spo2 < 80) {
    return false;
  }
  
  if(respRate < 30)
    j++;
  if(respRate > 60)
    j++;
  if(j == 2)
  return false;
  
  return true;
}
