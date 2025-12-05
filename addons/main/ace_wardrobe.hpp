class ace_wardrobe {
    class ace_wardrobe_base;
    class ace_wardrobe_base_H_visor_up;
    class ace_wardrobe_mask_on : ace_wardrobe_base_H_visor_up {
        gesture = "GestureWipeFace";
        alternativeActionName = "put mask on helmet";
    };

        class ace_wardrobe_mask_off : ace_wardrobe_base_H_visor_up {
        gesture = "GestureWipeFace";
        alternativeActionName = "remove mask from helmet";
    };

    class H_PilotHelmetHeli_B: ace_wardrobe_mask_off {
        components[] = {};
        class modifiableTo {
            class H_CrewHelmetHeli_B {};
        };
    };
    class H_CrewHelmetHeli_B: ace_wardrobe_mask_on {
        components[] = {};
        class modifiableTo {
            class H_PilotHelmetHeli_B {};
        };
    };
};