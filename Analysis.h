#ifndef analysis_Analysis_h
#define analysis_Analysis_h

#include "SampleAnalyzer/Process/Analyzer/AnalyzerBase.h"
#include <TH1F.h>
#include <TFile.h>
#include <vector>
#include <boost/tuple/tuple.hpp>
#include <string>
#include <math.h>

namespace MA5
{
class Analysis : public AnalyzerBase
{
  INIT_ANALYSIS(Analysis,"Analysis")
  
  
  
  
  
  //**************************************************************************************************************************************************************************************************
  //**************************************************************************************************************************************************************************************************
  //PLOTS OF THE FIRST PAIR OF DIJET AND B_DIJET******************************************************************************************************************************************************
  //general plots
  TH1F* plot_FoundPair;
  TH1F* plot_N_Merged1;
  
  //general plots dijet1
  TH1F* plot_PT_dijet1;
  TH1F* plot_ETA_dijet1;
  TH1F* plot_M_dijet1;
  TH1F* plot_PHI_dijet1;
  TH1F* plot_DR_dijet1;
  
  //general plots b_dijet1
  TH1F* plot_PT_b_dijet1;
  TH1F* plot_ETA_b_dijet1;
  TH1F* plot_M_b_dijet1;
  TH1F* plot_PHI_b_dijet1;
  TH1F* plot_DR_b_dijet1;
  
  //DIJET1 ********************************************************************************************************************************************************************************************
  //plots of the dijet1 pairs that are not merged.
  TH1F* plot_PT_dijet1_not;
  TH1F* plot_ETA_dijet1_not;
  TH1F* plot_M_dijet1_not;
  TH1F* plot_PHI_dijet1_not;
  TH1F* plot_DR_dijet1_not;
  
  //plots of the dijet1 pairs that are partially merged.
  TH1F* plot_PT_dijet1_partially;
  TH1F* plot_ETA_dijet1_partially;
  TH1F* plot_M_dijet1_partially;
  TH1F* plot_PHI_dijet1_partially;
  TH1F* plot_DR_dijet1_partially;
  
  //plots of the dijet1 pairs that are fully merged.
  TH1F* plot_PT_dijet1_fully;
  TH1F* plot_ETA_dijet1_fully;
  TH1F* plot_M_dijet1_fully;
  TH1F* plot_PHI_dijet1_fully;
  TH1F* plot_DR_dijet1_fully;
  
  //B_DIJET1 ******************************************************************************************************************************************************************************************
  //plots of the b_dijet1 pairs that are partially merged.
  TH1F* plot_PT_b_dijet1_partially;
  TH1F* plot_ETA_b_dijet1_partially;
  TH1F* plot_M_b_dijet1_partially;
  TH1F* plot_PHI_b_dijet1_partially;
  TH1F* plot_DR_b_dijet1_partially;
  
  //plots of the b_dijet1 pairs that are fully merged.
  TH1F* plot_PT_b_dijet1_fully;
  TH1F* plot_ETA_b_dijet1_fully;
  TH1F* plot_M_b_dijet1_fully;
  TH1F* plot_PHI_b_dijet1_fully;
  TH1F* plot_DR_b_dijet1_fully;
  
  //PLOTS OF THE THE TWO B****************************************************************************************************************************************************************************
  //plots of b1.
  TH1F* plot_PT_b1;
  TH1F* plot_ETA_b1;
  TH1F* plot_PHI_b1;
  
  //plots of b2.
  TH1F* plot_PT_b2;
  TH1F* plot_ETA_b2;
  TH1F* plot_PHI_b2;
  
  
  
  
  
  //PLOTS OF THE SECOND PAIR OF DIJET AND B_DIJET *****************************************************************************************************************************************************
  //ONLY USED IN THE FULLY HADRONIC CHANNEL ***********************************************************************************************************************************************************
  //general plots
  TH1F* plot_N_Merged2;
  TH1F* plot_Smallest_DR_dijet;
  TH1F* plot_Smallest_DR_b_dijet;
  TH1F* plot_Pairs;
  TH1F* plot_Pairs_b;
  TH1F* plot_Mother_Particles_dijets;
  
  //general plots dijet2
  TH1F* plot_PT_dijet2;
  TH1F* plot_ETA_dijet2;
  TH1F* plot_M_dijet2;
  TH1F* plot_PHI_dijet2;
  TH1F* plot_DR_dijet2;
  
  //dETA, dPHI, dDR plots for the first dijet.
  TH1F* plot_dETA_dijet1;
  TH1F* plot_dPHI_dijet1;
  TH1F* plot_dDR_dijet1;
  //dETA, dPHI, dDR plots for the second dijet.
  TH1F* plot_dETA_dijet2;
  TH1F* plot_dPHI_dijet2;
  TH1F* plot_dDR_dijet2;
  //dETA, dPHI, dDR plots for the first pair not used: (1,2).
  TH1F* plot_dETA_pair12;
  TH1F* plot_dPHI_pair12;
  TH1F* plot_dDR_pair12;
  //dETA, dPHI, dDR plots for the second pair not used: (1,3).
  TH1F* plot_dETA_pair13;
  TH1F* plot_dPHI_pair13;
  TH1F* plot_dDR_pair13;
  //dETA, dPHI, dDR plots for the third pair not used: (1,4).
  TH1F* plot_dETA_pair14;
  TH1F* plot_dPHI_pair14;
  TH1F* plot_dDR_pair14;
  //dETA, dPHI, dDR plots for the fourth pair not used: (2,3).
  TH1F* plot_dETA_pair23;
  TH1F* plot_dPHI_pair23;
  TH1F* plot_dDR_pair23;
  //dETA, dPHI, dDR plots for the fifth pair not used: (2,4).
  TH1F* plot_dETA_pair24;
  TH1F* plot_dPHI_pair24;
  TH1F* plot_dDR_pair24;
  //dETA, dPHI, dDR plots for the sixth pair not used: (3,4).
  TH1F* plot_dETA_pair34;
  TH1F* plot_dPHI_pair34;
  TH1F* plot_dDR_pair34;
  
