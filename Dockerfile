FROM reo7sp/tgbot-cpp
MAINTAINER Husnu Ehedov <ehedov@gmail.com>

RUN apt-get -qq update && \
    apt-get -qq install -y g++ make binutils cmake libssl-dev libboost-system-dev libcurl4-openssl-dev zlib1g-dev
    
WORKDIR /usr/src/cppbot
COPY . .
RUN cmake .
RUN make -j4
CMD .....
