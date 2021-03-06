{
//=========Macro generated from canvas: canvas/canvas
//=========  (Wed May 13 17:26:48 2015) by ROOT version5.34/26
   TCanvas *canvas = new TCanvas("canvas", "canvas",1,1,600,576);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas->SetHighLightColor(2);
   canvas->Range(-300,-0.04866125,1700,0.194645);
   canvas->SetFillColor(0);
   canvas->SetBorderMode(0);
   canvas->SetBorderSize(2);
   canvas->SetTickx(1);
   canvas->SetTicky(1);
   canvas->SetLeftMargin(0.15);
   canvas->SetBottomMargin(0.2);
   canvas->SetFrameFillStyle(0);
   canvas->SetFrameLineWidth(3);
   canvas->SetFrameBorderMode(0);
   canvas->SetFrameFillStyle(0);
   canvas->SetFrameLineWidth(3);
   canvas->SetFrameBorderMode(0);
   
   TProfile *RecoPhoEF_p = new TProfile("RecoPhoEF_p","RecoPhoEF_p",30,0,1500,"");
   RecoPhoEF_p->SetBinEntries(6,9);
   RecoPhoEF_p->SetBinEntries(7,35);
   RecoPhoEF_p->SetBinEntries(8,83);
   RecoPhoEF_p->SetBinEntries(9,118);
   RecoPhoEF_p->SetBinEntries(10,119);
   RecoPhoEF_p->SetBinEntries(11,101);
   RecoPhoEF_p->SetBinEntries(12,96);
   RecoPhoEF_p->SetBinEntries(13,89);
   RecoPhoEF_p->SetBinEntries(14,76);
   RecoPhoEF_p->SetBinEntries(15,64);
   RecoPhoEF_p->SetBinEntries(16,41);
   RecoPhoEF_p->SetBinEntries(17,37);
   RecoPhoEF_p->SetBinEntries(18,24);
   RecoPhoEF_p->SetBinEntries(19,20);
   RecoPhoEF_p->SetBinEntries(20,14);
   RecoPhoEF_p->SetBinEntries(21,20);
   RecoPhoEF_p->SetBinEntries(22,7);
   RecoPhoEF_p->SetBinEntries(23,6);
   RecoPhoEF_p->SetBinEntries(24,8);
   RecoPhoEF_p->SetBinEntries(25,5);
   RecoPhoEF_p->SetBinEntries(26,2);
   RecoPhoEF_p->SetBinEntries(27,2);
   RecoPhoEF_p->SetBinEntries(28,2);
   RecoPhoEF_p->SetBinEntries(31,1);
   RecoPhoEF_p->SetBinContent(6,0.04913383);
   RecoPhoEF_p->SetBinContent(7,0.1882604);
   RecoPhoEF_p->SetBinContent(8,0.8590306);
   RecoPhoEF_p->SetBinContent(9,1.351924);
   RecoPhoEF_p->SetBinContent(10,1.737244);
   RecoPhoEF_p->SetBinContent(11,1.772517);
   RecoPhoEF_p->SetBinContent(12,1.805028);
   RecoPhoEF_p->SetBinContent(13,1.94255);
   RecoPhoEF_p->SetBinContent(14,2.146277);
   RecoPhoEF_p->SetBinContent(15,1.905263);
   RecoPhoEF_p->SetBinContent(16,1.503624);
   RecoPhoEF_p->SetBinContent(17,1.545428);
   RecoPhoEF_p->SetBinContent(18,1.03251);
   RecoPhoEF_p->SetBinContent(19,1.096419);
   RecoPhoEF_p->SetBinContent(20,0.7365134);
   RecoPhoEF_p->SetBinContent(21,1.176722);
   RecoPhoEF_p->SetBinContent(22,0.5292199);
   RecoPhoEF_p->SetBinContent(23,0.5179557);
   RecoPhoEF_p->SetBinContent(24,0.3437551);
   RecoPhoEF_p->SetBinContent(25,0.4412887);
   RecoPhoEF_p->SetBinContent(26,0.1168439);
   RecoPhoEF_p->SetBinContent(27,0.1864169);
   RecoPhoEF_p->SetBinContent(28,0.2081059);
   RecoPhoEF_p->SetBinContent(31,0.09772476);
   RecoPhoEF_p->SetBinError(6,0.01997699);
   RecoPhoEF_p->SetBinError(7,0.03968855);
   RecoPhoEF_p->SetBinError(8,0.1201758);
   RecoPhoEF_p->SetBinError(9,0.157874);
   RecoPhoEF_p->SetBinError(10,0.2062456);
   RecoPhoEF_p->SetBinError(11,0.218941);
   RecoPhoEF_p->SetBinError(12,0.2348598);
   RecoPhoEF_p->SetBinError(13,0.264146);
   RecoPhoEF_p->SetBinError(14,0.3186978);
   RecoPhoEF_p->SetBinError(15,0.2909619);
   RecoPhoEF_p->SetBinError(16,0.2940592);
   RecoPhoEF_p->SetBinError(17,0.3103752);
   RecoPhoEF_p->SetBinError(18,0.254881);
   RecoPhoEF_p->SetBinError(19,0.2835939);
   RecoPhoEF_p->SetBinError(20,0.2280907);
   RecoPhoEF_p->SetBinError(21,0.3129841);
   RecoPhoEF_p->SetBinError(22,0.2300047);
   RecoPhoEF_p->SetBinError(23,0.2395709);
   RecoPhoEF_p->SetBinError(24,0.1626283);
   RecoPhoEF_p->SetBinError(25,0.2075182);
   RecoPhoEF_p->SetBinError(26,0.08769519);
   RecoPhoEF_p->SetBinError(27,0.138974);
   RecoPhoEF_p->SetBinError(28,0.147154);
   RecoPhoEF_p->SetBinError(31,0.09772476);
   RecoPhoEF_p->SetMaximum(0.1703144);
   RecoPhoEF_p->SetEntries(979);
   RecoPhoEF_p->SetLineWidth(2);
   RecoPhoEF_p->GetXaxis()->SetTitle("p_{T}^{gen-Jet}");
   RecoPhoEF_p->GetXaxis()->SetRange(1,30);
   RecoPhoEF_p->GetXaxis()->SetLabelFont(22);
   RecoPhoEF_p->GetXaxis()->SetLabelSize(0.045);
   RecoPhoEF_p->GetXaxis()->SetTitleSize(0.045);
   RecoPhoEF_p->GetXaxis()->SetTitleFont(22);
   RecoPhoEF_p->GetYaxis()->SetTitle("<missing energy>");
   RecoPhoEF_p->GetYaxis()->SetLabelFont(22);
   RecoPhoEF_p->GetYaxis()->SetLabelSize(0.045);
   RecoPhoEF_p->GetYaxis()->SetTitleSize(0.045);
   RecoPhoEF_p->GetYaxis()->SetTitleOffset(1.45);
   RecoPhoEF_p->GetYaxis()->SetTitleFont(22);
   RecoPhoEF_p->GetZaxis()->SetLabelFont(42);
   RecoPhoEF_p->GetZaxis()->SetLabelSize(0.035);
   RecoPhoEF_p->GetZaxis()->SetTitleSize(0.035);
   RecoPhoEF_p->GetZaxis()->SetTitleFont(42);
   RecoPhoEF_p->Draw("");
   
   TProfile *RecoCHadEF_p = new TProfile("RecoCHadEF_p","RecoCHadEF_p",30,0,1500,"");
   RecoCHadEF_p->SetBinEntries(6,9);
   RecoCHadEF_p->SetBinEntries(7,35);
   RecoCHadEF_p->SetBinEntries(8,83);
   RecoCHadEF_p->SetBinEntries(9,118);
   RecoCHadEF_p->SetBinEntries(10,119);
   RecoCHadEF_p->SetBinEntries(11,101);
   RecoCHadEF_p->SetBinEntries(12,96);
   RecoCHadEF_p->SetBinEntries(13,89);
   RecoCHadEF_p->SetBinEntries(14,76);
   RecoCHadEF_p->SetBinEntries(15,64);
   RecoCHadEF_p->SetBinEntries(16,41);
   RecoCHadEF_p->SetBinEntries(17,35);
   RecoCHadEF_p->SetBinEntries(18,24);
   RecoCHadEF_p->SetBinEntries(19,20);
   RecoCHadEF_p->SetBinEntries(20,12);
   RecoCHadEF_p->SetBinEntries(21,16);
   RecoCHadEF_p->SetBinEntries(22,7);
   RecoCHadEF_p->SetBinEntries(23,6);
   RecoCHadEF_p->SetBinEntries(24,6);
   RecoCHadEF_p->SetBinEntries(25,5);
   RecoCHadEF_p->SetBinEntries(26,1);
   RecoCHadEF_p->SetBinEntries(27,1);
   RecoCHadEF_p->SetBinEntries(31,2);
   RecoCHadEF_p->SetBinContent(6,0.04835985);
   RecoCHadEF_p->SetBinContent(7,0.4465547);
   RecoCHadEF_p->SetBinContent(8,1.339817);
   RecoCHadEF_p->SetBinContent(9,2.824025);
   RecoCHadEF_p->SetBinContent(10,3.31128);
   RecoCHadEF_p->SetBinContent(11,3.218285);
   RecoCHadEF_p->SetBinContent(12,3.873835);
   RecoCHadEF_p->SetBinContent(13,3.965595);
   RecoCHadEF_p->SetBinContent(14,3.861153);
   RecoCHadEF_p->SetBinContent(15,3.419475);
   RecoCHadEF_p->SetBinContent(16,2.220048);
   RecoCHadEF_p->SetBinContent(17,2.080192);
   RecoCHadEF_p->SetBinContent(18,1.457001);
   RecoCHadEF_p->SetBinContent(19,1.227703);
   RecoCHadEF_p->SetBinContent(20,0.7580599);
   RecoCHadEF_p->SetBinContent(21,0.9574594);
   RecoCHadEF_p->SetBinContent(22,0.3953284);
   RecoCHadEF_p->SetBinContent(23,0.3549973);
   RecoCHadEF_p->SetBinContent(24,0.4411435);
   RecoCHadEF_p->SetBinContent(25,0.3474356);
   RecoCHadEF_p->SetBinContent(26,0.06270577);
   RecoCHadEF_p->SetBinContent(27,0.01291298);
   RecoCHadEF_p->SetBinContent(31,0.1129893);
   RecoCHadEF_p->SetBinError(6,0.01895852);
   RecoCHadEF_p->SetBinError(7,0.08340535);
   RecoCHadEF_p->SetBinError(8,0.1638277);
   RecoCHadEF_p->SetBinError(9,0.2767044);
   RecoCHadEF_p->SetBinError(10,0.3255522);
   RecoCHadEF_p->SetBinError(11,0.3434771);
   RecoCHadEF_p->SetBinError(12,0.4224587);
   RecoCHadEF_p->SetBinError(13,0.4513501);
   RecoCHadEF_p->SetBinError(14,0.4678218);
   RecoCHadEF_p->SetBinError(15,0.4538376);
   RecoCHadEF_p->SetBinError(16,0.3662803);
   RecoCHadEF_p->SetBinError(17,0.3803629);
   RecoCHadEF_p->SetBinError(18,0.3188521);
   RecoCHadEF_p->SetBinError(19,0.2921491);
   RecoCHadEF_p->SetBinError(20,0.2321293);
   RecoCHadEF_p->SetBinError(21,0.2580903);
   RecoCHadEF_p->SetBinError(22,0.1526532);
   RecoCHadEF_p->SetBinError(23,0.1654021);
   RecoCHadEF_p->SetBinError(24,0.1975929);
   RecoCHadEF_p->SetBinError(25,0.1631928);
   RecoCHadEF_p->SetBinError(26,0.06270577);
   RecoCHadEF_p->SetBinError(27,0.01291298);
   RecoCHadEF_p->SetBinError(31,0.08594034);
   RecoCHadEF_p->SetMaximum(0.1703144);
   RecoCHadEF_p->SetEntries(966);
   RecoCHadEF_p->SetLineColor(2);
   RecoCHadEF_p->SetLineWidth(2);
   RecoCHadEF_p->GetXaxis()->SetTitle("p_{T}^{gen-Jet}");
   RecoCHadEF_p->GetXaxis()->SetRange(1,30);
   RecoCHadEF_p->GetXaxis()->SetLabelFont(22);
   RecoCHadEF_p->GetXaxis()->SetLabelSize(0.045);
   RecoCHadEF_p->GetXaxis()->SetTitleSize(0.045);
   RecoCHadEF_p->GetXaxis()->SetTitleFont(22);
   RecoCHadEF_p->GetYaxis()->SetTitle("<missing energy>");
   RecoCHadEF_p->GetYaxis()->SetLabelFont(22);
   RecoCHadEF_p->GetYaxis()->SetLabelSize(0.045);
   RecoCHadEF_p->GetYaxis()->SetTitleSize(0.045);
   RecoCHadEF_p->GetYaxis()->SetTitleOffset(1.45);
   RecoCHadEF_p->GetYaxis()->SetTitleFont(22);
   RecoCHadEF_p->GetZaxis()->SetLabelFont(42);
   RecoCHadEF_p->GetZaxis()->SetLabelSize(0.035);
   RecoCHadEF_p->GetZaxis()->SetTitleSize(0.035);
   RecoCHadEF_p->GetZaxis()->SetTitleFont(42);
   RecoCHadEF_p->Draw("same");
   
   TProfile *RecoNHadEF_p = new TProfile("RecoNHadEF_p","RecoNHadEF_p",30,0,1500,"");
   RecoNHadEF_p->SetBinEntries(6,9);
   RecoNHadEF_p->SetBinEntries(7,35);
   RecoNHadEF_p->SetBinEntries(8,83);
   RecoNHadEF_p->SetBinEntries(9,118);
   RecoNHadEF_p->SetBinEntries(10,119);
   RecoNHadEF_p->SetBinEntries(11,101);
   RecoNHadEF_p->SetBinEntries(12,96);
   RecoNHadEF_p->SetBinEntries(13,89);
   RecoNHadEF_p->SetBinEntries(14,76);
   RecoNHadEF_p->SetBinEntries(15,64);
   RecoNHadEF_p->SetBinEntries(16,41);
   RecoNHadEF_p->SetBinEntries(17,37);
   RecoNHadEF_p->SetBinEntries(18,24);
   RecoNHadEF_p->SetBinEntries(19,20);
   RecoNHadEF_p->SetBinEntries(20,15);
   RecoNHadEF_p->SetBinEntries(21,20);
   RecoNHadEF_p->SetBinEntries(22,7);
   RecoNHadEF_p->SetBinEntries(23,7);
   RecoNHadEF_p->SetBinEntries(24,8);
   RecoNHadEF_p->SetBinEntries(25,6);
   RecoNHadEF_p->SetBinEntries(26,3);
   RecoNHadEF_p->SetBinEntries(27,2);
   RecoNHadEF_p->SetBinEntries(28,2);
   RecoNHadEF_p->SetBinEntries(31,2);
   RecoNHadEF_p->SetBinContent(6,0.1274269);
   RecoNHadEF_p->SetBinContent(7,0.3549551);
   RecoNHadEF_p->SetBinContent(8,1.17772);
   RecoNHadEF_p->SetBinContent(9,1.945767);
   RecoNHadEF_p->SetBinContent(10,2.509738);
   RecoNHadEF_p->SetBinContent(11,2.39197);
   RecoNHadEF_p->SetBinContent(12,2.344441);
   RecoNHadEF_p->SetBinContent(13,2.512919);
   RecoNHadEF_p->SetBinContent(14,2.266496);
   RecoNHadEF_p->SetBinContent(15,2.499673);
   RecoNHadEF_p->SetBinContent(16,1.426044);
   RecoNHadEF_p->SetBinContent(17,1.925015);
   RecoNHadEF_p->SetBinContent(18,0.9206904);
   RecoNHadEF_p->SetBinContent(19,1.09379);
   RecoNHadEF_p->SetBinContent(20,0.5691342);
   RecoNHadEF_p->SetBinContent(21,0.9516099);
   RecoNHadEF_p->SetBinContent(22,0.6224201);
   RecoNHadEF_p->SetBinContent(23,0.5586451);
   RecoNHadEF_p->SetBinContent(24,0.3442711);
   RecoNHadEF_p->SetBinContent(25,0.8515719);
   RecoNHadEF_p->SetBinContent(26,0.147766);
   RecoNHadEF_p->SetBinContent(27,0.1554331);
   RecoNHadEF_p->SetBinContent(28,0.06534088);
   RecoNHadEF_p->SetBinContent(31,0.2800522);
   RecoNHadEF_p->SetBinError(6,0.05866641);
   RecoNHadEF_p->SetBinError(7,0.08537542);
   RecoNHadEF_p->SetBinError(8,0.1800778);
   RecoNHadEF_p->SetBinError(9,0.2663772);
   RecoNHadEF_p->SetBinError(10,0.3414901);
   RecoNHadEF_p->SetBinError(11,0.3440547);
   RecoNHadEF_p->SetBinError(12,0.3662131);
   RecoNHadEF_p->SetBinError(13,0.407514);
   RecoNHadEF_p->SetBinError(14,0.3445897);
   RecoNHadEF_p->SetBinError(15,0.4799852);
   RecoNHadEF_p->SetBinError(16,0.3467817);
   RecoNHadEF_p->SetBinError(17,0.4473178);
   RecoNHadEF_p->SetBinError(18,0.2624358);
   RecoNHadEF_p->SetBinError(19,0.3633185);
   RecoNHadEF_p->SetBinError(20,0.1758564);
   RecoNHadEF_p->SetBinError(21,0.3424471);
   RecoNHadEF_p->SetBinError(22,0.3258929);
   RecoNHadEF_p->SetBinError(23,0.2941031);
   RecoNHadEF_p->SetBinError(24,0.1293434);
   RecoNHadEF_p->SetBinError(25,0.4871185);
   RecoNHadEF_p->SetBinError(26,0.09642532);
   RecoNHadEF_p->SetBinError(27,0.1273529);
   RecoNHadEF_p->SetBinError(28,0.05590066);
   RecoNHadEF_p->SetBinError(31,0.2364124);
   RecoNHadEF_p->SetMaximum(0.1703144);
   RecoNHadEF_p->SetEntries(984);
   RecoNHadEF_p->SetLineColor(4);
   RecoNHadEF_p->SetLineWidth(2);
   RecoNHadEF_p->GetXaxis()->SetTitle("p_{T}^{gen-Jet}");
   RecoNHadEF_p->GetXaxis()->SetRange(1,30);
   RecoNHadEF_p->GetXaxis()->SetLabelFont(22);
   RecoNHadEF_p->GetXaxis()->SetLabelSize(0.045);
   RecoNHadEF_p->GetXaxis()->SetTitleSize(0.045);
   RecoNHadEF_p->GetXaxis()->SetTitleFont(22);
   RecoNHadEF_p->GetYaxis()->SetTitle("<missing energy>");
   RecoNHadEF_p->GetYaxis()->SetLabelFont(22);
   RecoNHadEF_p->GetYaxis()->SetLabelSize(0.045);
   RecoNHadEF_p->GetYaxis()->SetTitleSize(0.045);
   RecoNHadEF_p->GetYaxis()->SetTitleOffset(1.45);
   RecoNHadEF_p->GetYaxis()->SetTitleFont(22);
   RecoNHadEF_p->GetZaxis()->SetLabelFont(42);
   RecoNHadEF_p->GetZaxis()->SetLabelSize(0.035);
   RecoNHadEF_p->GetZaxis()->SetTitleSize(0.035);
   RecoNHadEF_p->GetZaxis()->SetTitleFont(42);
   RecoNHadEF_p->Draw("same");
   
   TProfile *GenEM_p = new TProfile("GenEM_p","GenEM_p",30,0,1500,"");
   GenEM_p->SetBinEntries(6,9);
   GenEM_p->SetBinEntries(7,35);
   GenEM_p->SetBinEntries(8,83);
   GenEM_p->SetBinEntries(9,118);
   GenEM_p->SetBinEntries(10,119);
   GenEM_p->SetBinEntries(11,100);
   GenEM_p->SetBinEntries(12,96);
   GenEM_p->SetBinEntries(13,89);
   GenEM_p->SetBinEntries(14,76);
   GenEM_p->SetBinEntries(15,64);
   GenEM_p->SetBinEntries(16,40);
   GenEM_p->SetBinEntries(17,37);
   GenEM_p->SetBinEntries(18,24);
   GenEM_p->SetBinEntries(19,20);
   GenEM_p->SetBinEntries(20,15);
   GenEM_p->SetBinEntries(21,20);
   GenEM_p->SetBinEntries(22,6);
   GenEM_p->SetBinEntries(23,6);
   GenEM_p->SetBinEntries(24,8);
   GenEM_p->SetBinEntries(25,6);
   GenEM_p->SetBinEntries(26,3);
   GenEM_p->SetBinEntries(27,2);
   GenEM_p->SetBinEntries(28,2);
   GenEM_p->SetBinEntries(31,2);
   GenEM_p->SetBinContent(6,0.1087187);
   GenEM_p->SetBinContent(7,0.5872939);
   GenEM_p->SetBinContent(8,1.712457);
   GenEM_p->SetBinContent(9,2.667134);
   GenEM_p->SetBinContent(10,2.811103);
   GenEM_p->SetBinContent(11,2.815136);
   GenEM_p->SetBinContent(12,2.362754);
   GenEM_p->SetBinContent(13,2.91068);
   GenEM_p->SetBinContent(14,2.468692);
   GenEM_p->SetBinContent(15,2.359314);
   GenEM_p->SetBinContent(16,1.771166);
   GenEM_p->SetBinContent(17,1.363675);
   GenEM_p->SetBinContent(18,1.134207);
   GenEM_p->SetBinContent(19,0.8518288);
   GenEM_p->SetBinContent(20,0.939457);
   GenEM_p->SetBinContent(21,1.006775);
   GenEM_p->SetBinContent(22,0.3881858);
   GenEM_p->SetBinContent(23,0.3697575);
   GenEM_p->SetBinContent(24,0.5431864);
   GenEM_p->SetBinContent(25,0.2825016);
   GenEM_p->SetBinContent(26,0.1908039);
   GenEM_p->SetBinContent(27,0.1302301);
   GenEM_p->SetBinContent(28,0.1909827);
   GenEM_p->SetBinContent(31,0.1644604);
   GenEM_p->SetBinError(6,0.06528297);
   GenEM_p->SetBinError(7,0.1651576);
   GenEM_p->SetBinError(8,0.2914865);
   GenEM_p->SetBinError(9,0.3539904);
   GenEM_p->SetBinError(10,0.3604781);
   GenEM_p->SetBinError(11,0.3768924);
   GenEM_p->SetBinError(12,0.3325256);
   GenEM_p->SetBinError(13,0.3844248);
   GenEM_p->SetBinError(14,0.3681507);
   GenEM_p->SetBinError(15,0.3804488);
   GenEM_p->SetBinError(16,0.3456112);
   GenEM_p->SetBinError(17,0.2717774);
   GenEM_p->SetBinError(18,0.2807345);
   GenEM_p->SetBinError(19,0.226122);
   GenEM_p->SetBinError(20,0.2694408);
   GenEM_p->SetBinError(21,0.2692067);
   GenEM_p->SetBinError(22,0.1887467);
   GenEM_p->SetBinError(23,0.1576913);
   GenEM_p->SetBinError(24,0.2099831);
   GenEM_p->SetBinError(25,0.1605876);
   GenEM_p->SetBinError(26,0.1219757);
   GenEM_p->SetBinError(27,0.09337081);
   GenEM_p->SetBinError(28,0.1371762);
   GenEM_p->SetBinError(31,0.1490604);
   GenEM_p->SetMaximum(0.1703144);
   GenEM_p->SetEntries(980);
   GenEM_p->SetLineColor(6);
   GenEM_p->SetLineWidth(2);
   GenEM_p->GetXaxis()->SetTitle("p_{T}^{gen-Jet}");
   GenEM_p->GetXaxis()->SetRange(1,30);
   GenEM_p->GetXaxis()->SetLabelFont(22);
   GenEM_p->GetXaxis()->SetLabelSize(0.045);
   GenEM_p->GetXaxis()->SetTitleSize(0.045);
   GenEM_p->GetXaxis()->SetTitleFont(22);
   GenEM_p->GetYaxis()->SetTitle("<missing energy>");
   GenEM_p->GetYaxis()->SetLabelFont(22);
   GenEM_p->GetYaxis()->SetLabelSize(0.045);
   GenEM_p->GetYaxis()->SetTitleSize(0.045);
   GenEM_p->GetYaxis()->SetTitleOffset(1.45);
   GenEM_p->GetYaxis()->SetTitleFont(22);
   GenEM_p->GetZaxis()->SetLabelFont(42);
   GenEM_p->GetZaxis()->SetLabelSize(0.035);
   GenEM_p->GetZaxis()->SetTitleSize(0.035);
   GenEM_p->GetZaxis()->SetTitleFont(42);
   GenEM_p->Draw("same");
   
   TProfile *GenHad_p = new TProfile("GenHad_p","GenHad_p",30,0,1500,"");
   GenHad_p->SetBinEntries(6,9);
   GenHad_p->SetBinEntries(7,35);
   GenHad_p->SetBinEntries(8,83);
   GenHad_p->SetBinEntries(9,118);
   GenHad_p->SetBinEntries(10,119);
   GenHad_p->SetBinEntries(11,101);
   GenHad_p->SetBinEntries(12,91);
   GenHad_p->SetBinEntries(13,78);
   GenHad_p->SetBinEntries(14,50);
   GenHad_p->SetBinEntries(15,33);
   GenHad_p->SetBinEntries(16,22);
   GenHad_p->SetBinEntries(17,15);
   GenHad_p->SetBinEntries(18,8);
   GenHad_p->SetBinEntries(19,6);
   GenHad_p->SetBinEntries(20,7);
   GenHad_p->SetBinEntries(21,3);
   GenHad_p->SetBinEntries(22,2);
   GenHad_p->SetBinEntries(23,1);
   GenHad_p->SetBinEntries(24,2);
   GenHad_p->SetBinEntries(28,1);
   GenHad_p->SetBinContent(6,0.2257117);
   GenHad_p->SetBinContent(7,0.9681448);
   GenHad_p->SetBinContent(8,2.782549);
   GenHad_p->SetBinContent(9,4.552359);
   GenHad_p->SetBinContent(10,5.384023);
   GenHad_p->SetBinContent(11,4.684632);
   GenHad_p->SetBinContent(12,4.876511);
   GenHad_p->SetBinContent(13,4.352819);
   GenHad_p->SetBinContent(14,2.758519);
   GenHad_p->SetBinContent(15,1.771883);
   GenHad_p->SetBinContent(16,1.213228);
   GenHad_p->SetBinContent(17,0.8708798);
   GenHad_p->SetBinContent(18,0.4155232);
   GenHad_p->SetBinContent(19,0.3115673);
   GenHad_p->SetBinContent(20,0.3970099);
   GenHad_p->SetBinContent(21,0.1902237);
   GenHad_p->SetBinContent(22,0.1130271);
   GenHad_p->SetBinContent(23,0.05930312);
   GenHad_p->SetBinContent(24,0.08140742);
   GenHad_p->SetBinContent(28,0.07155437);
   GenHad_p->SetBinError(6,0.08746432);
   GenHad_p->SetBinError(7,0.1837726);
   GenHad_p->SetBinError(8,0.338996);
   GenHad_p->SetBinError(9,0.4461227);
   GenHad_p->SetBinError(10,0.5216474);
   GenHad_p->SetBinError(11,0.5002545);
   GenHad_p->SetBinError(12,0.5390457);
   GenHad_p->SetBinError(13,0.5120169);
   GenHad_p->SetBinError(14,0.4089065);
   GenHad_p->SetBinError(15,0.3287053);
   GenHad_p->SetBinError(16,0.2713125);
   GenHad_p->SetBinError(17,0.2364755);
   GenHad_p->SetBinError(18,0.1595736);
   GenHad_p->SetBinError(19,0.1321571);
   GenHad_p->SetBinError(20,0.157326);
   GenHad_p->SetBinError(21,0.1112744);
   GenHad_p->SetBinError(22,0.08055482);
   GenHad_p->SetBinError(23,0.05930312);
   GenHad_p->SetBinError(24,0.05799699);
   GenHad_p->SetBinError(28,0.07155437);
   GenHad_p->SetMaximum(0.1703144);
   GenHad_p->SetEntries(784);
   GenHad_p->SetLineColor(5);
   GenHad_p->SetLineWidth(2);
   GenHad_p->GetXaxis()->SetTitle("p_{T}^{gen-Jet}");
   GenHad_p->GetXaxis()->SetRange(1,30);
   GenHad_p->GetXaxis()->SetLabelFont(22);
   GenHad_p->GetXaxis()->SetLabelSize(0.045);
   GenHad_p->GetXaxis()->SetTitleSize(0.045);
   GenHad_p->GetXaxis()->SetTitleFont(22);
   GenHad_p->GetYaxis()->SetTitle("<missing energy>");
   GenHad_p->GetYaxis()->SetLabelFont(22);
   GenHad_p->GetYaxis()->SetLabelSize(0.045);
   GenHad_p->GetYaxis()->SetTitleSize(0.045);
   GenHad_p->GetYaxis()->SetTitleOffset(1.45);
   GenHad_p->GetYaxis()->SetTitleFont(22);
   GenHad_p->GetZaxis()->SetLabelFont(42);
   GenHad_p->GetZaxis()->SetLabelSize(0.035);
   GenHad_p->GetZaxis()->SetTitleSize(0.035);
   GenHad_p->GetZaxis()->SetTitleFont(42);
   GenHad_p->Draw("same");
   
   TLegend *leg = new TLegend(0.72,0.72,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(22);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("RecoPhoEF_p","E_{#gamma}^{rec}","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(22);
   entry=leg->AddEntry("RecoCHadEF_p","E_{h-}^{rec}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(22);
   entry=leg->AddEntry("RecoNHadEF_p","E_{h0}^{rec}","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(22);
   entry=leg->AddEntry("GenEM_p","E_{EM}^{gen}","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(22);
   entry=leg->AddEntry("GenHad_p","E_{Had}^{gen}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(22);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.1577181,0.9,0.9580537,0.96,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(22);
   pt->SetTextSize(0.045);
   TText *text = pt->AddText(0.01,0.5,"CMS Simulation");
   text = pt->AddText(0.4,0.5,"#sqrt{s} = 13 TeV");
   pt->Draw();
   canvas->Modified();
   canvas->cd();
   canvas->SetSelected(canvas);
}
