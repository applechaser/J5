#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        name = "J5";
        author = "applechaser";
        requiredVersion = 1.0;
        requiredAddons[] = {"cba_main"};
    };
};


class CfgWeapons
{
    class arifle_MX_Base_F;
    class arifle_MX_F: arifle_MX_Base_F
    {
        magazineWell[] = {"MX_65x39","CBA_65x39_MX"};
    };
    class arifle_MX_GL_F: arifle_MX_Base_F
    {
        magazineWell[] = {"MX_65x39","CBA_65x39_MX"};
    };
    class arifle_MXC_F: arifle_MX_Base_F
    {
        magazineWell[] = {"MX_65x39","CBA_65x39_MX"};
    };
    class arifle_MXM_F: arifle_MX_Base_F
    {
        magazineWell[] = {"MX_65x39","CBA_65x39_MX"};
    };
    class ef_arifle_mxar: arifle_MX_Base_F
    {
        magazineWell[] = {"MX_65x39","CBA_65x39_MX"};
    };
};