class CfgWeapons
{
    //these weapons should not accept 75rnders
    class arifle_AK12_F;
    class JAM_AE_ARifle_QBZ95_blk : arifle_AK12_F {
        magazines[] = {"JAM_AE_30Rnd_58x42_Magazine","JAM_AE_30Rnd_58x42_Magazine_T"};
        magazineWell[] = {"CTAR_580x42"};
    };

    class JAM_AE_ARifle_QBZ95_GL_blk : JAM_AE_ARifle_QBZ95_blk {
        magazines[] = {"JAM_AE_30Rnd_58x42_Magazine","JAM_AE_30Rnd_58x42_Magazine_T"};
        magazineWell[] = {"CTAR_580x42"};
    };

    class JAM_AE_ARifle_QBZ95_RIS_GL_blk : JAM_AE_ARifle_QBZ95_GL_blk {
        magazines[] = {"JAM_AE_30Rnd_58x42_Magazine","JAM_AE_30Rnd_58x42_Magazine_T"};
        magazineWell[] = {"CTAR_580x42"};
    };
};