  //general plots b_dijet2
  TH1F* plot_PT_b_dijet2;
  TH1F* plot_ETA_b_dijet2;
  TH1F* plot_M_b_dijet2;
  TH1F* plot_PHI_b_dijet2;
  TH1F* plot_DR_b_dijet2;
  
  //DIJET2 ********************************************************************************************************************************************************************************************
  //plots of the dijet2 pairs that are not merged.
  TH1F* plot_PT_dijet2_not;
  TH1F* plot_ETA_dijet2_not;
  TH1F* plot_M_dijet2_not;
  TH1F* plot_PHI_dijet2_not;
  TH1F* plot_DR_dijet2_not;
  
  //plots of the dijet2 pairs that are partially merged.
  TH1F* plot_PT_dijet2_partially;
  TH1F* plot_ETA_dijet2_partially;
  TH1F* plot_M_dijet2_partially;
  TH1F* plot_PHI_dijet2_partially;
  TH1F* plot_DR_dijet2_partially;
  
  //plots of the dijet2 pairs that are fully merged.
  TH1F* plot_PT_dijet2_fully;
  TH1F* plot_ETA_dijet2_fully;
  TH1F* plot_M_dijet2_fully;
  TH1F* plot_PHI_dijet2_fully;
  TH1F* plot_DR_dijet2_fully;
  
  //B_DIJET2 ******************************************************************************************************************************************************************************************
  //plots of the b_dijet2 pairs that are partially merged.
  TH1F* plot_PT_b_dijet2_partially;
  TH1F* plot_ETA_b_dijet2_partially;
  TH1F* plot_M_b_dijet2_partially;
  TH1F* plot_PHI_b_dijet2_partially;
  TH1F* plot_DR_b_dijet2_partially;
  
  //plots of the b_dijet2 pairs that are fully merged.
  TH1F* plot_PT_b_dijet2_fully;
  TH1F* plot_ETA_b_dijet2_fully;
  TH1F* plot_M_b_dijet2_fully;
  TH1F* plot_PHI_b_dijet2_fully;
  TH1F* plot_DR_b_dijet2_fully;
  
  //SEMI-LEPTONIC EXCLUSIVE PLOTS**********************************************************************************************************************************************************************
  //***************************************************************************************************************************************************************************************************
  //***************************************************************************************************************************************************************************************************
  //plots for the case in which W->e nu_e
  TH1F* plot_Efficiencies_e;
  TH1F* plot_StMet_e;
  TH1F* plot_PT_Scalar_leptons_e;
  TH1F* plot_PT_Vector_leptons_e;
  TH1F* plot_M_leptons_e;
  
  //plots for the case in which W->mu nu_mu
  TH1F* plot_Efficiencies_mu;
  TH1F* plot_StMet_mu;
  TH1F* plot_PT_Scalar_leptons_mu;
  TH1F* plot_PT_Vector_leptons_mu;
  TH1F* plot_M_leptons_mu;
  
   
  /*
  TH1F* plot_deltaR_b1b2;
  TH1F* plot_PT_leptons;
  TH1F* plot_ETA_leptons;
  TH1F* plot_PT_b1;
  TH1F* plot_MET;
  TH1F* plot_sdETA_b1b2;

  TH1F* plot_PT_b_not_used;
  TH1F* plot_ETA_b_not_used;
  TH1F* plot_sdPHI_lMET;
  */

 public:
  virtual bool Initialize(const MA5::Configuration& cfg, const std::map<std::string,std::string>& parameters);
  virtual void Finalize(const SampleFormat& summary, const std::vector<SampleFormat>& files);
  virtual bool Execute(SampleFormat& sample, const EventFormat& event);

 private:
 
