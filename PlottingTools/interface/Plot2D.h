#ifndef Plot2D_H
#define Plot2D_H

#include <iostream>
#include "CommonFilesToInclude.h"
#include "FileInfo.h"
#include "FileInfo.h"
#include "HistoInfo.h"

class Plot2D {
 public :
  
  Plot2D(){};
  void DrawHistograms(std::vector<FileInfo> fobj, std::vector<HistoInfo> hobjVec);
  ~Plot2D(){};
  
};
#endif 
