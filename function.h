#ifndef FUNCTION_H
#define FUNCTION_H

float current( int R1, int R2, int R3 ) {
    // Put your code here
    // current = voltage / resistance
    float voltage = 20;
    float denominator = 1/float(R1) + 1/float(R2) + 1/float(R3);
    float resistance = 1/denominator;
    float current = voltage/resistance;
    // end your code here
  return current;
}

#endif // FUNCTION_H
