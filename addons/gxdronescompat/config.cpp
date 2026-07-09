#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        name = "J8";
        author = "applechaser";
        units[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"cba_main","gx_drones_core"};
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgMagazines.hpp"