 	//Arrays of all final state particles.
 	std::vector<const MCParticleFormat*> FinalStateLeptons;
 	std::vector<const MCParticleFormat*> FinalStateNeutrinos;
 	std::vector<const MCParticleFormat*> FinalStateJs;
 	std::vector<const MCParticleFormat*> FinalStateBs;
 	//Indexes of the different final state jets: 4 for the fully-hadronic channel and 2 for the semi-leptonic channel. Pairs are always indentified as (j1,j2) and (j3,j4) in fully-hadronic.
 	MAuint32 index_j1;
 	MAuint32 index_j2;
 	MAuint32 index_j3;
 	MAuint32 index_j4;
	//Indexes of the different final state b-quarks: Always 2 for both channels. Pairs are always indentified as (j1,j2,b1) and (j3,j4,b2) for the fully-hadronic.
	//In the semi-leptonic, index_b2 makes reference to the b-quark not used (the one coming from the leptonic decaying top).
 	MAuint32 index_b1;
 	MAuint32 index_b2;
 	//Indexes of the final state leptons (muons or tauons) coming from the Z', only this two exist in fully-hadronic. 
 	//Another one might exists in the semi-leptonic from the W decay.
 	MAuint32 index_lepton1;
 	MAuint32 index_lepton2;
 	//Index of the remaining lepton that is not the two leptons coming from the Z'. Might be an electron or a muon. Only in the semi-leptonic channel.
 	//The particle exist if after the analysis index_remaining > 0, else it was not found (fully-hadronic channel).
 	MAuint32 index_remaining = -10;
 	//Four-momentum of the reconstructed W (dijet) and top-quark (b_dijet). The second pair is only used in the fully-hadronic.
 	MALorentzVector dijet1;
 	MALorentzVector b_dijet1;
 	MALorentzVector dijet2;
 	MALorentzVector b_dijet2;
 	//Vectors that state wether the dijets and b_dijets were producted not, partially or fully merged. Both (only first) components used in fully-hadronic (semi-leptonic) channel.
 	std::vector<bool> notMerged;
 	std::vector<bool> partiallyMerged;
 	std::vector<bool> fullyMerged;
 	//Vector that states in the first (second) component if the dijets (b_dijets) are the possible pairs that minimize the dR between its constituents. Only used in fully-hadronic. 
 	std::vector<bool> smallestdr;
 	//Vector that states wether the event has passed the different selection criteria applied to it or not. First component simple counts the number of events (a no-cut).
 	std::vector<bool> cuts;
 	
 	
 	
 	
 	
 	//Indicates if the particle given is a final state lepton.
 	bool IsFinalState_lepton(const MCParticleFormat* particle){
 	
 		bool final_state = false;
 		if ((particle != 0) && (PHYSICS->Id->IsFinalState(particle))){
 			if ((particle->pdgid()==15) || (particle->pdgid()==13) || (particle->pdgid()==11) || (particle->pdgid()==-15) || (particle->pdgid()==-13) || (particle->pdgid()==-11)){
 				final_state = true;
 			}
 		}
 		return final_state;
 	}

	//Indicates if the particle given is a final state neutrino.
 	bool IsFinalState_neutrino(const MCParticleFormat* particle){
 	
 		bool final_state = false;
 		if ((particle != 0) && (PHYSICS->Id->IsFinalState(particle))){
 			if ((particle->pdgid()==16) || (particle->pdgid()==14) || (particle->pdgid()==12) || (particle->pdgid()==-16) || (particle->pdgid()==-14) || (particle->pdgid()==-12)){
 				final_state = true;
 			}
 		}
 		return final_state;
 	}
 	
 	//Indicates if the particle given is a final state b-quark.
 	bool IsFinalState_b(const MCParticleFormat* particle){
 	
 		bool final_state = false;
 		if ((particle != 0) && (PHYSICS->Id->IsFinalState(particle))){
 			if ((particle->pdgid()==5) || (particle->pdgid()==-5)){
 				final_state = true;
 			}
 		}
 		return final_state;
 	}
 	
 	//Indicates if the particle given is a final state jet.
 	bool IsFinalState_j(const MCParticleFormat* particle){
 	
 		bool final_state = false;
 		if ((particle != 0) && (PHYSICS->Id->IsFinalState(particle))){
 			if ((particle->pdgid()==1) || (particle->pdgid()==2) || (particle->pdgid()==3) || (particle->pdgid()==4) || (particle->pdgid()==-1) || (particle->pdgid()==-2) || (particle->pdgid()==-3) || (particle->pdgid()==-4)){
 				final_state = true;
 			}
 		}
 		return final_state;
 	}
 	
 	//Fills the vectors of final state particles classified by wether they are leptons, neutrinos, js or bs.
 	void ClassifyParticles(const MCParticleFormat* particle, std::vector<const MCParticleFormat*> &FinalStateLeptons, std::vector<const MCParticleFormat*> &FinalStateNeutrinos, std::vector<const MCParticleFormat*> &FinalStateJs, std::vector<const MCParticleFormat*> &FinalStateBs){
 	
 		if (IsFinalState_lepton(particle) == true){
 			FinalStateLeptons.push_back(particle);
 		}
 		else if (IsFinalState_neutrino(particle) == true){
 			FinalStateNeutrinos.push_back(particle);
 		}
 		else if (IsFinalState_b(particle) == true){
 			FinalStateBs.push_back(particle);
 		}
 		else if (IsFinalState_j(particle) == true){
 			FinalStateJs.push_back(particle);
 		}
 	}
 	
 	//Organizes components of the final state vectors in terms of their PT (greatest to smallest).
      	void OrganizeByPT(std::vector<const MCParticleFormat*> &initialVector){
      		
      		std::vector<const MCParticleFormat*> newVector;
      		for (MAuint32 i = 0; i < initialVector.size(); i++){
      		
      			std::vector<const MCParticleFormat*> temporalVector = SORTER->rankFilter(initialVector,i+1,PTordering);
      			newVector.push_back(temporalVector[0]);
      			temporalVector.clear();	
      		}
      		initialVector.clear();
      		initialVector = newVector;	
      	}
      	
