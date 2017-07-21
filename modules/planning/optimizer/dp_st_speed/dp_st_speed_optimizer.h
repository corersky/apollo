/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file dp_st_speed_optimizer.h
 **/

#ifndef BAIDU_IDG_HOUSTON_OPTIMIZER_DP_ST_SPEED_OPTIMIZER_H_
#define BAIDU_IDG_HOUSTON_OPTIMIZER_DP_ST_SPEED_OPTIMIZER_H_

#include "optimizer/speed_optimizer.h"

#include "boost/property_tree/ptree.hpp"

namespace apollo {
namespace planning {

class DpStSpeedOptimizer : public SpeedOptimizer {
 public:
  explicit DpStSpeedOptimizer(const std::string& name,
                              const boost::property_tree::ptree& ptree);

  virtual ErrorCode optimize(const DataCenter& data_center,
                             const PathData& path_data,
                             const ::adu::planning::TrajectoryPoint& init_point,
                             DecisionData* const decision_data,
                             SpeedData* const speed_data) const;
};

}  // namespace planning
}  // namespace apollo

#endif  // BAIDU_IDG_HOUSTON_OPTIMIZER_DP_ST_SPEED_OPTIMIZER_H_
