#ifndef FIT_FUNCTIONS_h
#define FIT_FUNCTIONS_h

// Normal distribution
double Normal(double x, double N, double mu, double sg){
  double pi = acos(-1.);
  double G = exp(-pow((x - mu),2) / (2 * pow(sg,2))) / (sqrt(2 * pi) * sg);
  return N * G;
}

double Gaus(double* xs, double* par){
  return Normal(xs[0], par[0], par[1], par[2]);
}

double DoubleGaus(double* xs, double* par){
  double G0 = Normal(xs[0], par[0], par[1], par[2]);
  double G1 = Normal(xs[0], par[3], par[4], par[5]);
  return G0 + G1;
}

#endif
