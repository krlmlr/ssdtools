// Generated by TMBtools: do not edit by hand

#define TMB_LIB_INIT R_init_ssdtools_TMBExports
#include <TMB.hpp>
#include "ll_lnorm.hpp"
#include "ll_llogis.hpp"

template<class Type>
Type objective_function<Type>::operator() () {
  DATA_STRING(model);
  if(model == "ll_lnorm") {
    return ll_lnorm(this);
  } else if (model == "ll_llogis") {
    return ll_llogis(this);
  } else {
    error("Unknown model.");
  }
  return 0;
}
