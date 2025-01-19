#include "example.h"


// Defining the atomic type which basiclly allows for multiple threads to talk to this
// variable and it choses the correct one without any problems and making it thread safe
// In this case making sure that the program knows it running without stopping because another thread said to
std::atomic<bool> run(true);


void handle_signal(int signal){
  run = false;
}


void dots_loading(const string& message){
  const string frames[] = {"", ".", "..", "...", "...."};
  int frame_count = 5;

  while(run){
    for(int i = 0; i < frame_count && run; i++){
      cout << "\r" << message << frames[i] << flush;
      this_thread::sleep_for(chrono::milliseconds(500));
    }
  }

  // Clear the line
  //

  cout << "\r" << string(message.size() + 5, ' ') << "\r" << flush;
}


