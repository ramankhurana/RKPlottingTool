##
./saveplots.exe MonoHiggsRunCards/RootFileInfo_JetNoCut.txt MonoHiggsRunCards/HistogramInfo_JetNoCut.txt
mv plots plots_JetsNoCut
mkdir plots
##
./saveplots.exe MonoHiggsRunCards/RootFileInfo_METNoCut.txt MonoHiggsRunCards/HistogramInfo_METNoCut.txt
mv plots plots_METNoCut
mkdir plots 
##
./saveplots.exe MonoHiggsRunCards/RootFileInfo_pTEtaBTag.txt MonoHiggsRunCards/HistogramInfo_JetNoCut.txt ## this is same as no cuts coz histo names are same 
mv plots plots_JetpTEtaBTag
mkdir plots
##
./saveplots.exe MonoHiggsRunCards/RootFileInfo_DiJetNotCut.txt MonoHiggsRunCards/HistogramInfo_DiJetNotCut.txt
mv plots plots_DiJetNotCut
mkdir plots 
##
./saveplots.exe MonoHiggsRunCards/RootFileInfo_JetMETNoCuts.txt MonoHiggsRunCards/HistogramInfo_JetMETNoCuts.txt
mv plots plots_JetMETNoCuts 
mkdir plots
##
./saveplots.exe MonoHiggsRunCards/RootFileInfo_DiJetMETNoCuts.txt MonoHiggsRunCards/HistogramInfo_DiJetMETNoCuts.txt
mv plots plots_DiJetMETNoCuts
mkdir plots
##
./saveplots.exe MonoHiggsRunCards/RootFileInfo_CutFlowAndEachCut.txt MonoHiggsRunCards/HistogramInfo_CutFlowAndEachCut.txt 
mv plots plots_CutFlowAndEachCut
mkdir plots 
##
./saveplots.exe MonoHiggsRunCards/RootFileInfo_NMinusOne.txt MonoHiggsRunCards/HistogramInfo_NMinusOne.txt
mv plots plots_NMinusOne
mv plots* MonoHiggsPlots
mkdir plots 