      	//Returns the charge of the particle required in units of e (electron charge).
      	Double_t Charge(const MCParticleFormat* particle){
      	
      		Double_t charge = -50.0;
      		
      		if (particle != 0){
      			
      			//If the particle is a down quark.
      			if ((particle->pdgid()==1) || (particle->pdgid()==3) || (particle->pdgid()==5)){
 				charge = -1.0/3.0;
 			}
 			//If the particle is a down anti-quark.
 			else if ((particle->pdgid()==-1) || (particle->pdgid()==-3) || (particle->pdgid()==-5)){
 				charge = 1.0/3.0;
 			}
 			//If the particle is an up quark.
 			else if ((particle->pdgid()==2) || (particle->pdgid()==4) || (particle->pdgid()==6)){
 				charge = 2.0/3.0;
 			}
 			//If the particle is an up anti-quark.
 			else if ((particle->pdgid()==-2) || (particle->pdgid()==-4) || (particle->pdgid()==-6)){
 				charge = -2.0/3.0;
 			}
 			//If the particle is an electron.
      			else if ((particle->pdgid()==11) || (particle->pdgid()==13) || (particle->pdgid()==15)){
 				charge = -1.0;
 			}
 			//If the particle is an anti-electron.
 			else if ((particle->pdgid()==-11) || (particle->pdgid()==-13) || (particle->pdgid()==-15)){
 				charge = 1.0;
 			}
 			//If the particle is a neutrino or anti-neutrino.
      			else if ((particle->pdgid()==12) || (particle->pdgid()==14) || (particle->pdgid()==16) || (particle->pdgid()==-12) || (particle->pdgid()==-14) || (particle->pdgid()==-16)){
 				charge = 0.0;
 			}
      		}
      		
      		return charge;
      	}
 	
 	//FULLY-HADRONIC FUNCTIONS*********************************************************************************************************************************************************************
 	//*********************************************************************************************************************************************************************************************
 	//*********************************************************************************************************************************************************************************************
 	
 	//Returns the indexes not use for dijet reconstruction. The first pair of dijet comes from the pair with index (0, index).
 	boost::tuple<int, int> RemainingIndexes(int index){
 		
 		if (index == 1){
 			return boost::make_tuple(2,3);
 		}
 		else if (index == 2){
 			return boost::make_tuple(1,3);
 		}
 		else{
 			return boost::make_tuple(1,2);
 		}
 	}
 	
 	//Define selection criteria for selection of dijet and b_dijet pairs for W and t reconstruction. The pairs of jets and bs must be PT ordered. Index2 and index5 are the PT index
 	//of the jet that acompanies the greatest PT jet in the first dijet pair, and the PT index of the b that acompanies this first dijet pair respectively.
 	boost::tuple<int, int> ReconstructedEventFullyHadronic(std::vector<const MCParticleFormat*> jets, std::vector<const MCParticleFormat*> b){
 	
		MAuint32 index2 = 0;
		Double_t best_Err = 999999.9;
		//Masses value for the W and t, taken from the PDG.
		Double_t Mt = 172.76;
		Double_t MW = 80.379;
		//Defines the first layer criteria for the W reconstruction: dR_dijet{1,2} < dR_cutOff.
		Double_t dR_cutOff = 10000000.0;
		
		for (MAuint32 i = 1; i < jets.size(); i++){
			
			MAuint32 indextemp1;
			MAuint32 indextemp2;
			MALorentzVector jtemp1 = jets[0]->momentum();
			MALorentzVector jtemp2 = jets[i]->momentum();
			boost::tie(indextemp1, indextemp2) = RemainingIndexes(i);
			MALorentzVector jtemp3 = jets[indextemp1]->momentum();
			MALorentzVector jtemp4 = jets[indextemp2]->momentum();
			Double_t dR1 = jtemp1.DeltaR(jtemp2);
			Double_t dR2 = jtemp3.DeltaR(jtemp4);
			
			//First selection criteria.
			if ((dR1 < dR_cutOff) && (dR2 < dR_cutOff)){
				
				Double_t Err1 = (abs((jtemp1 + jtemp2).M() - MW))*100/MW;
				Double_t Err2 = (abs((jtemp3 + jtemp4).M() - MW))*100/MW;
	 			
	 			//Second selection criteria.
				if (Err1 + Err2 < best_Err){
				
					//Checks if the first dijet is not merged.
					if (dR1 > 0.8){
						
						//Third selection criteria for the dijet1.
						if ((Charge(jets[0]) + Charge(jets[i]) == 1.0) || (Charge(jets[0]) + Charge(jets[i]) == -1.0)){
							best_Err = Err1 + Err2;
							index2 = i;
						}
					}
					
					//Checks if the second dijet is not merged.
					else if (dR2 > 0.8){
					
						//Third selection criteria for the dijet2.
						if ((Charge(jets[indextemp1]) + Charge(jets[indextemp2]) == 1.0) || (Charge(jets[indextemp1]) + Charge(jets[indextemp2]) == -1.0)){
							best_Err = Err1 + Err2;
							index2 = i;
						}
					}
					else{
						best_Err = Err1 + Err2;
						index2 = i;
					}
				}
			}
		}
		
		MAuint32 index5 = 0;
		Double_t best_Err_b = 999999.9;
		MALorentzVector dijet1 = jets[0]->momentum() + jets[index2]->momentum();
		MAuint32 index3;
		MAuint32 index4;
		boost::tie(index3, index4) = RemainingIndexes(index2);
		MALorentzVector dijet2 = jets[index3]->momentum() + jets[index4]->momentum();
		
		for (MAuint32 j = 0; j < b.size(); j++){
	
				MALorentzVector b_dijet1 = b[j]->momentum() + dijet1;
				MALorentzVector b_dijet2 = b[1-j]->momentum() + dijet2;
				Double_t Err3 = (abs(b_dijet1.M() - Mt))*100/Mt;
				Double_t Err4 = (abs(b_dijet2.M() - Mt))*100/Mt;
	 				
				if (Err3 + Err4 < best_Err_b){
					best_Err_b = Err3 + Err4;
					index5 = j;
				}	
		}
		return boost::make_tuple(index2,index5);
 	}
 	
