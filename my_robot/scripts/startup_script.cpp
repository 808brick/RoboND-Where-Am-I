#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin
  {
    public: WorldPluginMyRobot() : WorldPlugin()
            {
              printf("\n");
              printf("Welcome to one of research labs of Team Kanaloa, a marine robotics research lab at the University of Hawaii!\n");
              printf("\n");
              printf("Note: This model is not to scale.\n");
              printf("\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
