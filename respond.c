void respond() {
    if (    IsKeyDown(KEY_Q)) exit(0);
    if (IsKeyReleased(KEY_D)) randomize_data(1.0);
    if (IsKeyReleased(KEY_P)) randomize(p,0.6);
    if (IsKeyReleased(KEY_L)) {
        L++;if (L >= MAX_L) L = 1;
        build_height_layers(H,L);
    }
    if (IsKeyReleased(KEY_H)) {
        H++;if (H >= MAX_H) H = 1;
        build_height_layers(H,L);
    }
    if (IsKeyReleased(KEY_N)) {
        D--;if (D <= 0) D = MAX_D;
        randomize_data(data_spread);
    }
    if (IsKeyReleased(KEY_M)) {
        D++;if (D > MAX_D) D = 1;
        randomize_data(data_spread);
    }
    if (IsKeyReleased(KEY_Z)) {
        L = 1; H = 1;
        D++;if (D > MAX_D) D = 1;
        build_height_layers(H,L);
    }


}