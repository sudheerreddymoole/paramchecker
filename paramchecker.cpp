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
  bool bpmRetVal = bpmIsOk(bpm);
  bool spo2RetVal = spo2IsOk(spo2);
  bool respRateRetVal = respRateIsOk(respRate);
  return (bpmIsOk(bpm) && spo2RetVal(spo2) && respRateRetVal(respRate));
}

bool bpmIsOk(float bpm) {
  isReadingsOk(bpm, 70, 150);
}

bool spo2IsOk(float spo2) {
  isReadingsOk(spo2, 80, 150);
}

bool respRateIsOk(float respRate) {
  isReadingsOk(respRate, 30, 60);
}
