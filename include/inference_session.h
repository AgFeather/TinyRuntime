#pragma once
#include "session_option.h"

namespace dfruntime{
class InferenceSession {
public:
  InferenceSession(SessionOption session_option);
  InferenceSession();
  void load();
  void initialize();
  void run();



private:
  SessionOption session_option_;
  //Model model_;

};
}
