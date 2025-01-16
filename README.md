# What is this?
This is currently a playground for some rendering techniques. At this time I'm just working with getting a renderer
working on native + web, but the end goal is to do some beamforming simulations, kind of like this youtube video:
https://www.youtube.com/watch?v=VOGjHxlisyo

## GGWeb
This application is templated off of GGWEB, found here:
https://github.com/ggerganov/ggweb

This template provides a framework for building applications with SDL + ImGui, with some instructions for building
via emscripten so it can run as a browser application in addition to natively.

## Build native

```bash
# clone repo and build
git clone https://github.com/gRichardson108/beamform.git --recursive
cd beamform && mkdir build && cd build
cmake ..
make -j4

# run the app
./bin/beamform
```

## Build web

```bash
# init emscripten
source /path/to/emsdk/emsdk_env.sh

# clone repo and build
git clone https://github.com/gRichardson108/beamform.git --recursive
cd beamform && mkdir build-em && cd build-em
emcmake cmake ..
make -j4

# update web server
cp ./bin/beamform-app.*        /path/to/www/html/
cp ./bin/beamform-app-public/* /path/to/www/html/
```
