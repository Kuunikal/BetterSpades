int overlay_textures_id[128] = {0};
int overlay_textures_data[128] = {0};

int kv6_name[128] = {0};
kv6_t* kv6_model[128] = {0};

void ogl_reshape(int width, int height);
void ogl_init();
void ogl_display();
void ogl_map_vxl_load_s(char* data, int x, int y, int z);
void ogl_chunk_rebuild_all();
void ogl_map_set(int x, int y, int z, long long color);
long long ogl_map_get(int x, int y, int z);
void ogl_particle_create(unsigned int color, float x, float y, float z, float velocity, float velocity_y, int amount, float min_size, float max_size);
void ogl_display_min();
int ogl_deprecation_state();
void ogl_render_sprite(char* filename, float x, float y, float z, int xsiz, int ysiz, int zsiz, float dx, float dy, float dz, float rx, float ry, float rz);
void ogl_overlay_setup();
void ogl_render_3d_box(float x, float y, float z, float size, unsigned int color);
int ogl_overlay_bind_fullness();
void overlay_bind_texture(unsigned char* texture, int w, int h);
void ogl_overlay_rect(unsigned char* texture, int texture_width, int texture_height, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, int x, int y, int w, int h);
void ogl_overlay_rect_sub(unsigned char* texture, int texture_width, int texture_height, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, int x, int y, int w, int h, int src_x, int src_y, int src_w, int src_h);
void ogl_overlay_finish();
const char* ogl_info(int i);
void ogl_camera_setup(float a, float b, float x, float y, float z);
