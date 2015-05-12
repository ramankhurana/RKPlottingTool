#ifndef HistoInfo_H
#define HistoInfo_H

#include <iostream>
#include "CommonFilesToInclude.h"

class HistoInfo {
 public :
  HistoInfo(){
    histname.clear();
    XRange.clear();
    YRange.clear();
    legpos.clear();
    legend.clear();
    color.clear();
    XAXISTitle="";
    YAXISTitle="";
    ReBin=1;
  }
  
  std::vector<std::string> histname;
  std::vector<std::string> legend;
  std::vector<int> color;
  std::vector<int> fillStyle;
  
  std::vector<double> XRange;
  std::vector<double> YRange;
  std::vector<double> legpos;
  std::string XAXISTitle, YAXISTitle;
  std::string plotname;
  int ReBin ;
  int isfillColor;
  int SetLogy;
  ~HistoInfo(){};
  
};
#endif 
