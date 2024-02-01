FROM node:20.10.0-bookworm-slim

RUN apt-get update && \
    DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
    gcc-12 \
    g++-12 \
    gdb \
    make \
    git \
    python3 \
    python3-pip && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

RUN pip3 install --break-system-packages online-judge-tools==11.5.1 && \
    npm install -g atcoder-cli@2.2.0 && \
    git clone https://github.com/atcoder/ac-library.git /lib/ac-library

ENV CPLUS_INCLUDE_PATH=/lib/ac-library

RUN groupmod -n atcoder node
RUN usermod -l atcoder -m -d /home/atcoder node
RUN echo "atcoder ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

USER atcoder

RUN mkdir -p \
    /home/atcoder/.local/share/online-judge-tools \
    /home/atcoder/.config/atcoder-cli-nodejs
