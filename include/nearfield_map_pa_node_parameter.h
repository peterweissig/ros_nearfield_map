/******************************************************************************
*                                                                             *
* nearfield_map_pa_node_parameter.h                                           *
* =================================                                           *
*                                                                             *
*******************************************************************************
*                                                                             *
* Repository:                                                                 *
*   https://github.com/TUC-ProAut/ros_nearfield_map                           *
*                                                                             *
* Chair of Automation Technology, Technische Universität Chemnitz             *
*   https://www.tu-chemnitz.de/etit/proaut                                    *
*                                                                             *
* Author:                                                                     *
*   Peter Weissig                                                             *
*                                                                             *
*******************************************************************************
*                                                                             *
* New BSD License                                                             *
*                                                                             *
* Copyright (c) 2015-2021 TU Chemnitz                                         *
* All rights reserved.                                                        *
*                                                                             *
* Redistribution and use in source and binary forms, with or without          *
* modification, are permitted provided that the following conditions are met: *
*    * Redistributions of source code must retain the above copyright notice, *
*      this list of conditions and the following disclaimer.                  *
*    * Redistributions in binary form must reproduce the above copyright      *
*      notice, this list of conditions and the following disclaimer in the    *
*      documentation and/or other materials provided with the distribution.   *
*    * Neither the name of the copyright holder nor the names of its          *
*      contributors may be used to endorse or promote products derived from   *
*      this software without specific prior written permission.               *
*                                                                             *
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS         *
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED   *
* TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR  *
* PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR           *
* CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,       *
* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,         *
* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; *
* OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,    *
* WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR     *
* OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF      *
* ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                                  *
*                                                                             *
******************************************************************************/

#ifndef __NEARFIELD_MAP_PA_NODE_PARAMETER_H
#define __NEARFIELD_MAP_PA_NODE_PARAMETER_H

// standard headers
#include <string>

//**************************[cNearfieldMapPaNodeParameter]*********************
class cNearfieldMapPaNodeParameter {
  public:
    cNearfieldMapPaNodeParameter(void);

    //! name of the topic for subscribing depth images from camera
    //! ("~/in_camera")
    std::string topic_in_camera_;
    //! name of the topic for subscribing single laserscans ("in_laser_scan")
    std::string topic_in_laser_scan_;
    //! name of the topic for subscribing full laserscans  ("in_laser_full")
    std::string topic_in_laser_full_;

    //! name of the topic for publishing occupied voxels as pointcloud
    //! ("~/out_nearfield")
    std::string topic_out_nearfield_;

    //! name of the topic for publishing the octomap ("~/out_octomap")
    std::string topic_out_octomap_;
    //! name of the topic for publishing the octomap ("~/out_octomap_full")
    std::string topic_out_octomap_full_;

    //! name of the topic for publishing free voxels as pointcloud
    //! ("~/out_cloud_free")
    std::string topic_out_cloud_free_;
    //! name of the topic for publishing occupied voxels as pointcloud
    //! ("~/out_cloud_occupied")
    std::string topic_out_cloud_occupied_;


    //! name of the topic for clearing the octomap ("~/in_clear")
    std::string topic_in_clear_;

    //! frame id expressing the center and orientation of bounding box
    std::string filter_frame_;
    //! flag size of bounding box in x-direction
    double filter_dx_;
    //! flag size of bounding box in y-direction
    double filter_dy_;
    //! flag size of bounding box in z-direction
    double filter_dz_;
};

#endif // __NEARFIELD_MAP_PA_NODE_PARAMETER_H
