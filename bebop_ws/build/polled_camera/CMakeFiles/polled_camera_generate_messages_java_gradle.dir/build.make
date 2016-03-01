# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/robot/bebop_ws/src/image_common/polled_camera

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robot/bebop_ws/build/polled_camera

# Utility rule file for polled_camera_generate_messages_java_gradle.

# Include the progress variables for this target.
include CMakeFiles/polled_camera_generate_messages_java_gradle.dir/progress.make

CMakeFiles/polled_camera_generate_messages_java_gradle: java/polled_camera/build.gradle
CMakeFiles/polled_camera_generate_messages_java_gradle: /home/robot/bebop_ws/src/image_common/polled_camera/srv/GetPolledImage.srv
CMakeFiles/polled_camera_generate_messages_java_gradle: /opt/ros/indigo/share/sensor_msgs/cmake/../msg/RegionOfInterest.msg
	$(CMAKE_COMMAND) -E cmake_progress_report /home/robot/bebop_ws/build/polled_camera/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Compiling Java code for polled_camera"
	cd /home/robot/bebop_ws/build/polled_camera/java/polled_camera && /home/robot/bebop_ws/build/polled_camera/catkin_generated/env_cached.sh /usr/bin/python /opt/ros/indigo/share/genjava/cmake/../../../lib/genjava/genjava_gradle_project.py --compile -o /home/robot/bebop_ws/build/polled_camera/java -p polled_camera

java/polled_camera/build.gradle: /opt/ros/indigo/share/genjava/cmake/../../../lib/genjava/genjava_gradle_project.py
java/polled_camera/build.gradle: /home/robot/bebop_ws/src/image_common/polled_camera/srv/GetPolledImage.srv
java/polled_camera/build.gradle: /opt/ros/indigo/share/sensor_msgs/cmake/../msg/RegionOfInterest.msg
	$(CMAKE_COMMAND) -E cmake_progress_report /home/robot/bebop_ws/build/polled_camera/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating Java gradle project from polled_camera"
	catkin_generated/env_cached.sh /usr/bin/python /opt/ros/indigo/share/genjava/cmake/../../../lib/genjava/genjava_gradle_project.py -o /home/robot/bebop_ws/build/polled_camera/java -p polled_camera
	touch /home/robot/bebop_ws/build/polled_camera/java/polled_camera/droppings

polled_camera_generate_messages_java_gradle: CMakeFiles/polled_camera_generate_messages_java_gradle
polled_camera_generate_messages_java_gradle: java/polled_camera/build.gradle
polled_camera_generate_messages_java_gradle: CMakeFiles/polled_camera_generate_messages_java_gradle.dir/build.make
.PHONY : polled_camera_generate_messages_java_gradle

# Rule to build all files generated by this target.
CMakeFiles/polled_camera_generate_messages_java_gradle.dir/build: polled_camera_generate_messages_java_gradle
.PHONY : CMakeFiles/polled_camera_generate_messages_java_gradle.dir/build

CMakeFiles/polled_camera_generate_messages_java_gradle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/polled_camera_generate_messages_java_gradle.dir/cmake_clean.cmake
.PHONY : CMakeFiles/polled_camera_generate_messages_java_gradle.dir/clean

CMakeFiles/polled_camera_generate_messages_java_gradle.dir/depend:
	cd /home/robot/bebop_ws/build/polled_camera && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robot/bebop_ws/src/image_common/polled_camera /home/robot/bebop_ws/src/image_common/polled_camera /home/robot/bebop_ws/build/polled_camera /home/robot/bebop_ws/build/polled_camera /home/robot/bebop_ws/build/polled_camera/CMakeFiles/polled_camera_generate_messages_java_gradle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/polled_camera_generate_messages_java_gradle.dir/depend

