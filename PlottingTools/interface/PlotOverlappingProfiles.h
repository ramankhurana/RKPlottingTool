#ifndef PlotOverlappingProfiles_H
#define PlotOverlappingProfiles_H

#include <iostream>
#include "CommonFilesToInclude.h"
#include "FileInfo.h"
#include "FileInfo.h"
#include "HistoInfo.h"

class PlotOverlappingProfiles {
 public :
  
  PlotOverlappingProfiles(){};
  void DrawHistograms(std::vector<FileInfo> fobj, std::vector<HistoInfo> hobjVec);
  ~PlotOverlappingProfiles(){};
  
};
#endif 
