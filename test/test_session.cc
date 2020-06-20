#include <iostream>
#include <memory>
#include "../include/session_option.h"
#include "../include/inference_session.h"

using namespace dfruntime;
//class InferenceSession;
//struct SessionOption;

int main() {
  std::cout<<"============"<<std::endl;
  //SessionOption option;
  //InferenceSession session();
  std::shared_ptr<InferenceSession> session = std::make_shared<InferenceSession>();
  session->load();
  session->initialize();
  session->run();

  return 0;
}

