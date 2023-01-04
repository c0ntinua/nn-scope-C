
int main(void) {
    build_height_layers(9,5);
    update_activations();
    randomize(p,0.5);
    randomize_data(data_spread);
    InitWindow(screen_width, screen_height, "nn-scope-C");
    Font font = LoadFontEx("SourceCodePro-Regular.ttf", 20, 0, 0);
    SetTargetFPS(60); 
    load_default_positions();      
    while (!WindowShouldClose())  {
        respond();
        display_activations(font);
        display_rate(font);
        train_backprop(p,100,rate);
        BeginDrawing();
        ClearBackground(BLACK);
        plot_weights(weight_color);
        plot_web_positions(vertex_color);
        plot_function(p, f_color);
        plot_data(data_color);
        EndDrawing(); 
    }
    CloseWindow();  
}
// Font font,
// String text,
// Vector2 position,
// double fontSize,
// double spacing,
// Color tint