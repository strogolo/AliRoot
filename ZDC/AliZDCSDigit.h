#ifndef ALIZDCSDIGIT_H
#define ALIZDCSDIGIT_H
/* Copyright(c) 1998-1999, ALICE Experiment at CERN, All rights reserved. *
 * See cxx source for full Copyright notice                               */

/* $Id$ */

///_________________________________________________________________________
///
///
///   ZDC summable digit = Cerenkov light for each PM 
///
///_________________________________________________________________________

#include <TObject.h>

class AliZDCSDigit : public TObject {

 public:
  
  AliZDCSDigit() ;
  AliZDCSDigit(Int_t* sector, Float_t lightPM);
  virtual ~AliZDCSDigit() {}

  // Getters 
  Int_t   GetSector(Int_t i) const {return fSector[i];}
  Float_t GetLightPM()       const {return fLightPM;}

 protected:

  //Data members
  Int_t   fSector[2];         // Detector and tower in which light is produced
  Float_t fLightPM;           // Cerenkov light seen by the PM

  ClassDef(AliZDCSDigit, 1)   // Summable digit in ZDC 

} ;

#endif //  ALIZDCSDIGIT_H