 	//Checks if the dijets (0, index) and the remaining others, are the ones with the smallest sum of dR. Same for the b_dijet (0, index, b_index) and the rest.
 	std::vector<bool> SmallestDR(std::vector<const MCParticleFormat*> jets, std::vector<const MCParticleFormat*> b, int index, int b_index){
	
		std::vector<bool> smallest;
		smallest.push_back(true);
		smallest.push_back(true);
		MALorentzVector jet1 = jets[0]->momentum();
		MALorentzVector jet2 = jets[index]->momentum();
		MAuint32 index3;
		MAuint32 index4;
		boost::tie(index3, index4) = RemainingIndexes(index);
		MALorentzVector jet3 = jets[index3]->momentum();
		MALorentzVector jet4 = jets[index4]->momentum();
		Double_t best_dR = jet1.DeltaR(jet2) + jet3.DeltaR(jet4);
		
		for (MAuint32 i = 1; i < jets.size(); i++){
		
			if (smallest[0] != false){
				MAuint32 indextemp1;
				MAuint32 indextemp2;
				MALorentzVector jtemp1 = jets[0]->momentum();
				MALorentzVector jtemp2 = jets[i]->momentum();
				boost::tie(indextemp1, indextemp2) = RemainingIndexes(i);
				MALorentzVector jtemp3 = jets[indextemp1]->momentum();
				MALorentzVector jtemp4 = jets[indextemp2]->momentum();
				Double_t dR = jtemp1.DeltaR(jtemp2) + jtemp3.DeltaR(jtemp4);
	 			
	 			if (jets[i] != jets[index]){	
					if (dR < best_dR){
						smallest[0] = false;
					}
				}
			}
		}
		
		MALorentzVector dijet1 = (jet1 + jet2);
		MALorentzVector b1 = b[b_index]->momentum();
		MALorentzVector dijet2 = (jet3 + jet4);
		MALorentzVector b2 = b[1 - b_index]->momentum();
		Double_t b_dR = b1.DeltaR(dijet1) + b2.DeltaR(dijet2);
		Double_t temp_b_dR = b1.DeltaR(dijet2) + b2.DeltaR(dijet1);
	 			
		if (temp_b_dR < b_dR){
			smallest[1] = false;
		}
		return smallest;
	}
 	
 	//Defines the two dijets and b_dijets coming from the fully hadronic channel using the criteria defined in ReconstructedEventFullyHadronic, checking if they are not, partially or fullymerged.
	//The two components of the bool vectors notMerged, partiallyMerged, fullyMerged and smallestdr are used (each component for each pair), b_used is not used (all bs are used).
	//Remember jets has 4 jets in this channel.
 	void MergedFullyHadronic(std::vector<const MCParticleFormat*> jets, std::vector<const MCParticleFormat*> b, MA5::MALorentzVector &dijet1, MA5::MALorentzVector &dijet2, MA5::MALorentzVector &b_dijet1, MA5::MALorentzVector &b_dijet2){
 		
 		index_lepton1 = 0;
 		index_lepton2 = 1;
		index_j1 = 0;
		boost::tie(index_j2, index_b1) = ReconstructedEventFullyHadronic(jets, b);
		std::vector<int> indexesj;
		indexesj.push_back(index_j1);
		indexesj.push_back(index_j2);
		boost::tie(index_j3, index_j4) = RemainingIndexes(index_j2);
		indexesj.push_back(index_j3);
		indexesj.push_back(index_j4);
		
		std::vector<int> indexesb;
		indexesb.push_back(index_b1);
		index_b2 = 1 - index_b1;
		indexesb.push_back(index_b2);
		
		smallestdr = SmallestDR(jets, b, index_j2, index_b1);
		dijet1 = MALorentzVector();
		b_dijet1 = MALorentzVector();
		dijet2 = MALorentzVector();
		b_dijet2 = MALorentzVector();
		
		for (MAuint32 i = 0; i < 2; i++){
		
			MALorentzVector jet1 = jets[indexesj[2*i]]->momentum();
			MALorentzVector jet2 = jets[indexesj[(2*i) + 1]]->momentum();
			MALorentzVector dijet = jet1 + jet2;
			Double_t dR_dijet = jet1.DeltaR(jet2);
			MALorentzVector p_b = b[indexesb[i]]->momentum();
			MALorentzVector b_dijet = p_b + dijet;
			
			if (i == 0){
				dijet1 = dijet;
				b_dijet1 = b_dijet;
			}
			else{
				dijet2 = dijet;
				b_dijet2 = b_dijet;
			}
 		
			if (dR_dijet > 0.8){
				notMerged.push_back(true);
				partiallyMerged.push_back(false);
				fullyMerged.push_back(false);
			}
	
			else{
				
				notMerged.push_back(false);
				Double_t dR_bdijet = p_b.DeltaR(dijet);
			
				if (dR_bdijet > 1.0){
					fullyMerged.push_back(false);
					partiallyMerged.push_back(true);
				}
				else{
					fullyMerged.push_back(true);
					partiallyMerged.push_back(false);
				}
			}
		}
	}
	
