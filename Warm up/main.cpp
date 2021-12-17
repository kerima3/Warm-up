//
//  main.cpp
//  Warm up
//
//  Created by Kerima Hussen on 12/17/21.
//

#include <iostream>
#include <string>

using namespace std;

void reversePriceOrder(<int>& car)

{

int n = car.size();

int temp;

for(int i=0; i<n; i++){

for(j=1; j<=n ; j++){

if(car[i] < car[j]){

temp = car[i];

car[i] = car[j];

car[j] = temp;

}

}

}

for(int k=0;k<n;k++){

cout << car[i] << endl;

}

}
