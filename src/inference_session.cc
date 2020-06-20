#include <iostream>
#include "../include/inference_session.h"

namespace dfruntime {

InferenceSession::InferenceSession() {
  std::cout<<"empty constructor"<<std::endl;
}

InferenceSession::InferenceSession(SessionOption session_option)
    : session_option_(session_option) {
  std::cout<<"InferenceSession constructor"<<std::endl;
}

void InferenceSession::load() {
  std::cout<<"load model"<<std::endl;
}

void InferenceSession::initialize() {
  std::cout<<"initialize model"<<std::endl;
}

void InferenceSession::run() {
  std::cout<<"run model"<<std::endl;
}


}





