// $Id$

/**************************************************************************
 * Copyright(c) 1998-1999, ALICE Experiment at CERN, All rights reserved. *
 *                                                                        *
 * Authors: Matthias Richter <Matthias.Richter@ift.uib.no>                *
 *          for The ALICE Off-line Project.                               *
 *                                                                        *
 * Permission to use, copy, modify and distribute this software and its   *
 * documentation strictly for non-commercial purposes is hereby granted   *
 * without fee, provided that the above copyright notice appears in all   *
 * copies and that both the copyright notice and this permission notice   *
 * appear in the supporting documentation. The authors make no claims     *
 * about the suitability of this software for any purpose. It is          *
 * provided "as is" without express or implied warranty.                  *
 **************************************************************************/

/** @file   AliHLTOfflineDataSink.cxx
    @author Matthias Richter
    @date   
    @brief  AliRoot data sink component base class.
*/

#include "AliHLTOfflineDataSink.h"

/** ROOT macro for the implementation of ROOT specific class methods */
ClassImp(AliHLTOfflineDataSink)

AliHLTOfflineDataSink::AliHLTOfflineDataSink()
{
  // see header file for class documentation
  // or
  // refer to README to build package
  // or
  // visit http://web.ift.uib.no/~kjeks/doc/alice-hlt
}

AliHLTOfflineDataSink::AliHLTOfflineDataSink(const AliHLTOfflineDataSink&)
   :
   AliHLTDataSink(),
   AliHLTOfflineInterface()
{
  // see header file for class documentation
  HLTFatal("copy constructor untested");
  Register(this);
}

AliHLTOfflineDataSink& AliHLTOfflineDataSink::operator=(const AliHLTOfflineDataSink&)
{ 
  // see header file for class documentation
  HLTFatal("assignment operator untested");
  return *this;
}

AliHLTOfflineDataSink::~AliHLTOfflineDataSink()
{
  // see header file for class documentation
  Unregister(this);
}
