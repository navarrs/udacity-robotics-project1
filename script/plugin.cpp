/**
 * @file: plugin.cpp
 * @author: Ingrid Navarro
 * @brief - Simple Gazebo plugin. 
 */
#include <gazebo/gazebo.hh>

namespace gazebo {
  
class WorldPluginMyRobot : public WorldPlugin
{
  public: 
    WorldPluginMyRobot() : WorldPlugin()
    {
      printf("Welcome to Ingrid’s World!\n");
    }

    void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
    {
      /* Empty body. */
    }
};
GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)

} /* End of namespace gazebo. */