bool bpmIsOk(float bpm);
bool spo2IsOk(float spo2);
bool respRateIsOk(float respRate);
bool IsResultOkay(float val, float min_lim, float max_lim);


bool IsResultOkay(float val, float min_lim, float max_lim)
{
 bool retVal = true;
 if((val < min_lim) || (val > max_lim))
 {
   retVal = false;
 }
  return retVal;
}

bool vitalsAreOk(float bpm, float spo2,float respRate)
{
  return (bpmIsOk(bpm) && spo2RetVal(spo2) && respRateRetVal(respRate));
}

bool bpmIsOk(float bpm) {
  IsResultOkay(bpm, 70, 150);
}

bool spo2IsOk(float spo2) {
  IsResultOkay(spo2, 80, 150);
}

bool respRateIsOk(float respRate) {
  IsResultOkay(respRate, 30, 60);
}
