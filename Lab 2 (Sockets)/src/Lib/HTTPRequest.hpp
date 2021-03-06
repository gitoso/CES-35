#include <stdio.h>
#include <string.h>

#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

#define BUFFER_SIZE 32768  // 32Kbytes

class HTTPRequest {
 public:
  int port;
  char hostname[200];
  char object[200];
  char method[20];

  void setURL(char* url);
  void setMethod(const char* m);
  std::string buildRequest();
  int getResponseStatus(char* buf);
  int getContentLenght(char* buf);
  const char* getObject();
  void handle(char* buf2, char* buf, int& received);
};
