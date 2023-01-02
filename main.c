
int main(void) {
    build_height_layers(9,5);
    randomize(p,0.5);
    randomize_data(data_spread);
    InitWindow(screen_width, screen_height, "nn-scope-C");
    SetTargetFPS(60); 
    load_default_positions();        
    while (!WindowShouldClose())  {
        respond();
        train_backprop(p,100,rate);
        BeginDrawing();
        ClearBackground(BLACK);
        plot_data(data_color);
        plot_weights(weight_color);
        plot_web_positions(vertex_color);
        plot_function(p, f_color);
        EndDrawing(); 
    }
    CloseWindow();  
}