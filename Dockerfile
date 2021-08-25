FROM reo7sp/tgbot-cpp
MAINTAINER Husnu Ehedov <ehedov@gmail.com>

WORKDIR /usr/src/cppbot
COPY . .
RUN cmake .
RUN make -j4
CMD ./cppbot
