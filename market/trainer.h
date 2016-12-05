/*
 * trainer.h
 *
 *  Created on: Nov 2, 2016
 *      Author: root
 */

#ifndef MARKET_TRAINER_H_
#define MARKET_TRAINER_H_
#include <vector>
class trainer {
public:
	int simulationId=0;
	int previoussimulationId=-1;
	void training(void);
	std::vector<double> makePrediction(int x);
	double getresult();
	double wind(int x);
	double solar(int x);
	void setNextAuctionTime(char t[]);
	std::vector<double> getPredictions(char day[]);
	double getSinglePrediction(char day[]);
	double getSingleLoadPrediction(char day[]);
	void printResults(double totalLoad, double totalSupply, double nashL);
	void printResultsSingleConsumer(double totalLoad, double totalSupply, double nashL, double totalCalculatedLoad, double initLoad, double calculatedLoad);
};

#endif /* MARKET_TRAINER_H_ */
