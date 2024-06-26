/**
 * @file slam_vdb_ros.hpp
 * @copyright Software License Agreement
 *
 * Copyright (c) 2024
 *
 * All rights reserved.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @author
 */
#pragma once

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"

namespace slam_vdb_ros {

class SlamVDBROS : public rclcpp::Node
{
public:
  explicit SlamVDBROS(const rclcpp::NodeOptions &options);
  virtual ~SlamVDBROS();

private:
  void setUpROSParams();
  void setUpROSInterfaces();

  void pointcloudCallback(sensor_msgs::msg::PointCloud2::ConstSharedPtr cloud);

private:
  size_t cloud_queue_size_;

  rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr pointcloud_sub_;
};

}  // namespace slam_vdb_ros
