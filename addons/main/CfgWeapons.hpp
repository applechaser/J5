class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons
{
    class Rifle_Base_F;
    class Rifle_Long_Base_F: Rifle_Base_F {};
    class arifle_MX_Base_F : Rifle_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(0.90);
        };
        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(0.90);
        };
    };
    //regular MX may only accept 30rnd Mags
    class arifle_MX_F: arifle_MX_Base_F {
        magazineWell[] = {"MX_65x39","CBA_65x39_MX"};
    };
    class arifle_MX_GL_F: arifle_MX_Base_F {
        magazineWell[] = {"MX_65x39","CBA_65x39_MX"};
    };
    class arifle_MXC_F: arifle_MX_Base_F {
        magazineWell[] = {"MX_65x39","CBA_65x39_MX"};
        class Single : Single {
            dispersion = MOA_TO_RAD(0.90);
        };
        class FullAuto : FullAuto {
            dispersion = MOA_TO_RAD(0.90);
        };
    };
    class arifle_MXM_F: arifle_MX_Base_F {
        magazineWell[] = {"MX_65x39","CBA_65x39_MX"};
        class Single : Single {
            dispersion = MOA_TO_RAD(0.90);
        };
        class FullAuto : FullAuto {
            dispersion = MOA_TO_RAD(0.90);
        };
    };
    //MXAR and variants may only accept 30rnd Mags
    class ef_arifle_mxar: arifle_MX_Base_F {
        magazineWell[] = {"MX_65x39","CBA_65x39_MX"};
    };

    //regular QBZ-95s may only accept 30rnd Mags
    class arifle_CTAR_base_F : Rifle_Base_F {
        magazineWell[] = {"CTAR_580x42","CBA_CTAR_580x42"};
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(1.12);
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(1.12);
        };
    };


    //ace realistic disperion stuff
    // GM6 Lynx
    class GM6_base_F: Rifle_Long_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(0.45);
        };
    };

    // M200 Intervention
    class LRR_base_F: Rifle_Long_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(0.50);
        };
    };

    // KH2002 Sama
    class arifle_katiba_Base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(0.90);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(0.90);
        };
    };

    // CTAR-21
    class Tavor_base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(1.12);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(1.12);
        };
    };

    // F2000
    class mk20_base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(1.12);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(1.12);
        };
    };

    // Noreen "Bad News" ULR
    class DMR_02_base_F: Rifle_Long_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(0.61);
        };
    };

    // VS-121
    class DMR_01_base_F: Rifle_Long_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(0.81);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(0.81);
        };
    };

    // Mk14 Mod 1 EBR
    class EBR_base_F: Rifle_Long_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(0.81);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(0.81);
        };
    };

    // SIG 556
    class DMR_03_base_F: Rifle_Long_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(0.81);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(0.81);
        };
    };

    // ASP-1 Kir
    class DMR_04_base_F: Rifle_Long_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(1.0);
        };
    };

    // Cyrus
    class DMR_05_base_F: Rifle_Long_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(0.67);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(0.67);
        };
    };

    // M14
    class DMR_06_base_F: Rifle_Long_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(0.81);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(0.81);
        };
    };

    class DMR_06_hunter_base_F: DMR_06_base_F {
        class Single: Single {
            dispersion = MOA_TO_RAD(0.81);
        };
    };

    // MX LSW
    class arifle_MX_SW_F: arifle_MX_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(0.90);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(0.90);
        };
    };

    // HK416A5 11"
    class arifle_SPAR_01_base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(1.12);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(1.12);
        };
    };

    // HK416A5 14.5"
    class arifle_SPAR_02_base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(1.12);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(1.12);
        };
    };

    // HK417A2 20"
    class arifle_SPAR_03_base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(0.81);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(0.81);
        };
    };

    // RFB SDAR
    class SDAR_base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(3.0);
        };

        class Burst: Mode_Burst {
            dispersion = MOA_TO_RAD(3.0);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(3.0);
        };
    };

    // QBU-88
    class DMR_07_base_F: Rifle_Long_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(1.01);
        };
    };

    // QBZ-95-1 LSW
    class arifle_CTARS_base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(1.12);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(1.12);
        };
    };

    // Type 115
    class arifle_ARX_base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = MOA_TO_RAD(0.90);
        };

        class FullAuto: Mode_FullAuto {
            dispersion = MOA_TO_RAD(0.90);
        };
    };

    // KH2002C Sama
    class arifle_Katiba_C_F: arifle_katiba_Base_F {
        class Single: Single {
            dispersion = MOA_TO_RAD(0.90);
        };

        class FullAuto: FullAuto {
            dispersion = MOA_TO_RAD(0.90);
        };
    };

    // TAR-21
    class arifle_TRG21_F: Tavor_base_F {
        class Single: Single {
            dispersion = MOA_TO_RAD(1.12);
        };

        class FullAuto: FullAuto {
            dispersion = MOA_TO_RAD(1.12);
        };
    };

    // F2000 Tactical
    class arifle_Mk20C_F: mk20_base_F {
        class Single: Single {
            dispersion = MOA_TO_RAD(1.12);
        };

        class FullAuto: FullAuto {
            dispersion = MOA_TO_RAD(1.12);
        };
    };

};
