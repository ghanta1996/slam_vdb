# Use the official ROS image as the base image
FROM ros:jazzy

# Set shell for running commands
SHELL ["/bin/bash", "-c"]

# install bootstrap tools
RUN apt-get update && apt-get install --no-install-recommends -y \
  build-essential \
  git \
  python3-colcon-common-extensions \
  python3-colcon-mixin \
  python3-rosdep \
  python3-vcstool  \
  ros-jazzy-desktop \
  && rm -rf /var/lib/apt/lists/*

# Set the entrypoint to source ROS setup.bash and run a bash shell
CMD ["/bin/bash"]
