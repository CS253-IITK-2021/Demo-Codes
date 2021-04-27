# Docker Containers

### Commands Used. 

- Docker Run

`docker run -it -v $PWD:/examples ubuntu`

- Docker Build 
 
Create a `Dockerfile` and build a docker container from it.

`docker build -f example.Dockerfile .`

- Docker Pull 

Fetch and run a docker container in your own system.

`docker pull mongo`

`docker run --name mymongo -it -v $PWD:/data mongo`

- Start & Attach Docker containers

`docker start mymongo`

`docker attach mymongo`

- Create an account on [`Hub`](https://hub.docker.com/) and push an image for the world to use.

`docker login`

`docker push <account-name>/<iamge-name>:<tag> `

- [Docker push](https://docs.docker.com/engine/reference/commandline/push/)

### Useful links : 

- [Docker Docs](https://docs.docker.com/)
- [Docker Hub](https://hub.docker.com/)
- [My Docker Hub Page](https://hub.docker.com/u/prodrelworks)

### Docker Automation : 

Run a small number of docker containers from `docker` build to actual run.

- [Docker Compose](https://docs.docker.com/compose/)
- [Sample Apps](https://docs.docker.com/compose/samples-for-compose/)

### Docker Orchestrisation

This is an automated way to run, manage, deploy & auto-scale docker containers. There are other frameworks that don't use docker rather other container service but the technical concept is still the same. AWS is a cloud service provider to run & deploy not just docker containters but a wide variety of applications and frameworks. It comes under the `PaaS` Model (Platform as a Service) as well as a bit into `IaaS` (Infrastructure as a Service) model.

- [Docker Swarm](https://docs.docker.com/engine/swarm/swarm-tutorial/)
- [Kubernetes](https://kubernetes.io/)
- [Kubernetes on AWS](https://aws.amazon.com/kubernetes/)
- [Google Kubernetes Engine](https://cloud.google.com/kubernetes-engine)

### Cool Example of Docker 

I ran MacOSX from docker using `QEMU` and container from `sidekick`. 

```
sudo docker run --name macosx \
    --device /dev/kvm \
    --device /dev/snd \
    -e AUDIO_DRIVER=pa,server=unix:/tmp/pulseaudio.socket \
    -v "/run/user/$(id -u)/pulse/native:/tmp/pulseaudio.socket" \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    -e PULSE_SERVER=unix:/tmp/pulseaudio.socket \
    --privileged \
    --net host \
    --cap-add=ALL \
    -e SMP=4 \
    -e CORES=4 \
    -e RAM=16 \
    -p 50922:10022 \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    -e EXTRA='-usb -device usb-host,hostbus=1,hostaddr=2' \
    -v /dev:/dev \
    -v /lib/modules:/lib/modules \
    -e "DISPLAY=${DISPLAY:-:0.0}" \
    sickcodes/docker-osx:latest
```

## More Topics 

- Explore the use of Dockers in CD/CI systems.
- Docker FileSystem. 
- Run a ML model from a docker container. (Try it out!)
