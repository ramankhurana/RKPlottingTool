{
//=========Macro generated from canvas: canvas/canvas
//=========  (Wed May 13 17:26:48 2015) by ROOT version5.34/26
   TCanvas *canvas = new TCanvas("canvas", "canvas",0,0,600,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas->SetHighLightColor(2);
   canvas->Range(-300,-0.06765579,1700,0.2706232);
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
   RecoPhoEF_p->SetBinEntries(6,7);
   RecoPhoEF_p->SetBinEntries(7,51);
   RecoPhoEF_p->SetBinEntries(8,109);
   RecoPhoEF_p->SetBinEntries(9,117);
   RecoPhoEF_p->SetBinEntries(10,154);
   RecoPhoEF_p->SetBinEntries(11,135);
   RecoPhoEF_p->SetBinEntries(12,121);
   RecoPhoEF_p->SetBinEntries(13,88);
   RecoPhoEF_p->SetBinEntries(14,79);
   RecoPhoEF_p->SetBinEntries(15,60);
   RecoPhoEF_p->SetBinEntries(16,41);
   RecoPhoEF_p->SetBinEntries(17,42);
   RecoPhoEF_p->SetBinEntries(18,27);
   RecoPhoEF_p->SetBinEntries(19,27);
   RecoPhoEF_p->SetBinEntries(20,25);
   RecoPhoEF_p->SetBinEntries(21,16);
   RecoPhoEF_p->SetBinEntries(22,7);
   RecoPhoEF_p->SetBinEntries(23,6);
   RecoPhoEF_p->SetBinEntries(24,13);
   RecoPhoEF_p->SetBinEntries(25,8);
   RecoPhoEF_p->SetBinEntries(26,8);
   RecoPhoEF_p->SetBinEntries(27,2);
   RecoPhoEF_p->SetBinEntries(28,5);
   RecoPhoEF_p->SetBinEntries(29,2);
   RecoPhoEF_p->SetBinEntries(30,2);
   RecoPhoEF_p->SetBinEntries(31,14);
   RecoPhoEF_p->SetBinContent(6,0.02944451);
   RecoPhoEF_p->SetBinContent(7,0.4662277);
   RecoPhoEF_p->SetBinContent(8,1.44152);
   RecoPhoEF_p->SetBinContent(9,1.522081);
   RecoPhoEF_p->SetBinContent(10,2.833003);
   RecoPhoEF_p->SetBinContent(11,2.30533);
   RecoPhoEF_p->SetBinContent(12,2.367034);
   RecoPhoEF_p->SetBinContent(13,2.202732);
   RecoPhoEF_p->SetBinContent(14,2.143974);
   RecoPhoEF_p->SetBinContent(15,2.039465);
   RecoPhoEF_p->SetBinContent(16,1.336001);
   RecoPhoEF_p->SetBinContent(17,1.31514);
   RecoPhoEF_p->SetBinContent(18,0.6888596);
   RecoPhoEF_p->SetBinContent(19,1.049089);
   RecoPhoEF_p->SetBinContent(20,0.9525828);
   RecoPhoEF_p->SetBinContent(21,0.6763699);
   RecoPhoEF_p->SetBinContent(22,0.4374235);
   RecoPhoEF_p->SetBinContent(23,0.2895198);
   RecoPhoEF_p->SetBinContent(24,0.8049739);
   RecoPhoEF_p->SetBinContent(25,0.5640608);
   RecoPhoEF_p->SetBinContent(26,0.4207081);
   RecoPhoEF_p->SetBinContent(27,0.05157632);
   RecoPhoEF_p->SetBinContent(28,0.4967121);
   RecoPhoEF_p->SetBinContent(29,0.2088434);
   RecoPhoEF_p->SetBinContent(30,0.1705336);
   RecoPhoEF_p->SetBinContent(31,1.176731);
   RecoPhoEF_p->SetBinError(6,0.01437275);
   RecoPhoEF_p->SetBinError(7,0.0841162);
   RecoPhoEF_p->SetBinError(8,0.2129455);
   RecoPhoEF_p->SetBinError(9,0.2016976);
   RecoPhoEF_p->SetBinError(10,0.3477563);
   RecoPhoEF_p->SetBinError(11,0.2685243);
   RecoPhoEF_p->SetBinError(12,0.3290488);
   RecoPhoEF_p->SetBinError(13,0.3552593);
   RecoPhoEF_p->SetBinError(14,0.3261526);
   RecoPhoEF_p->SetBinError(15,0.4268332);
   RecoPhoEF_p->SetBinError(16,0.3093841);
   RecoPhoEF_p->SetBinError(17,0.3013111);
   RecoPhoEF_p->SetBinError(18,0.1640168);
   RecoPhoEF_p->SetBinError(19,0.3009564);
   RecoPhoEF_p->SetBinError(20,0.2718294);
   RecoPhoEF_p->SetBinError(21,0.2020471);
   RecoPhoEF_p->SetBinError(22,0.209533);
   RecoPhoEF_p->SetBinError(23,0.186805);
   RecoPhoEF_p->SetBinError(24,0.2723216);
   RecoPhoEF_p->SetBinError(25,0.2609527);
   RecoPhoEF_p->SetBinError(26,0.2232585);
   RecoPhoEF_p->SetBinError(27,0.05117218);
   RecoPhoEF_p->SetBinError(28,0.2655705);
   RecoPhoEF_p->SetBinError(29,0.2086012);
   RecoPhoEF_p->SetBinError(30,0.1512261);
   RecoPhoEF_p->SetBinError(31,0.4120666);
   RecoPhoEF_p->SetMaximum(0.2367953);
   RecoPhoEF_p->SetEntries(1166);
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
   RecoCHadEF_p->SetBinEntries(6,7);
   RecoCHadEF_p->SetBinEntries(7,51);
   RecoCHadEF_p->SetBinEntries(8,109);
   RecoCHadEF_p->SetBinEntries(9,117);
   RecoCHadEF_p->SetBinEntries(10,153);
   RecoCHadEF_p->SetBinEntries(11,130);
   RecoCHadEF_p->SetBinEntries(12,119);
   RecoCHadEF_p->SetBinEntries(13,88);
   RecoCHadEF_p->SetBinEntries(14,78);
   RecoCHadEF_p->SetBinEntries(15,59);
   RecoCHadEF_p->SetBinEntries(16,41);
   RecoCHadEF_p->SetBinEntries(17,40);
   RecoCHadEF_p->SetBinEntries(18,27);
   RecoCHadEF_p->SetBinEntries(19,27);
   RecoCHadEF_p->SetBinEntries(20,25);
   RecoCHadEF_p->SetBinEntries(21,15);
   RecoCHadEF_p->SetBinEntries(22,5);
   RecoCHadEF_p->SetBinEntries(23,5);
   RecoCHadEF_p->SetBinEntries(24,13);
   RecoCHadEF_p->SetBinEntries(25,8);
   RecoCHadEF_p->SetBinEntries(26,7);
   RecoCHadEF_p->SetBinEntries(27,2);
   RecoCHadEF_p->SetBinEntries(28,5);
   RecoCHadEF_p->SetBinEntries(29,2);
   RecoCHadEF_p->SetBinEntries(30,2);
   RecoCHadEF_p->SetBinEntries(31,13);
   RecoCHadEF_p->SetBinContent(6,0.05694955);
   RecoCHadEF_p->SetBinContent(7,0.6771232);
   RecoCHadEF_p->SetBinContent(8,2.19633);
   RecoCHadEF_p->SetBinContent(9,2.883271);
   RecoCHadEF_p->SetBinContent(10,4.167309);
   RecoCHadEF_p->SetBinContent(11,4.602806);
   RecoCHadEF_p->SetBinContent(12,4.036236);
   RecoCHadEF_p->SetBinContent(13,3.239835);
   RecoCHadEF_p->SetBinContent(14,3.192771);
   RecoCHadEF_p->SetBinContent(15,2.603925);
   RecoCHadEF_p->SetBinContent(16,1.729924);
   RecoCHadEF_p->SetBinContent(17,1.428019);
   RecoCHadEF_p->SetBinContent(18,1.189546);
   RecoCHadEF_p->SetBinContent(19,1.303725);
   RecoCHadEF_p->SetBinContent(20,1.018202);
   RecoCHadEF_p->SetBinContent(21,0.8329178);
   RecoCHadEF_p->SetBinContent(22,0.1476345);
   RecoCHadEF_p->SetBinContent(23,0.1869873);
   RecoCHadEF_p->SetBinContent(24,0.646736);
   RecoCHadEF_p->SetBinContent(25,0.3971471);
   RecoCHadEF_p->SetBinContent(26,0.4099718);
   RecoCHadEF_p->SetBinContent(27,0.1424176);
   RecoCHadEF_p->SetBinContent(28,0.3427888);
   RecoCHadEF_p->SetBinContent(29,0.07282716);
   RecoCHadEF_p->SetBinContent(30,0.09558388);
   RecoCHadEF_p->SetBinContent(31,0.6340931);
   RecoCHadEF_p->SetBinError(6,0.0259508);
   RecoCHadEF_p->SetBinError(7,0.1273928);
   RecoCHadEF_p->SetBinError(8,0.2730123);
   RecoCHadEF_p->SetBinError(9,0.3447329);
   RecoCHadEF_p->SetBinError(10,0.4050297);
   RecoCHadEF_p->SetBinError(11,0.5055875);
   RecoCHadEF_p->SetBinError(12,0.4472178);
   RecoCHadEF_p->SetBinError(13,0.4096173);
   RecoCHadEF_p->SetBinError(14,0.4123002);
   RecoCHadEF_p->SetBinError(15,0.3819345);
   RecoCHadEF_p->SetBinError(16,0.3070727);
   RecoCHadEF_p->SetBinError(17,0.2649411);
   RecoCHadEF_p->SetBinError(18,0.2596543);
   RecoCHadEF_p->SetBinError(19,0.2875103);
   RecoCHadEF_p->SetBinError(20,0.2240955);
   RecoCHadEF_p->SetBinError(21,0.2358785);
   RecoCHadEF_p->SetBinError(22,0.07335051);
   RecoCHadEF_p->SetBinError(23,0.09618028);
   RecoCHadEF_p->SetBinError(24,0.2068144);
   RecoCHadEF_p->SetBinError(25,0.156072);
   RecoCHadEF_p->SetBinError(26,0.1782417);
   RecoCHadEF_p->SetBinError(27,0.1013989);
   RecoCHadEF_p->SetBinError(28,0.1559829);
   RecoCHadEF_p->SetBinError(29,0.07125861);
   RecoCHadEF_p->SetBinError(30,0.07055557);
   RecoCHadEF_p->SetBinError(31,0.2166972);
   RecoCHadEF_p->SetMaximum(0.2367953);
   RecoCHadEF_p->SetEntries(1148);
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
   RecoNHadEF_p->SetBinEntries(6,7);
   RecoNHadEF_p->SetBinEntries(7,51);
   RecoNHadEF_p->SetBinEntries(8,109);
   RecoNHadEF_p->SetBinEntries(9,117);
   RecoNHadEF_p->SetBinEntries(10,154);
   RecoNHadEF_p->SetBinEntries(11,135);
   RecoNHadEF_p->SetBinEntries(12,121);
   RecoNHadEF_p->SetBinEntries(13,88);
   RecoNHadEF_p->SetBinEntries(14,79);
   RecoNHadEF_p->SetBinEntries(15,60);
   RecoNHadEF_p->SetBinEntries(16,41);
   RecoNHadEF_p->SetBinEntries(17,42);
   RecoNHadEF_p->SetBinEntries(18,27);
   RecoNHadEF_p->SetBinEntries(19,27);
   RecoNHadEF_p->SetBinEntries(20,25);
   RecoNHadEF_p->SetBinEntries(21,16);
   RecoNHadEF_p->SetBinEntries(22,7);
   RecoNHadEF_p->SetBinEntries(23,6);
   RecoNHadEF_p->SetBinEntries(24,13);
   RecoNHadEF_p->SetBinEntries(25,8);
   RecoNHadEF_p->SetBinEntries(26,8);
   RecoNHadEF_p->SetBinEntries(27,2);
   RecoNHadEF_p->SetBinEntries(28,5);
   RecoNHadEF_p->SetBinEntries(29,2);
   RecoNHadEF_p->SetBinEntries(30,2);
   RecoNHadEF_p->SetBinEntries(31,16);
   RecoNHadEF_p->SetBinContent(6,0.0303409);
   RecoNHadEF_p->SetBinContent(7,0.3593363);
   RecoNHadEF_p->SetBinContent(8,1.765686);
   RecoNHadEF_p->SetBinContent(9,1.04168);
   RecoNHadEF_p->SetBinContent(10,2.400556);
   RecoNHadEF_p->SetBinContent(11,2.179243);
   RecoNHadEF_p->SetBinContent(12,2.892387);
   RecoNHadEF_p->SetBinContent(13,2.194765);
   RecoNHadEF_p->SetBinContent(14,2.787618);
   RecoNHadEF_p->SetBinContent(15,2.005694);
   RecoNHadEF_p->SetBinContent(16,1.513074);
   RecoNHadEF_p->SetBinContent(17,1.865951);
   RecoNHadEF_p->SetBinContent(18,0.6360147);
   RecoNHadEF_p->SetBinContent(19,1.211093);
   RecoNHadEF_p->SetBinContent(20,1.179961);
   RecoNHadEF_p->SetBinContent(21,0.9107846);
   RecoNHadEF_p->SetBinContent(22,0.5063559);
   RecoNHadEF_p->SetBinContent(23,0.1144522);
   RecoNHadEF_p->SetBinContent(24,1.266282);
   RecoNHadEF_p->SetBinContent(25,0.2616038);
   RecoNHadEF_p->SetBinContent(26,0.07501269);
   RecoNHadEF_p->SetBinContent(27,0.01481211);
   RecoNHadEF_p->SetBinContent(28,0.986647);
   RecoNHadEF_p->SetBinContent(29,0.117728);
   RecoNHadEF_p->SetBinContent(30,0.1317353);
   RecoNHadEF_p->SetBinContent(31,2.689398);
   RecoNHadEF_p->SetBinError(6,0.02380238);
   RecoNHadEF_p->SetBinError(7,0.1243504);
   RecoNHadEF_p->SetBinError(8,0.4863938);
   RecoNHadEF_p->SetBinError(9,0.3170318);
   RecoNHadEF_p->SetBinError(10,0.5601092);
   RecoNHadEF_p->SetBinError(11,0.4966812);
   RecoNHadEF_p->SetBinError(12,0.769044);
   RecoNHadEF_p->SetBinError(13,0.7061921);
   RecoNHadEF_p->SetBinError(14,0.7008598);
   RecoNHadEF_p->SetBinError(15,0.5183006);
   RecoNHadEF_p->SetBinError(16,0.5316426);
   RecoNHadEF_p->SetBinError(17,0.6978812);
   RecoNHadEF_p->SetBinError(18,0.2748668);
   RecoNHadEF_p->SetBinError(19,0.4878452);
   RecoNHadEF_p->SetBinError(20,0.387714);
   RecoNHadEF_p->SetBinError(21,0.4306436);
   RecoNHadEF_p->SetBinError(22,0.2383043);
   RecoNHadEF_p->SetBinError(23,0.08834988);
   RecoNHadEF_p->SetBinError(24,0.5383546);
   RecoNHadEF_p->SetBinError(25,0.1660656);
   RecoNHadEF_p->SetBinError(26,0.03945746);
   RecoNHadEF_p->SetBinError(27,0.01110565);
   RecoNHadEF_p->SetBinError(28,0.4770942);
   RecoNHadEF_p->SetBinError(29,0.1074317);
   RecoNHadEF_p->SetBinError(30,0.1279451);
   RecoNHadEF_p->SetBinError(31,0.9548063);
   RecoNHadEF_p->SetMaximum(0.2367953);
   RecoNHadEF_p->SetEntries(1168);
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
   GenEM_p->SetBinEntries(6,7);
   GenEM_p->SetBinEntries(7,51);
   GenEM_p->SetBinEntries(8,104);
   GenEM_p->SetBinEntries(9,114);
   GenEM_p->SetBinEntries(10,149);
   GenEM_p->SetBinEntries(11,130);
   GenEM_p->SetBinEntries(12,120);
   GenEM_p->SetBinEntries(13,85);
   GenEM_p->SetBinEntries(14,79);
   GenEM_p->SetBinEntries(15,60);
   GenEM_p->SetBinEntries(16,40);
   GenEM_p->SetBinEntries(17,42);
   GenEM_p->SetBinEntries(18,27);
   GenEM_p->SetBinEntries(19,27);
   GenEM_p->SetBinEntries(20,25);
   GenEM_p->SetBinEntries(21,15);
   GenEM_p->SetBinEntries(22,7);
   GenEM_p->SetBinEntries(23,6);
   GenEM_p->SetBinEntries(24,13);
   GenEM_p->SetBinEntries(25,8);
   GenEM_p->SetBinEntries(26,7);
   GenEM_p->SetBinEntries(27,2);
   GenEM_p->SetBinEntries(28,5);
   GenEM_p->SetBinEntries(29,2);
   GenEM_p->SetBinEntries(30,2);
   GenEM_p->SetBinEntries(31,14);
   GenEM_p->SetBinContent(6,0.2788057);
   GenEM_p->SetBinContent(7,2.413759);
   GenEM_p->SetBinContent(8,4.30486);
   GenEM_p->SetBinContent(9,4.096379);
   GenEM_p->SetBinContent(10,5.616133);
   GenEM_p->SetBinContent(11,5.565569);
   GenEM_p->SetBinContent(12,4.686656);
   GenEM_p->SetBinContent(13,3.016623);
   GenEM_p->SetBinContent(14,2.656652);
   GenEM_p->SetBinContent(15,2.336655);
   GenEM_p->SetBinContent(16,1.684806);
   GenEM_p->SetBinContent(17,1.34515);
   GenEM_p->SetBinContent(18,0.8845362);
   GenEM_p->SetBinContent(19,1.012198);
   GenEM_p->SetBinContent(20,0.9608513);
   GenEM_p->SetBinContent(21,0.5192679);
   GenEM_p->SetBinContent(22,0.2337223);
   GenEM_p->SetBinContent(23,0.237499);
   GenEM_p->SetBinContent(24,0.557664);
   GenEM_p->SetBinContent(25,0.4170389);
   GenEM_p->SetBinContent(26,0.2836876);
   GenEM_p->SetBinContent(27,0.1236969);
   GenEM_p->SetBinContent(28,0.1987076);
   GenEM_p->SetBinContent(29,0.05498372);
   GenEM_p->SetBinContent(30,0.1056744);
   GenEM_p->SetBinContent(31,0.4914377);
   GenEM_p->SetBinError(6,0.1370718);
   GenEM_p->SetBinError(7,0.4231123);
   GenEM_p->SetBinError(8,0.541997);
   GenEM_p->SetBinError(9,0.5049463);
   GenEM_p->SetBinError(10,0.6122896);
   GenEM_p->SetBinError(11,0.6102308);
   GenEM_p->SetBinError(12,0.5349244);
   GenEM_p->SetBinError(13,0.418336);
   GenEM_p->SetBinError(14,0.3741493);
   GenEM_p->SetBinError(15,0.3873252);
   GenEM_p->SetBinError(16,0.3322323);
   GenEM_p->SetBinError(17,0.2814593);
   GenEM_p->SetBinError(18,0.2156108);
   GenEM_p->SetBinError(19,0.2326948);
   GenEM_p->SetBinError(20,0.2412954);
   GenEM_p->SetBinError(21,0.1544103);
   GenEM_p->SetBinError(22,0.1092734);
   GenEM_p->SetBinError(23,0.1142157);
   GenEM_p->SetBinError(24,0.1918628);
   GenEM_p->SetBinError(25,0.1880871);
   GenEM_p->SetBinError(26,0.1538707);
   GenEM_p->SetBinError(27,0.08807457);
   GenEM_p->SetBinError(28,0.1044637);
   GenEM_p->SetBinError(29,0.05486269);
   GenEM_p->SetBinError(30,0.07962626);
   GenEM_p->SetBinError(31,0.1872571);
   GenEM_p->SetMaximum(0.2367953);
   GenEM_p->SetEntries(1141);
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
   GenHad_p->SetBinEntries(6,7);
   GenHad_p->SetBinEntries(7,51);
   GenHad_p->SetBinEntries(8,105);
   GenHad_p->SetBinEntries(9,112);
   GenHad_p->SetBinEntries(10,148);
   GenHad_p->SetBinEntries(11,120);
   GenHad_p->SetBinEntries(12,110);
   GenHad_p->SetBinEntries(13,83);
   GenHad_p->SetBinEntries(14,73);
   GenHad_p->SetBinEntries(15,54);
   GenHad_p->SetBinEntries(16,37);
   GenHad_p->SetBinEntries(17,38);
   GenHad_p->SetBinEntries(18,27);
   GenHad_p->SetBinEntries(19,25);
   GenHad_p->SetBinEntries(20,24);
   GenHad_p->SetBinEntries(21,14);
   GenHad_p->SetBinEntries(22,4);
   GenHad_p->SetBinEntries(23,5);
   GenHad_p->SetBinEntries(24,10);
   GenHad_p->SetBinEntries(25,7);
   GenHad_p->SetBinEntries(26,7);
   GenHad_p->SetBinEntries(27,2);
   GenHad_p->SetBinEntries(28,4);
   GenHad_p->SetBinEntries(29,1);
   GenHad_p->SetBinEntries(30,2);
   GenHad_p->SetBinEntries(31,6);
   GenHad_p->SetBinContent(6,0.07607783);
   GenHad_p->SetBinContent(7,0.7849067);
   GenHad_p->SetBinContent(8,2.439804);
   GenHad_p->SetBinContent(9,2.926345);
   GenHad_p->SetBinContent(10,4.132643);
   GenHad_p->SetBinContent(11,3.698772);
   GenHad_p->SetBinContent(12,3.505823);
   GenHad_p->SetBinContent(13,2.942451);
   GenHad_p->SetBinContent(14,3.085683);
   GenHad_p->SetBinContent(15,2.555659);
   GenHad_p->SetBinContent(16,1.371246);
   GenHad_p->SetBinContent(17,1.313713);
   GenHad_p->SetBinContent(18,1.190826);
   GenHad_p->SetBinContent(19,1.230384);
   GenHad_p->SetBinContent(20,1.058444);
   GenHad_p->SetBinContent(21,0.8286194);
   GenHad_p->SetBinContent(22,0.1793327);
   GenHad_p->SetBinContent(23,0.1543802);
   GenHad_p->SetBinContent(24,0.6116069);
   GenHad_p->SetBinContent(25,0.3483455);
   GenHad_p->SetBinContent(26,0.2833164);
   GenHad_p->SetBinContent(27,0.1242629);
   GenHad_p->SetBinContent(28,0.3182049);
   GenHad_p->SetBinContent(29,8.376534e-05);
   GenHad_p->SetBinContent(30,0.1431939);
   GenHad_p->SetBinContent(31,0.2427383);
   GenHad_p->SetBinError(6,0.04602873);
   GenHad_p->SetBinError(7,0.1640443);
   GenHad_p->SetBinError(8,0.3159301);
   GenHad_p->SetBinError(9,0.3575223);
   GenHad_p->SetBinError(10,0.4187862);
   GenHad_p->SetBinError(11,0.395016);
   GenHad_p->SetBinError(12,0.3935834);
   GenHad_p->SetBinError(13,0.3767666);
   GenHad_p->SetBinError(14,0.4006299);
   GenHad_p->SetBinError(15,0.3851409);
   GenHad_p->SetBinError(16,0.2565322);
   GenHad_p->SetBinError(17,0.2539906);
   GenHad_p->SetBinError(18,0.2572978);
   GenHad_p->SetBinError(19,0.2810834);
   GenHad_p->SetBinError(20,0.2452883);
   GenHad_p->SetBinError(21,0.235445);
   GenHad_p->SetBinError(22,0.106584);
   GenHad_p->SetBinError(23,0.08083917);
   GenHad_p->SetBinError(24,0.2094955);
   GenHad_p->SetBinError(25,0.1504404);
   GenHad_p->SetBinError(26,0.1467818);
   GenHad_p->SetBinError(27,0.0887085);
   GenHad_p->SetBinError(28,0.1612087);
   GenHad_p->SetBinError(29,8.376534e-05);
   GenHad_p->SetBinError(30,0.1019678);
   GenHad_p->SetBinError(31,0.1408252);
   GenHad_p->SetMaximum(0.2367953);
   GenHad_p->SetEntries(1076);
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