	//SEMI-LEPTONIC FUNCTIONS**********************************************************************************************************************************************************************
 	//*********************************************************************************************************************************************************************************************
 	//*********************************************************************************************************************************************************************************************
	
	//Defines the dijet and b_dijet coming from the semi leptonic channel searching for the smallest dr between the dijet and bs (2), checking if they are not, partially or fully merged.
	//Only the first component of the bool vectors notMerged, partiallyMerged and fullyMerged are used, smallestdr is not used (as there is only one possible pair).
	//Rememeber jets now only has 2 jets. Also applies the different selection criteria to distinguish the signal over the backgrounds.
	void MergedSemiLeptonic(std::vector<const MCParticleFormat*> jets, std::vector<const MCParticleFormat*> leptons, std::vector<const MCParticleFormat*> neutrinos, std::vector<const MCParticleFormat*> bs, MA5::MALorentzVector &dijet1, MA5::MALorentzVector &b_dijet1, const EventFormat& event, std::string channel){
	
		//This pdgid = 0 has no physical value: just to avoid warnings from initialization of variables. PDGid of the leptons coming from the Z' decay.
		int leptonpdgid = 0;
		//Value of cut-off PT that both leptons coming from the Z' decay should have. Used in the 5th selection criteria.
		Double_t leptonPTcut;
		//Cut-off value in scalar sum of PT that the two leptons coming from the Z' decay should have. Used in the 6th selection criteria.
		Double_t leptonPTscalarsum = 150.0;
		//Cut-off Value in reconstructed mass of the two leptons coming from the Z' decay. Fixed by events that passed the 6th event. Used in the 7th selection criteria.
		Double_t leptonMcut = 290.0;
	
		if (channel == "muon"){
		
			leptonpdgid = 13;
			leptonPTcut = 30.0;
		}
		
		else if (channel == "tauon"){
		
			leptonpdgid = 15;
			leptonPTcut = 20.0;
		}
		
		else{
			std::cout << "Variable [channel] was not correctly defined in .cpp: please only use values of [muon] or [tauon] and try again." << std::endl;
		}
		
		MAuint32 contador = 0;
		
		//Checks if there are at least two muons (tauons, depending on the channel studied) in the final states: the ones poduced by the Z'.
		//If the signal is correctly generated there should exist this two leptons. Only searches for them if the variable channel was correctly defined in the cpp as muon or tauon.
		//Then leptonpdgid and leptonPTcut are correctly initialized (they are different from 0: this was just to avoid warnings from initialization of variables).
		if ((channel == "muon") || (channel == "tauon")){
			for (MAuint32 i = 0; i < leptons.size(); i++){
				if((leptons[i]->pdgid()==leptonpdgid) || (leptons[i]->pdgid()==-leptonpdgid)){
					contador = contador + 1;			
				}	
			}
		}
		
		//Checks the two leptons from the Z' were found. Also checks that leptonpdgid was correctly initialized (cannot be 0).
		if ((contador >= 2) && (leptonpdgid != 0)){
	
			//Searches for the pair of muons (tauons) with the biggest sum of |p|, as there might be a third one. The pair always exists (coming from the Z').
			Double_t biggest_PT_mag = 0.0;
			for (MAuint32 i = 0; i < leptons.size() - 1; i++){
				for (MAuint32 j = i + 1; j < leptons.size(); j++){
					if (((leptons[i]->pdgid()==leptonpdgid) || (leptons[i]->pdgid()==-leptonpdgid)) && ((leptons[j]->pdgid()==leptonpdgid) || (leptons[j]->pdgid()==-leptonpdgid))){
						
						MALorentzVector leptontemp1 = leptons[i]->momentum();
						MALorentzVector leptontemp2 = leptons[j]->momentum();
						
						MAVector3 p1 = leptontemp1.Vect();
						MAVector3 p2 = leptontemp2.Vect();
						
						if (p1.Mag() + p2.Mag() > biggest_PT_mag){
					
							biggest_PT_mag = p1.Mag() + p2.Mag();
							index_lepton1 = i;
							index_lepton2 = j;
						}
					}
				}
			}
			
			//Index of the remaining final state lepton that is not the two muons (tauons) coming from the Z'. Might be an electron or a muon.
			if ((index_lepton1 == 0) && (index_lepton2 == 1)){
				index_remaining = 2;
			}
			else if ((index_lepton1 == 0) && (index_lepton2 == 2)){
				index_remaining = 1;
			}
			else if ((index_lepton1 == 1) && (index_lepton2 == 2)){
				index_remaining = 0;
			}
			
			MALorentzVector lepton1 = leptons[index_lepton1]->momentum();
			MALorentzVector lepton2 = leptons[index_lepton2]->momentum();
			//Remaining lepton, the one that does not come from the Z' but rather from the W leptonic decay.
			MALorentzVector lepton = leptons[index_remaining]->momentum();
			
			index_j1 = 0;
			index_j2 = 1;
			MALorentzVector jet1 = jets[index_j1]->momentum();
			MALorentzVector jet2 = jets[index_j2]->momentum();
			
			dijet1 = MALorentzVector();
			b_dijet1 = MALorentzVector();
			dijet1 = jet1 + jet2;
			Double_t dR_dijet = jet1.DeltaR(jet2);
			
			Double_t best_dR = 999999.9;
			for (MAuint32 i = 0; i < bs.size(); i++){
				const MALorentzVector p_b = bs[i]->momentum();
				Double_t dR = p_b.DeltaR(dijet1);
				if (dR < best_dR){
					best_dR = dR;
					index_b1 = i;
				}
			}
			
			MALorentzVector b1 = bs[index_b1]->momentum();
			index_b2 = 1 - index_b1;
			MALorentzVector b2 = bs[index_b2]->momentum();
			MALorentzVector n1 = neutrinos[0]->momentum();
			
			
			b_dijet1 = b1 + dijet1;
			
			//Counter of the number of events (a no_cut).
			cuts.push_back(true);
	 		
	 		//Checks if the jets are produced not merged, and applies all the selection criteria to the event.
			if (dR_dijet > 0.8){
				notMerged.push_back(true);
				partiallyMerged.push_back(false);
				fullyMerged.push_back(false);
				
				//First selection criteria (for the case when W->e nu_e).
				if ((leptons[index_remaining]->pdgid()==11) || (leptons[index_remaining]->pdgid()==-11)){
					for (MAuint32 i = 0; i < leptons.size(); i++){
					
						if ((leptons[i]->pdgid()==11) || (leptons[i]->pdgid()==-11)){
							
							MALorentzVector leptemp = leptons[i]->momentum();		
							if ((cuts.back() == true) && (leptemp.Pt() > 35.0) && (abs(leptemp.Eta()) < 2.4)){
							
								cuts.push_back(true);
								break;
							}
						}
					}
				}
					
				//First selection criteria (for the case when W->mu nu_mu).
				else if ((leptons[index_remaining]->pdgid()==13) || (leptons[index_remaining]->pdgid()==-13)){
					for (MAuint32 i = 0; i < leptons.size(); i++){
						
						if ((leptons[i]->pdgid()==13) || (leptons[i]->pdgid()==-13)){
							
							MALorentzVector leptemp = leptons[i]->momentum();		
							if ((cuts.back() == true) && (leptemp.Pt() > 35.0) && (abs(leptemp.Eta()) < 2.4)){
							
								cuts.push_back(true);
								break;
							}
						}
					}
				}
				
				//Adds a false to cuts if the event did not pass the first cut for any of the two cases (if the remaining lepton is an electron or a muon).
				if (cuts.size() == 1){
					cuts.push_back(false);
				}
				
				//Second selection criteria.
				cuts.push_back((cuts.back() == true) && (jet1.Pt() > 30.0) && (abs(jet1.Eta()) < 5.0) && (jet2.Pt() > 30.0) && (abs(jet2.Eta()) < 5.0));
				
				//Third selection criteria.
				cuts.push_back((cuts.back() == true) && (b1.Pt() > 30.0) && (abs(b1.Eta()) < 2.4) && (b2.Pt() > 30.0) && (abs(b2.Eta()) < 2.4));
				
				//Fourth selection criteria.
				cuts.push_back((cuts.back() == true) && (PHYSICS->Transverse->EventMET(event.mc()) > 30.0));
				
				//Fifth selection criteria.
				cuts.push_back((cuts.back() == true) && (lepton1.Pt() > leptonPTcut) && (abs(lepton1.Eta()) < 2.4) && (lepton2.Pt() > leptonPTcut) && (abs(lepton2.Eta()) < 2.4) && (Charge(leptons[index_lepton1])*Charge(leptons[index_lepton2]) < 1.0));
				
				//Sixth selection criteria.
				cuts.push_back((cuts.back() == true) && (lepton1.Pt() + lepton2.Pt() > leptonPTscalarsum));
				
				//Seventh selection criteria.
				cuts.push_back((cuts.back() == true) && ((lepton1 + lepton2).M() > leptonMcut));
				
			}
		
			else{
				notMerged.push_back(false);
				if (best_dR > 1.0){
				
					fullyMerged.push_back(false);
					partiallyMerged.push_back(true);
					
					//First selection criteria (for the case when W->e nu_e).
					if ((leptons[index_remaining]->pdgid()==11) || (leptons[index_remaining]->pdgid()==-11)){
						for (MAuint32 i = 0; i < leptons.size(); i++){
						
							if ((leptons[i]->pdgid()==11) || (leptons[i]->pdgid()==-11)){
							
								MALorentzVector leptemp = leptons[i]->momentum();		
								if ((cuts.back() == true) && (leptemp.Pt() > 35.0) && (abs(leptemp.Eta()) < 2.4)){
							
									cuts.push_back(true);
									break;
								}
							}
						}
					}
					
					//First selection criteria (for the case when W->mu nu_mu).
					else if ((leptons[index_remaining]->pdgid()==13) || (leptons[index_remaining]->pdgid()==-13)){
						for (MAuint32 i = 0; i < leptons.size(); i++){
						
							if ((leptons[i]->pdgid()==13) || (leptons[i]->pdgid()==-13)){
							
								MALorentzVector leptemp = leptons[i]->momentum();		
								if ((cuts.back() == true) && (leptemp.Pt() > 35.0) && (abs(leptemp.Eta()) < 2.4)){
							
									cuts.push_back(true);
									break;
								}
							}
						}
					}
					
					if (cuts.size() == 1){
						cuts.push_back(false);
					}
				
					//Second selection criteria.
					cuts.push_back((cuts.back() == true) && (dijet1.Pt() > 30.0) && (abs(dijet1.Eta()) < 5.0));
					
					//Third selection criteria.
					cuts.push_back((cuts.back() == true) && (b1.Pt() > 30.0) && (abs(b1.Eta()) < 2.4) && (b2.Pt() > 30.0) && (abs(b2.Eta()) < 2.4));
					
					//Fourth selection criteria.
					cuts.push_back((cuts.back() == true) && (PHYSICS->Transverse->EventMET(event.mc()) > 30.0));
					
					//Fifth selection criteria.
					cuts.push_back((cuts.back() == true) && (lepton1.Pt() > leptonPTcut) && (abs(lepton1.Eta()) < 2.4) && (lepton2.Pt() > leptonPTcut) && (abs(lepton2.Eta()) < 2.4) && (Charge(leptons[index_lepton1])*Charge(leptons[index_lepton2]) < 1.0));
					
					//Sixth selection criteria.
					cuts.push_back((cuts.back() == true) && (lepton1.Pt() + lepton2.Pt() > leptonPTscalarsum));
					
					//Seventh selection criteria.
					cuts.push_back((cuts.back() == true) && ((lepton1 + lepton2).M() > leptonMcut));
					
				}
				
				else{
				
					fullyMerged.push_back(true);
					partiallyMerged.push_back(false);
					
					//First selection criteria (for the case when W->e nu_e).
					if ((leptons[index_remaining]->pdgid()==11) || (leptons[index_remaining]->pdgid()==-11)){
						for (MAuint32 i = 0; i < leptons.size(); i++){
						
							if ((leptons[i]->pdgid()==11) || (leptons[i]->pdgid()==-11)){
							
								MALorentzVector leptemp = leptons[i]->momentum();		
								if ((cuts.back() == true) && (leptemp.Pt() > 35.0) && (abs(leptemp.Eta()) < 2.4)){
							
									cuts.push_back(true);
									break;
								}
							}
						}
					}
					
					//First selection criteria (for the case when W->mu nu_mu).
					else if ((leptons[index_remaining]->pdgid()==13) || (leptons[index_remaining]->pdgid()==-13)){
						for (MAuint32 i = 0; i < leptons.size(); i++){
						
							if ((leptons[i]->pdgid()==13) || (leptons[i]->pdgid()==-13)){
							
								MALorentzVector leptemp = leptons[i]->momentum();		
								if ((cuts.back() == true) && (leptemp.Pt() > 35.0) && (abs(leptemp.Eta()) < 2.4)){
							
									cuts.push_back(true);
									break;
								}
							}
						}
					}
					
					if (cuts.size() == 1){
						cuts.push_back(false);
					}
				
					//Second selection criteria.
					cuts.push_back((cuts.back() == true) && (b_dijet1.Pt() > 30.0) && (abs(b_dijet1.Eta()) < 5.0));
					
					//Third selection criteria.
					cuts.push_back((cuts.back() == true) && (b2.Pt() > 30.0) && (abs(b2.Eta()) < 2.4));
					
					//Fourth selection criteria.
					cuts.push_back((cuts.back() == true) && (PHYSICS->Transverse->EventMET(event.mc()) > 30.0));
					
					//Fifth selection criteria.
					cuts.push_back((cuts.back() == true) && (lepton1.Pt() > leptonPTcut) && (abs(lepton1.Eta()) < 2.4) && (lepton2.Pt() > leptonPTcut) && (abs(lepton2.Eta()) < 2.4) && (Charge(leptons[index_lepton1])*Charge(leptons[index_lepton2]) < 1.0));
					
					//Sixth selection criteria.
					cuts.push_back((cuts.back() == true) && (lepton1.Pt() + lepton2.Pt() > leptonPTscalarsum));
					
					//Seventh selection criteria.
					cuts.push_back((cuts.back() == true) && ((lepton1 + lepton2).M() > leptonMcut));
					
				}
			}
		}
		
		else{
			std::cout << "Two final state leptons of the required channel were not found. Should exist: the signal might not be correctly generated." << std::endl;
		}
	}
	
	
		
};
}

#endif
