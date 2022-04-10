/*
Author:
--------------------------------
Peter Aldrich (KompPsy)
Date:
---------------------------------
03/29/2022
Repository:
---------------------------------
Oil-Probability
        Program File :
---------------------------------
main.cpp
        Description:
----------------------------------
This program determines the probability of finding oil in this of a oil company that purchase land in alaska.
        Problem Question
----------------------------------
 An oil company has purchased an option on land in Alaska. Preliminary geologic studies
have assigned the following probabilities of finding oil
P(high quality oil) = 0.50 P(medium quality oil) = 0.20 P(no oil) = 0.30
After 200 feet of drilling on the first well, a soil test is taken. The probabilities of finding
the particular type of soil identified by the test are as follows:
P(soil | high quality oil) = 0.20 P(soil | medium quality oil) = 0.80 P(soil | no oil) = 0.20
• What are the revised probabilities of finding the three different types of oil?
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct oilFinder{

    double highGradeOil;
    double highGradeOilWSoil;
    double mediumGradeOil;
    double mediumGradeOilWSoil;
    double noOil;
    double noGradeOilWSoil;
    double soil;
    double hiGradeProb;
    double medGradeProb;
    double noOilGradeProb;

};

void programDescription();
void getOilProbabilities();
void calculateLoTP();
void calculateHGWS();
void calculateMGWS();
void calculateNGWS();

ofstream outs;

int main() {
    outs.open("OilProbability.txt");
    programDescription();
    getOilProbabilities();
    calculateLoTP();
    calculateHGWS();
    calculateMGWS();
    calculateNGWS();
    outs.close();
    return 0;
}
void programDescription(){
    cout<<"This program determines the probability of finding oil in "
          "this of a oil company that purchase land in alaska."<<endl;
    outs<<"This program determines the probability of finding oil in "
          "this of a oil company that purchase land in alaska."<<endl;
    return;
}
void getOilProbabilities(){
    oilFinder oil;

    oil.highGradeOil = 0.5;
    oil.highGradeOilWSoil=.2;
    oil.mediumGradeOil = 0.2;
    oil.mediumGradeOilWSoil=.8;
    oil.noOil = 0.3;
    oil.noGradeOilWSoil=.2;
    return;

}
void calculateLoTP(){
    oilFinder lotpSoil;

    lotpSoil.soil = ((lotpSoil.highGradeOil * lotpSoil.highGradeOilWSoil) +
                    (lotpSoil.mediumGradeOil * lotpSoil.mediumGradeOilWSoil) +
                    (lotpSoil.noOil * lotpSoil.noGradeOilWSoil));
    return;
}
void calculateHGWS(){
    oilFinder probHighGradeOil;

    probHighGradeOil.hiGradeProb =((probHighGradeOil.highGradeOil *
                                    probHighGradeOil.highGradeOilWSoil ) /
                                            probHighGradeOil.soil);

    cout<<"Probability with High Grade oil in soil: "<< probHighGradeOil.hiGradeProb <<endl;
    outs<<"Probability with High Grade oil in soil: "<< probHighGradeOil.hiGradeProb <<endl;

    return;
}
void calculateMGWS() {
    oilFinder probMediumGradeOil;

    probMediumGradeOil.medGradeProb = ((probMediumGradeOil.mediumGradeOil *
                                            probMediumGradeOil.mediumGradeOilWSoil) /
                                                    probMediumGradeOil.soil);

    cout<<"Probability with Medium Grade oil in soil: "<< probMediumGradeOil.medGradeProb <<endl;
    outs<<"Probability with Medium Grade oil in soil: "<< probMediumGradeOil.medGradeProb <<endl;

    return;
}
void calculateNGWS() {
    oilFinder probNoGradeOilWSoil;

    probNoGradeOilWSoil.noOilGradeProb = ((probNoGradeOilWSoil.noOil *
                                        probNoGradeOilWSoil.noGradeOilWSoil ) /
                                                probNoGradeOilWSoil.soil);

    cout<<"Probability with no Grade oil in soil: "<< probNoGradeOilWSoil.noOilGradeProb <<endl;
    outs<<"Probability with no Grade oil in soil: "<< probNoGradeOilWSoil.noOilGradeProb <<endl;
    return;
}
